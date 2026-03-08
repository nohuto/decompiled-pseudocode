/*
 * XREFs of ?NotifyAdapterRemoval@DXGGLOBAL@@QEAAXXZ @ 0x1C030E948
 * Callers:
 *     DpiPowerArbiterThread @ 0x1C0210150 (DpiPowerArbiterThread.c)
 *     DpiFdoHandleStopDevice @ 0x1C03973C0 (DpiFdoHandleStopDevice.c)
 *     DpiFdoStopAdapter @ 0x1C0398994 (DpiFdoStopAdapter.c)
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0003BCC (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008CE0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008F20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008FA8 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C00090C8 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0009800 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0009930 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     ?SignalCrossAdapterSyncObjects@ADAPTER_RENDER@@QEAAXXZ @ 0x1C02BD0B8 (-SignalCrossAdapterSyncObjects@ADAPTER_RENDER@@QEAAXXZ.c)
 */

void __fastcall DXGGLOBAL::NotifyAdapterRemoval(DXGGLOBAL *this)
{
  ADAPTER_RENDER **v1; // rsi
  ADAPTER_RENDER *v2; // rdi
  ADAPTER_RENDER **v3; // rbx
  signed __int64 v4; // rax
  signed __int64 v5; // rtt
  _BYTE v6[16]; // [rsp+20h] [rbp-B8h] BYREF
  _BYTE v7[144]; // [rsp+30h] [rbp-A8h] BYREF

  v1 = (ADAPTER_RENDER **)((char *)this + 768);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v6, (DXGGLOBAL *)((char *)this + 672), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v6);
  v2 = *v1;
  while ( v2 != (ADAPTER_RENDER *)v1 && v2 )
  {
    v3 = (ADAPTER_RENDER **)v2;
    v2 = *(ADAPTER_RENDER **)v2;
    _m_prefetchw(v3 + 3);
    v4 = (signed __int64)v3[3];
    while ( v4 )
    {
      v5 = v4;
      v4 = _InterlockedCompareExchange64((volatile signed __int64 *)v3 + 3, v4 + 1, v4);
      if ( v5 == v4 )
      {
        LOBYTE(v4) = 1;
        break;
      }
    }
    if ( (_BYTE)v4 )
    {
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v7, (struct DXGADAPTER *const)v3, 0LL);
      DXGADAPTER::ReleaseReference((DXGADAPTER *)v3);
      if ( v3[366] )
      {
        if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v7, 0LL) >= 0 )
          ADAPTER_RENDER::SignalCrossAdapterSyncObjects(v3[366]);
      }
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v7);
    }
  }
  if ( v6[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v6);
}
