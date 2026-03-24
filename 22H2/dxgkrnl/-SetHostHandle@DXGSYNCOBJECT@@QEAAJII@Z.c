/*
 * XREFs of ?SetHostHandle@DXGSYNCOBJECT@@QEAAJII@Z @ 0x1C0292490
 * Callers:
 *     ?CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@_NPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@IPEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C0119EC8 (-CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@_NPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATE.c)
 *     ?VmBusSendOpenSyncObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IPEAVDXGSYNCOBJECT@@PEAVDXGDEVICESYNCOBJECT@@IU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@@Z @ 0x1C024AE28 (-VmBusSendOpenSyncObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IPEAVDXGSYN.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0003700 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0003960 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0003A2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall DXGSYNCOBJECT::SetHostHandle(DXGSYNCOBJECT *this, int a2, int a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  _QWORD *v8; // rbx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  __int64 v13; // rdx
  _QWORD *v14; // rax
  __int64 v15; // rcx

  if ( (*((_BYTE *)this + 196) & 1) != 0 )
  {
    v8 = operator new[](0x18uLL, 0x4B677844u, PagedPool);
    if ( v8 )
    {
      v8[2] = 0LL;
      v8[1] = 0LL;
      *v8 = 0LL;
    }
    else
    {
      v8 = 0LL;
    }
    if ( !v8 )
    {
      v11 = WdLogNewEntry5_WdLowResource(v7, v6, v9, v10);
      *(_QWORD *)(v11 + 24) = 5645LL;
      WdLogEvent5_WdLowResource(v11);
      return 3221225495LL;
    }
    *((_DWORD *)v8 + 4) = a2;
    *((_DWORD *)v8 + 5) = a3;
    DXGFASTMUTEX::Acquire((DXGSYNCOBJECT *)((char *)this + 32));
    v14 = (_QWORD *)((char *)this + 96);
    v15 = *((_QWORD *)this + 12);
    if ( *(DXGSYNCOBJECT **)(v15 + 8) != (DXGSYNCOBJECT *)((char *)this + 96) )
      __fastfail(3u);
    *v8 = v15;
    v8[1] = v14;
    *(_QWORD *)(v15 + 8) = v8;
    *v14 = v8;
    DXGFASTMUTEX::Release((struct _KTHREAD **)this + 4, v13);
  }
  else
  {
    *((_DWORD *)this + 22) = a3;
  }
  return 0LL;
}
