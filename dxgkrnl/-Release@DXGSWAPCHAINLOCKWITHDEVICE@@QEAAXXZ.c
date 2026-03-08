/*
 * XREFs of ?Release@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAXXZ @ 0x1C0224C40
 * Callers:
 *     ??1DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@XZ @ 0x1C03523E8 (--1DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@XZ.c)
 *     ?Acquire@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAJPEAPEAVDXGDEVICE@@_N@Z @ 0x1C035241C (-Acquire@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAJPEAPEAVDXGDEVICE@@_N@Z.c)
 * Callees:
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0007444 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008F20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00098CC (--1COREACCESS@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     ??4COREACCESS@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C0058164 (--4COREACCESS@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C017B878 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 */

void __fastcall DXGSWAPCHAINLOCKWITHDEVICE::Release(DXGSWAPCHAINLOCKWITHDEVICE *this)
{
  __int64 v2; // rcx
  bool v3; // cf
  _BYTE v4[16]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v5; // [rsp+40h] [rbp-48h]
  char v6; // [rsp+48h] [rbp-40h]
  __int64 v7; // [rsp+50h] [rbp-38h]

  if ( *((_BYTE *)this + 43) )
  {
    COREACCESS::Release((DXGSWAPCHAINLOCKWITHDEVICE *)((char *)this + 56));
    v5 = 0LL;
    v6 = 0;
    v7 = 0LL;
    COREACCESS::operator=((__int64)this + 56, (__int64)v4);
    COREACCESS::~COREACCESS((COREACCESS *)v4);
    *((_BYTE *)this + 43) = 0;
  }
  if ( *((_BYTE *)this + 41) )
  {
    ExReleaseResourceLite(*(PERESOURCE *)(*((_QWORD *)this + 6) + 136LL));
    KeLeaveCriticalRegion();
    *((_BYTE *)this + 41) = 0;
  }
  if ( *((_BYTE *)this + 42) )
  {
    v2 = *((_QWORD *)this + 6);
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v2 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v2 + 16), (struct DXGDEVICE *)v2);
    v3 = *((_BYTE *)this + 16) != 0;
    *((_QWORD *)this + 6) = 0LL;
    *(_QWORD *)((v3 ? 0x30 : 0) + *((_QWORD *)this + 1) + 104LL) = 0LL;
    *((_BYTE *)this + 42) = 0;
  }
  if ( *((_BYTE *)this + 40) )
  {
    DXGAUTOMUTEX::Release((DXGSWAPCHAINLOCKWITHDEVICE *)((char *)this + 24));
    *((_BYTE *)this + 40) = 0;
  }
}
