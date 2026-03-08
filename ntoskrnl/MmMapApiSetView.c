/*
 * XREFs of MmMapApiSetView @ 0x140707874
 * Callers:
 *     PspSetupUserProcessAddressSpace @ 0x14070733C (PspSetupUserProcessAddressSpace.c)
 *     PspAllocateProcess @ 0x140707E10 (PspAllocateProcess.c)
 * Callees:
 *     PsGetProcessServerSilo @ 0x1402637E0 (PsGetProcessServerSilo.c)
 *     PsGetServerSiloGlobals @ 0x1402992FC (PsGetServerSiloGlobals.c)
 *     PsIsHostSilo @ 0x14030F2E0 (PsIsHostSilo.c)
 *     MmMapViewOfSection @ 0x14069EC70 (MmMapViewOfSection.c)
 */

__int64 __fastcall MmMapApiSetView(__int64 a1)
{
  __int64 ProcessServerSilo; // rdi
  __int64 v3; // rcx
  char v4; // di
  __int64 result; // rax
  unsigned int v6; // edx
  __int64 v7; // rcx
  __int64 *v8; // rax
  __int16 v9; // ax
  __int64 v10; // [rsp+68h] [rbp+10h] BYREF
  __int64 v11; // [rsp+70h] [rbp+18h] BYREF
  __int64 v12; // [rsp+78h] [rbp+20h] BYREF

  v10 = 0LL;
  v12 = 0LL;
  v11 = 0LL;
  ProcessServerSilo = PsGetProcessServerSilo(a1);
  if ( PsIsHostSilo(ProcessServerSilo) )
    LODWORD(v3) = qword_140C65470;
  else
    v3 = *((_QWORD *)PsGetServerSiloGlobals(ProcessServerSilo) + 129);
  v4 = 1;
  result = MmMapViewOfSection(v3, a1, &v10, 0LL, 0, (__int64)&v12, &v11, 1, 0x400000, 2);
  v6 = result;
  if ( (int)result >= 0 )
  {
    *(_QWORD *)(*(_QWORD *)(a1 + 1360) + 104LL) = v10;
    v7 = 0LL;
    v8 = *(__int64 **)(a1 + 1408);
    if ( v8 )
      v7 = *v8;
    if ( v7 )
    {
      if ( !v8 )
        goto LABEL_13;
      v9 = *(_WORD *)(a1 + 2412);
      if ( v9 != 332 && v9 != 452 )
        v4 = 0;
      if ( v4 )
        *(_DWORD *)(v7 + 56) = v10;
      else
LABEL_13:
        *(_QWORD *)(v7 + 104) = v10;
    }
    return v6;
  }
  return result;
}
