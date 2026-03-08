/*
 * XREFs of MiLockAndMapEntireDriver @ 0x140A31608
 * Callers:
 *     MiReapplyImportOptimizationForDriverVerifier @ 0x14063E4F8 (MiReapplyImportOptimizationForDriverVerifier.c)
 * Callees:
 *     IoAllocateMdl @ 0x14020CAD0 (IoAllocateMdl.c)
 *     MiGetAnyMultiplexedVm @ 0x14020F4D4 (MiGetAnyMultiplexedVm.c)
 *     IoFreeMdl @ 0x1403147E0 (IoFreeMdl.c)
 *     MiReservePtes @ 0x1403274D0 (MiReservePtes.c)
 *     MiFillSystemPtes @ 0x140328C00 (MiFillSystemPtes.c)
 *     MiLockDriverPageRange @ 0x1406179F0 (MiLockDriverPageRange.c)
 *     MiPrepareDriverPatchState @ 0x140A28934 (MiPrepareDriverPatchState.c)
 */

__int64 __fastcall MiLockAndMapEntireDriver(__int64 a1, __int64 *a2, struct _MDL **a3)
{
  struct _MDL *v4; // rdi
  __int64 v7; // r14
  char *AnyMultiplexedVm; // rax
  int v9; // ebx
  ULONG v10; // edx
  unsigned int v11; // esi
  PMDL Mdl; // rax
  struct _MDL *v13; // rcx
  __int64 v14; // rdx
  ULONG_PTR v15; // rbp
  int v17; // [rsp+78h] [rbp+20h] BYREF

  v17 = 0;
  v4 = 0LL;
  v7 = 0LL;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  v9 = MiPrepareDriverPatchState((__int64)a2, (__int64)AnyMultiplexedVm);
  if ( v9 >= 0 )
  {
    v10 = *(_DWORD *)(a1 + 64);
    v11 = (v10 >> 12) + ((v10 & 0xFFF) != 0);
    if ( a3 )
    {
      Mdl = IoAllocateMdl(*(PVOID *)(a1 + 48), v10, 0, 0, 0LL);
      v4 = Mdl;
      if ( !Mdl )
        return (unsigned int)-1073741670;
      v7 = (__int64)&Mdl[1];
      if ( v11 )
      {
        v13 = Mdl + 1;
        v14 = v11;
        do
        {
          v13->Next = (struct _MDL *)qword_140C69388;
          v13 = (struct _MDL *)((char *)v13 + 8);
          --v14;
        }
        while ( v14 );
      }
    }
    v9 = MiLockDriverPageRange(a2, 0, v11 - 1, 2, (__int64)v4);
    if ( v9 >= 0 && a3 )
    {
      v15 = MiReservePtes((__int64)&qword_140C695C0, v11);
      if ( v15 )
      {
        v9 = MiFillSystemPtes(v15, v11, v7, 4u, 2, &v17);
        v4->MdlFlags |= 1u;
        v4->MappedSystemVa = (PVOID)((__int64)(v15 << 25) >> 16);
        *a3 = v4;
        return (unsigned int)v9;
      }
      v9 = -1073741670;
    }
    if ( v4 )
      IoFreeMdl(v4);
  }
  return (unsigned int)v9;
}
