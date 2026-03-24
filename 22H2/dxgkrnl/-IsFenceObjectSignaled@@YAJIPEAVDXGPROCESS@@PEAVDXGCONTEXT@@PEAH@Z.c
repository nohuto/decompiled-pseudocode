/*
 * XREFs of ?IsFenceObjectSignaled@@YAJIPEAVDXGPROCESS@@PEAVDXGCONTEXT@@PEAH@Z @ 0x1C0291540
 * Callers:
 *     ?HasConsumerGPUWorkFinished@DXGDXGIKEYEDMUTEX@@QEAAHPEAVDXGCONTEXT@@@Z @ 0x1C029AA98 (-HasConsumerGPUWorkFinished@DXGDXGIKEYEDMUTEX@@QEAAHPEAVDXGCONTEXT@@@Z.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0003548 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00038F0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00051D8 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008610 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0008AF8 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 *     ?GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C01252E8 (-GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?VmBusSendIsSyncObjectSignaled@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGSYNCOBJECT@@IPEAE@Z @ 0x1C0249CD0 (-VmBusSendIsSyncObjectSignaled@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGSYNCOBJEC.c)
 */

__int64 __fastcall IsFenceObjectSignaled(unsigned int a1, struct DXGPROCESS *a2, struct DXGCONTEXT *a3, int *a4)
{
  __int64 v5; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // r8
  int v13; // edx
  __int64 v14; // rdx
  __int64 v15; // rax
  _DWORD *v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  struct ADAPTER_RENDER *v21; // rdx
  DXG_GUEST_VIRTUALGPU_VMBUS *v22; // rcx
  __int64 v23; // rdx
  int IsSyncObjectSignaled; // ebx
  int v25; // eax
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // rax
  __int64 v27; // r9
  _BYTE v28[40]; // [rsp+30h] [rbp-28h] BYREF
  unsigned __int8 v29; // [rsp+60h] [rbp+8h] BYREF

  v5 = a1;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)a3 + 2) + 16LL) + 16LL)) )
  {
    v10 = WdLogNewEntry5_WdAssertion(v9, v8);
    *(_QWORD *)(v10 + 24) = 1001LL;
    WdLogEvent5_WdAssertion(v10);
  }
  DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)a2 + 208));
  v11 = ((unsigned int)v5 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v11 >= *((_DWORD *)a2 + 64) )
    goto LABEL_9;
  v12 = *((_QWORD *)a2 + 30);
  v13 = *(_DWORD *)(v12 + 16 * v11 + 8);
  if ( (((unsigned int)v5 >> 25) & 0x60) != (*(_BYTE *)(v12 + 16 * v11 + 8) & 0x60)
    || (v13 & 0x2000) != 0
    || (v13 & 0x1F) == 0 )
  {
    goto LABEL_9;
  }
  v14 = v13 & 0x1F;
  if ( (_BYTE)v14 != 8 )
  {
    v15 = WdLogNewEntry5_WdError(((unsigned int)v5 >> 25) & 0x60, v14);
    *(_QWORD *)(v15 + 24) = 316LL;
    WdLogEvent5_WdError(v15);
LABEL_9:
    v16 = 0LL;
    goto LABEL_10;
  }
  v16 = *(_DWORD **)(v12 + 16LL * (unsigned int)v11);
LABEL_10:
  ExReleasePushLockSharedEx((char *)a2 + 208, 0LL);
  KeLeaveCriticalRegion();
  if ( !v16 )
  {
    v19 = WdLogNewEntry5_WdError(v18, v17);
    *(_QWORD *)(v19 + 24) = a2;
    *(_QWORD *)(v19 + 32) = v5;
LABEL_12:
    WdLogEvent5_WdError(v19);
    return 3221225485LL;
  }
  if ( v16[48] != 3 )
  {
    v19 = WdLogNewEntry5_WdError(v18, v17);
    *(_QWORD *)(v19 + 24) = 1018LL;
    goto LABEL_12;
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v28, (struct DXGFASTMUTEX *const)(v16 + 8), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v28);
  v21 = *(struct ADAPTER_RENDER **)(*((_QWORD *)a3 + 2) + 16LL);
  if ( !*((_BYTE *)a3 + 457) )
  {
    VidSchSyncObject = DXGSYNCOBJECT::GetVidSchSyncObject((DXGSYNCOBJECT *)v16, v21);
    v25 = (*(unsigned __int8 (__fastcall **)(struct _VIDSCH_SYNC_OBJECT *))(*(_QWORD *)(v27 + 8) + 872LL))(VidSchSyncObject);
    goto LABEL_20;
  }
  v22 = (DXG_GUEST_VIRTUALGPU_VMBUS *)(*((_QWORD *)v21 + 2) + 4240LL);
  v29 = 0;
  IsSyncObjectSignaled = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendIsSyncObjectSignaled(
                           v22,
                           a2,
                           (struct DXGSYNCOBJECT *)v16,
                           v5,
                           &v29);
  if ( IsSyncObjectSignaled >= 0 )
  {
    v25 = v29 == 1;
LABEL_20:
    *a4 = v25;
    IsSyncObjectSignaled = 0;
  }
  if ( v28[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v28, v23);
  return (unsigned int)IsSyncObjectSignaled;
}
