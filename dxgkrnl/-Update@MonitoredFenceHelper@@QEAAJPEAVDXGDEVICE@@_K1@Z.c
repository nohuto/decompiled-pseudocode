/*
 * XREFs of ?Update@MonitoredFenceHelper@@QEAAJPEAVDXGDEVICE@@_K1@Z @ 0x1C035A480
 * Callers:
 *     ?UpdateTrackedWorkload@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEBU_D3DKMT_UPDATETRACKEDWORKLOAD@@_K@Z @ 0x1C035A598 (-UpdateTrackedWorkload@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEBU_D3DKMT_UPDATETRACKEDWORKLOAD.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007840 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00078B0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ?GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C0186BD8 (-GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?CreateSynchObject@MonitoredFenceHelper@@AEAAJPEAVDXGDEVICE@@_K@Z @ 0x1C03592A8 (-CreateSynchObject@MonitoredFenceHelper@@AEAAJPEAVDXGDEVICE@@_K@Z.c)
 *     ?DestroySynchObject@MonitoredFenceHelper@@AEAAXXZ @ 0x1C03593A4 (-DestroySynchObject@MonitoredFenceHelper@@AEAAXXZ.c)
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
  int v10; // ebx
  char *v11; // rdi
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // [rsp+70h] [rbp+8h] BYREF
  __int64 v13; // [rsp+88h] [rbp+20h] BYREF

  v13 = a4;
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
    v11 = (char *)this + 8;
    ObfReferenceObject(v11);
    v10 = (*(__int64 (__fastcall **)(__int64, struct _VIDSCH_SYNC_OBJECT **, __int64 *, char *, char, char, struct ADAPTER_RENDER *, _QWORD))(*(_QWORD *)(*((_QWORD *)a2[2] + 92) + 8LL) + 664LL))(
            1LL,
            &VidSchSyncObject,
            &v13,
            v11,
            1,
            1,
            a2[100],
            0LL);
    if ( v10 < 0 )
      ObfDereferenceObject(v11);
  }
  else
  {
    v10 = -1073741811;
    WdLogSingleEntry1(3LL, 2097LL);
  }
  DXGFASTMUTEX::Release(v9);
  return (unsigned int)v10;
}
