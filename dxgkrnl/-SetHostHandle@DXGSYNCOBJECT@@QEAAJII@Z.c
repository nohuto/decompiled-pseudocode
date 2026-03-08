/*
 * XREFs of ?SetHostHandle@DXGSYNCOBJECT@@QEAAJII@Z @ 0x1C034C920
 * Callers:
 *     ?CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@_NPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@IPEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C01881E4 (-CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@_NPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATE.c)
 *     ?VmBusSendOpenSyncObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IPEAVDXGSYNCOBJECT@@PEAVDXGDEVICESYNCOBJECT@@IU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@@Z @ 0x1C038787C (-VmBusSendOpenSyncObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IPEAVDXGSYN.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007840 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00078B0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall DXGSYNCOBJECT::SetHostHandle(DXGSYNCOBJECT *this, int a2, int a3)
{
  __int64 v6; // rax
  _QWORD *v7; // rbx
  struct _KTHREAD **v8; // rsi
  char *v9; // rdi
  __int64 v10; // rax

  if ( (*((_BYTE *)this + 204) & 1) == 0 )
  {
    *((_DWORD *)this + 24) = a3;
    return 0LL;
  }
  v6 = operator new[](0x18uLL, 0x4B677844u, 256LL);
  v7 = (_QWORD *)v6;
  if ( v6 )
  {
    *(_QWORD *)(v6 + 8) = 0LL;
    *(_QWORD *)v6 = 0LL;
    *(_DWORD *)(v6 + 20) = a3;
    v8 = (struct _KTHREAD **)((char *)this + 32);
    *(_DWORD *)(v6 + 16) = a2;
    DXGFASTMUTEX::Acquire((DXGSYNCOBJECT *)((char *)this + 32));
    v9 = (char *)this + 104;
    v10 = *(_QWORD *)v9;
    if ( *(char **)(*(_QWORD *)v9 + 8LL) != v9 )
      __fastfail(3u);
    *v7 = v10;
    v7[1] = v9;
    *(_QWORD *)(v10 + 8) = v7;
    *(_QWORD *)v9 = v7;
    DXGFASTMUTEX::Release(v8);
    return 0LL;
  }
  WdLogSingleEntry1(6LL, 5704LL);
  DxgkLogInternalTriageEvent(
    0LL,
    262145,
    -1,
    (__int64)L"Failed to allocate DXG_HOST_HANDLE_MAP",
    5704LL,
    0LL,
    0LL,
    0LL,
    0LL);
  return 3221225495LL;
}
