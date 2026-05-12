/*
 * XREFs of RaUnitStorageFreeDumpInfo @ 0x1C00491B8
 * Callers:
 *     RaUnitStorageDumpControl @ 0x1C007B500 (RaUnitStorageDumpControl.c)
 * Callees:
 *     RaidAcquireAdapterRemoveLock @ 0x1C000B9B4 (RaidAcquireAdapterRemoveLock.c)
 *     StorPortReleaseAdditionalCrashDumpArea @ 0x1C00155B8 (StorPortReleaseAdditionalCrashDumpArea.c)
 *     _guard_dispatch_icall_nop @ 0x1C0020190 (_guard_dispatch_icall_nop.c)
 *     RaidAdapterFreeDriverInfo @ 0x1C002CA08 (RaidAdapterFreeDriverInfo.c)
 *     RaidAdapterFreeDumpInfo @ 0x1C002CAF0 (RaidAdapterFreeDumpInfo.c)
 *     RaidUnitFreeDumpInfo @ 0x1C004A960 (RaidUnitFreeDumpInfo.c)
 *     RaidAdapterFreeMiniportDumpInfo @ 0x1C007843C (RaidAdapterFreeMiniportDumpInfo.c)
 */

__int64 __fastcall RaUnitStorageFreeDumpInfo(__int64 a1, _QWORD *a2)
{
  __int64 v4; // r15
  _QWORD *v5; // rax
  __int64 v6; // r8
  _QWORD *v7; // rdx
  __int64 v8; // rdi
  _QWORD *v9; // rcx
  _QWORD *i; // rax
  __int64 v11; // rcx
  _QWORD *v12; // rdx
  __int64 v13; // rbp
  __int64 v14; // rbx
  void (__fastcall *v15)(_QWORD); // rax
  __int64 v16; // rcx
  _QWORD *v17; // rax
  __int64 v18; // r8
  _QWORD *v19; // rdx
  _QWORD *v21; // [rsp+58h] [rbp+10h] BYREF
  PVOID *v22; // [rsp+60h] [rbp+18h] BYREF

  v21 = a2;
  v4 = *(_QWORD *)(a2[6] + 8LL);
  v5 = a2 + 1;
  v6 = a2[1];
  if ( *(_QWORD **)(v6 + 8) != a2 + 1 )
    goto LABEL_24;
  v7 = (_QWORD *)a2[2];
  if ( (_QWORD *)*v7 != v5 )
    goto LABEL_24;
  *v7 = v6;
  *(_QWORD *)(v6 + 8) = v7;
  v8 = a2[7];
  if ( v8 )
  {
    v9 = (_QWORD *)(a1 + 24);
    a2[7] = 0LL;
    v22 = (PVOID *)v8;
    for ( i = (_QWORD *)*v9; i != v9; i = (_QWORD *)*i )
    {
      if ( i[6] == v8 )
        goto LABEL_16;
    }
    *(_QWORD *)(v8 + 56) = 0LL;
    v11 = *(_QWORD *)(v8 + 8);
    if ( *(_QWORD *)(v11 + 8) != v8 + 8 || (v12 = *(_QWORD **)(v8 + 16), *v12 != v8 + 8) )
LABEL_24:
      __fastfail(3u);
    *v12 = v11;
    *(_QWORD *)(v11 + 8) = v12;
    v13 = *(_QWORD *)(v8 + 48);
    v14 = *(_QWORD *)(v13 + 8);
    if ( (int)RaidAcquireAdapterRemoveLock(v14) >= 0 )
    {
      RaidAdapterFreeMiniportDumpInfo(v14, v8);
      StorPortReleaseAdditionalCrashDumpArea(v14 + 728, v13 + 64);
      if ( *(_WORD *)(v14 + 5154) )
      {
        v15 = *(void (__fastcall **)(_QWORD))(v14 + 5176);
        if ( v15 )
          v15(*(_QWORD *)(v14 + 5160));
      }
      ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v14 + 280));
    }
    ObfDereferenceObject(*(PVOID *)(v14 + 8));
    RaidAdapterFreeDumpInfo((PVOID *)&v22);
  }
LABEL_16:
  v16 = a2[8];
  a2[8] = 0LL;
  v17 = *(_QWORD **)(a1 + 24);
  v22 = (PVOID *)v16;
  while ( v17 != (_QWORD *)(a1 + 24) )
  {
    if ( v17[7] == v16 )
      goto LABEL_23;
    v17 = (_QWORD *)*v17;
  }
  v18 = *(_QWORD *)(v16 + 8);
  if ( *(_QWORD *)(v18 + 8) != v16 + 8 )
    goto LABEL_24;
  v19 = *(_QWORD **)(v16 + 16);
  if ( *v19 != v16 + 8 )
    goto LABEL_24;
  *v19 = v18;
  *(_QWORD *)(v18 + 8) = v19;
  RaidAdapterFreeDriverInfo(&v22);
LABEL_23:
  ObfDereferenceObject(*(PVOID *)(v4 + 8));
  RaidUnitFreeDumpInfo(&v21);
  return 0LL;
}
