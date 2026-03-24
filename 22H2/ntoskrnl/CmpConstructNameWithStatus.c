/*
 * XREFs of CmpConstructNameWithStatus @ 0x1405F2FF0
 * Callers:
 *     CmQueryLayeredKey @ 0x140200A78 (CmQueryLayeredKey.c)
 *     CmpConstructName @ 0x1405F2FBC (CmpConstructName.c)
 *     CmAddLogForAction @ 0x14069300C (CmAddLogForAction.c)
 *     CmpConstructAndCacheName @ 0x14069E394 (CmpConstructAndCacheName.c)
 *     CmpDoWritethroughReparse @ 0x1406CDE40 (CmpDoWritethroughReparse.c)
 *     CmCallbackGetKeyObjectIDEx @ 0x1406DE9E0 (CmCallbackGetKeyObjectIDEx.c)
 *     CmpTraceSecurityChanging @ 0x1406E6BF8 (CmpTraceSecurityChanging.c)
 *     CmLoadAppKey @ 0x1406E8CDC (CmLoadAppKey.c)
 *     CmpTraceHiveSaveStart @ 0x14072B248 (CmpTraceHiveSaveStart.c)
 *     CmEtwRunDown @ 0x14086A3B8 (CmEtwRunDown.c)
 *     CmpEtwDumpKcb @ 0x14086A6C8 (CmpEtwDumpKcb.c)
 *     CmpDumpKeyBodyList @ 0x14086EC98 (CmpDumpKeyBodyList.c)
 *     CmVirtualKCBToRealPath @ 0x14086FB28 (CmVirtualKCBToRealPath.c)
 *     CmpReportAuditVirtualizationEvent @ 0x140871DE8 (CmpReportAuditVirtualizationEvent.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140201A30 (CmSiFreeMemory.c)
 *     CmpAllocateTransientPoolWithTag @ 0x140206F50 (CmpAllocateTransientPoolWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x140206F80 (KeLeaveCriticalRegionThread.c)
 *     KiCheckForKernelApcDelivery @ 0x14024A050 (KiCheckForKernelApcDelivery.c)
 *     ExReleaseRundownProtection @ 0x140345500 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x1403459C0 (ExAcquireRundownProtection.c)
 *     memset @ 0x140413800 (memset.c)
 *     CmpSetKcbAtLayerHeight @ 0x1405D6C8C (CmpSetKcbAtLayerHeight.c)
 *     CmpConstructNameFromKeyNodes @ 0x1405F3210 (CmpConstructNameFromKeyNodes.c)
 *     CmpConstructNameFromKcbNameBlocks @ 0x140778B38 (CmpConstructNameFromKcbNameBlocks.c)
 */

__int64 __fastcall CmpConstructNameWithStatus(__int64 a1, _QWORD *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _LOOKASIDE_LIST_EX *v5; // r9
  BOOLEAN v6; // r14
  int v7; // ebx
  struct _PRIVILEGE_SET *v8; // rdi
  __int16 v9; // dx
  SIZE_T v10; // rbp
  struct _PRIVILEGE_SET *TransientPoolWithTag; // rax
  unsigned int v12; // ebx
  __int64 v13; // r10
  __int64 v14; // r10
  __int16 v15; // dx
  PPRIVILEGE_SET v16; // rax
  int v17; // eax
  struct _KTHREAD *v18; // rcx
  __int128 v21; // [rsp+20h] [rbp-38h] BYREF
  PPRIVILEGE_SET Privileges[2]; // [rsp+30h] [rbp-28h]
  __int64 v23; // [rsp+60h] [rbp+8h] BYREF

  v21 = 0LL;
  WORD1(v21) = -1;
  CurrentThread = KeGetCurrentThread();
  *(_OWORD *)Privileges = 0LL;
  --CurrentThread->KernelApcDisable;
  v23 = 0LL;
  v6 = ExAcquireRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  if ( !v6 )
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  v7 = *(__int16 *)(a1 + 66);
  v8 = 0LL;
  v9 = *(_WORD *)(a1 + 66);
  if ( v7 >= 2 )
  {
    v10 = 8LL * (unsigned int)(v7 - 1);
    TransientPoolWithTag = (struct _PRIVILEGE_SET *)CmpAllocateTransientPoolWithTag(PagedPool, v10, 0x35364D43u, v5);
    v8 = TransientPoolWithTag;
    if ( !TransientPoolWithTag )
    {
      v8 = Privileges[1];
      v12 = -1073741670;
      goto LABEL_24;
    }
    memset(TransientPoolWithTag, 0, v10);
    v9 = *(_WORD *)(a1 + 66);
  }
  LOWORD(v21) = v7;
  Privileges[1] = v8;
  WORD1(v21) = v9;
  if ( v9 )
  {
    v13 = *(_QWORD *)(a1 + 192);
    if ( v13 )
    {
      do
      {
        CmpSetKcbAtLayerHeight((__int64)&v21, v9, *(_QWORD *)(v13 + 16));
        v13 = *(_QWORD *)(v14 + 24);
        v9 = v15 - 1;
      }
      while ( v13 );
      v8 = Privileges[1];
      v9 = WORD1(v21);
    }
  }
  else
  {
    *((_QWORD *)&v21 + 1) = a1;
  }
  if ( v6 && v9 >= 0 )
  {
    do
    {
      v16 = v9 < 2 ? Privileges[v9 - 1] : (PPRIVILEGE_SET)*((_QWORD *)v8 + v9 - 2);
      if ( HIWORD(v16[3].Control) && BYTE1(v16[3].Control) == 1 )
        break;
      if ( v16[2].PrivilegeCount != -1 )
      {
        if ( *(_DWORD *)(a1 + 40) != -1 || (*(_DWORD *)(a1 + 184) & 0x40000) == 0 )
        {
          v17 = CmpConstructNameFromKeyNodes(&v21, &v23);
          v8 = Privileges[1];
          goto LABEL_22;
        }
        break;
      }
      --v9;
    }
    while ( v9 >= 0 );
  }
  v17 = CmpConstructNameFromKcbNameBlocks(a1, &v23);
LABEL_22:
  v12 = v17;
  if ( v17 >= 0 )
  {
    v12 = 0;
    *a2 = v23;
  }
LABEL_24:
  if ( v8 )
    CmSiFreeMemory(v8);
  if ( v6 )
  {
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    v18 = KeGetCurrentThread();
    if ( v18->KernelApcDisable++ == -1
      && ($C459BD0D405E8E46662177FB3D0A143F *)v18->ApcState.ApcListHead[0].Flink != &v18->152
      && !v18->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery((__int64)v18);
    }
  }
  return v12;
}
