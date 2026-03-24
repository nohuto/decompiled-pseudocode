/*
 * XREFs of ?Update@MonitoredFenceHelper@@QEAAJPEAVDXGDEVICE@@_K1@Z @ 0x1C02BD718
 * Callers:
 *     ?UpdateTrackedWorkload@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEBU_D3DKMT_UPDATETRACKEDWORKLOAD@@_K@Z @ 0x1C02BD83C (-UpdateTrackedWorkload@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEBU_D3DKMT_UPDATETRACKEDWORKLOAD.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0003700 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0003960 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 *     ?GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C01252E8 (-GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?CreateSynchObject@MonitoredFenceHelper@@AEAAJPEAVDXGDEVICE@@_K@Z @ 0x1C02BCAC0 (-CreateSynchObject@MonitoredFenceHelper@@AEAAJPEAVDXGDEVICE@@_K@Z.c)
 *     ?DestroySynchObject@MonitoredFenceHelper@@AEAAXXZ @ 0x1C02BCBCC (-DestroySynchObject@MonitoredFenceHelper@@AEAAXXZ.c)
 */

__int64 __fastcall MonitoredFenceHelper::Update(
        MonitoredFenceHelper *this,
        struct ADAPTER_RENDER **a2,
        UINT64 a3,
        __int64 a4)
{
  __int64 result; // rax
  struct _KTHREAD **v8; // rbx
  struct _KTHREAD **v9; // rbp
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  int v13; // ebx
  __int64 v14; // rax
  __int64 v15; // rdx
  char *v16; // rdi
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // [rsp+70h] [rbp+8h] BYREF
  __int64 v18; // [rsp+88h] [rbp+20h] BYREF

  v18 = a4;
  if ( a3 != *(_QWORD *)this )
  {
    MonitoredFenceHelper::DestroySynchObject(this);
    result = MonitoredFenceHelper::CreateSynchObject(this, (struct DXGDEVICE *)a2, a3);
    if ( (int)result < 0 )
      return result;
    *(_QWORD *)this = a3;
  }
  v8 = *(struct _KTHREAD ***)(*((_QWORD *)this + 4) + 32LL);
  v9 = v8 + 4;
  DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(v8 + 4));
  VidSchSyncObject = DXGSYNCOBJECT::GetVidSchSyncObject((DXGSYNCOBJECT *)v8, a2[2]);
  if ( VidSchSyncObject )
  {
    v16 = (char *)this + 8;
    ObfReferenceObject(v16);
    v13 = (*(__int64 (__fastcall **)(__int64, struct _VIDSCH_SYNC_OBJECT **, __int64 *, char *, char, char, struct ADAPTER_RENDER *, _QWORD))(*(_QWORD *)(*((_QWORD *)a2[2] + 77) + 8LL) + 664LL))(
            1LL,
            &VidSchSyncObject,
            &v18,
            v16,
            1,
            1,
            a2[96],
            0LL);
    if ( v13 < 0 )
      ObfDereferenceObject(v16);
  }
  else
  {
    v13 = -1073741811;
    v14 = WdLogNewEntry5_WdWarning(v11, v10, v12);
    *(_QWORD *)(v14 + 24) = 1828LL;
    WdLogEvent5_WdWarning(v14);
  }
  DXGFASTMUTEX::Release(v9, v15);
  return (unsigned int)v13;
}
