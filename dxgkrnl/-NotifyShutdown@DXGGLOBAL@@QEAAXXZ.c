/*
 * XREFs of ?NotifyShutdown@DXGGLOBAL@@QEAAXXZ @ 0x1C030ECDC
 * Callers:
 *     DxgkShutdown @ 0x1C0305A20 (DxgkShutdown.c)
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0003BCC (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z @ 0x1C0003E44 (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008CE0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008F20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008FA8 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0009800 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0009930 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C0180040 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 */

void __fastcall DXGGLOBAL::NotifyShutdown(DXGGLOBAL *this)
{
  _QWORD **v1; // rsi
  _QWORD *v2; // rdi
  _QWORD *v3; // rbx
  signed __int64 v4; // rax
  signed __int64 v5; // rtt
  __int64 v6; // rcx
  _QWORD *v7; // rcx
  __int64 v8; // rcx
  _BYTE v9[16]; // [rsp+20h] [rbp-B8h] BYREF
  _BYTE v10[144]; // [rsp+30h] [rbp-A8h] BYREF

  v1 = (_QWORD **)((char *)this + 768);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v9, (DXGGLOBAL *)((char *)this + 672), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v9);
  v2 = *v1;
  while ( v2 != v1 && v2 )
  {
    v3 = v2;
    v2 = (_QWORD *)*v2;
    _m_prefetchw(v3 + 3);
    v4 = v3[3];
    while ( v4 )
    {
      v5 = v4;
      v4 = _InterlockedCompareExchange64(v3 + 3, v4 + 1, v4);
      if ( v5 == v4 )
      {
        LOBYTE(v4) = 1;
        break;
      }
    }
    if ( (_BYTE)v4 )
    {
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v10, (struct DXGADAPTER *const)v3, 0LL);
      DXGADAPTER::ReleaseReference((DXGADAPTER *)v3);
      if ( (int)COREADAPTERACCESS::AcquireExclusive((__int64)v10, 2LL) >= 0 )
      {
        v6 = v3[366];
        if ( v6 )
          ADAPTER_RENDER::FlushScheduler(v6, 6u, 0xFFFFFFFF, 0);
        v7 = (_QWORD *)v3[366];
        if ( v7 && !*(_BYTE *)(v7[2] + 209LL) )
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(v7[95] + 8LL) + 40LL))(v7[96]);
        v8 = v3[366];
        if ( v8 )
          ADAPTER_RENDER::FlushScheduler(v8, 7u, 0xFFFFFFFF, 0);
      }
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v10);
    }
  }
  if ( v9[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v9);
}
