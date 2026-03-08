/*
 * XREFs of MiLockPatchIatForDV @ 0x14063E0B0
 * Callers:
 *     <none>
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x14020F4D4 (MiGetAnyMultiplexedVm.c)
 *     IopAllocateMdl @ 0x140241F90 (IopAllocateMdl.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1403272A0 (MmMapLockedPagesSpecifyCache.c)
 *     MiGetSystemRegionType @ 0x14032E6D0 (MiGetSystemRegionType.c)
 *     RtlImageDirectoryEntryToData @ 0x14035E710 (RtlImageDirectoryEntryToData.c)
 *     MiGetSessionVm @ 0x14036C17C (MiGetSessionVm.c)
 *     MiLockDriverPageRange @ 0x1406179F0 (MiLockDriverPageRange.c)
 *     MiUnlockAndFreeDvPatchImage @ 0x14063EDD4 (MiUnlockAndFreeDvPatchImage.c)
 *     MiInitializeDriverPatchState @ 0x1407F746C (MiInitializeDriverPatchState.c)
 *     MiPrepareDriverPatchState @ 0x140A28934 (MiPrepareDriverPatchState.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

_BOOL8 __fastcall MiLockPatchIatForDV(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rdi
  __int64 v3; // r13
  __int64 v5; // r15
  __int64 v6; // r14
  __int64 Pool2; // rax
  int v8; // ebx
  __int64 *v9; // r12
  unsigned __int64 SessionVm; // rax
  __int64 v11; // r9
  __int64 *v12; // rsi
  __int64 Mdl; // rax
  unsigned int v14; // r9d
  __int64 v15; // r8
  char *v16; // rcx
  char *v17; // rcx
  _QWORD *v18; // rcx
  unsigned int v20; // [rsp+70h] [rbp+8h] BYREF
  int v21; // [rsp+78h] [rbp+10h]

  v20 = 0;
  v21 = 0;
  v2 = 0LL;
  v3 = a2;
  LOBYTE(a2) = 1;
  v5 = RtlImageDirectoryEntryToData(*(_QWORD *)(a1 + 48), a2, 12, (int)&v20);
  if ( v5 && (v6 = v20, v20 >= 8) )
  {
    Pool2 = ExAllocatePool2(64LL, 144LL, 1349807944LL);
    v2 = (_QWORD *)Pool2;
    if ( !Pool2 )
    {
LABEL_4:
      v8 = -1073741670;
      goto LABEL_24;
    }
    v9 = (__int64 *)(Pool2 + 16);
    MiInitializeDriverPatchState(a1, Pool2 + 16);
    if ( (unsigned int)MiGetSystemRegionType(*(_QWORD *)(a1 + 48)) == 1 )
      SessionVm = MiGetSessionVm();
    else
      SessionVm = (unsigned __int64)MiGetAnyMultiplexedVm(1);
    v8 = MiPrepareDriverPatchState(v9, SessionVm);
    if ( v8 < 0 )
      goto LABEL_24;
    if ( (MiFlags & 0x8000) != 0 )
    {
      v21 = 1;
      v12 = v2 + 15;
    }
    else
    {
      Mdl = IopAllocateMdl(*(_QWORD *)(a1 + 48), *(_DWORD *)(a1 + 64), 0, v11, 0LL, 0);
      v12 = v2 + 15;
      v2[15] = Mdl;
      if ( !Mdl )
        goto LABEL_4;
      v14 = 0;
      if ( ((*(unsigned int *)(Mdl + 40) + (*(_DWORD *)(Mdl + 32) & 0xFFFLL) + 4095) & 0xFFFFFFFFFFFFF000uLL) != 0 )
      {
        v15 = 0LL;
        do
        {
          ++v14;
          *(_QWORD *)(Mdl + 8 * v15 + 48) = qword_140C69388;
          v15 = v14;
        }
        while ( v14 < (*(unsigned int *)(*v12 + 40) + (*(_DWORD *)(*v12 + 32) & 0xFFFuLL) + 4095) >> 12 );
      }
    }
    v8 = MiLockDriverPageRange(
           v9,
           (unsigned int)(v5 - *(_DWORD *)(a1 + 48)) >> 12,
           ((unsigned int)(v5 - *(_DWORD *)(a1 + 48)) >> 12) + ((v6 + 4095 + (unsigned __int64)(v5 & 0xFFF)) >> 12) - 1,
           v21,
           *v12);
    if ( v8 >= 0 )
    {
      if ( *v12 )
      {
        v16 = (char *)MmMapLockedPagesSpecifyCache((PMDL)*v12, 0, MmCached, 0LL, 0, 0x10u);
        if ( !v16 )
          goto LABEL_4;
        v17 = &v16[v5 - *(_QWORD *)(a1 + 48)];
      }
      else
      {
        v17 = (char *)v5;
      }
      *((_DWORD *)v2 + 34) = v6;
      v2[16] = v17;
      v18 = *(_QWORD **)(v3 + 64);
      if ( *v18 != v3 + 56 )
        __fastfail(3u);
      *v2 = v3 + 56;
      v2[1] = v18;
      *v18 = v2;
      *(_QWORD *)(v3 + 64) = v2;
      v2 = 0LL;
    }
  }
  else
  {
    v8 = 0;
  }
LABEL_24:
  *(_DWORD *)(v3 + 72) = v8;
  if ( v2 )
    MiUnlockAndFreeDvPatchImage(v2);
  return v8 >= 0;
}
