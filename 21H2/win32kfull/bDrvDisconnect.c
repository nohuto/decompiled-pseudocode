/*
 * XREFs of bDrvDisconnect @ 0x1C02C066C
 * Callers:
 *     ?InitiateWin32kCleanup@@YAHXZ @ 0x1C000ADD4 (-InitiateWin32kCleanup@@YAHXZ.c)
 *     xxxRemoteConsoleShadowStop @ 0x1C0226F30 (xxxRemoteConsoleShadowStop.c)
 *     xxxRemotePassthruEnable @ 0x1C0227220 (xxxRemotePassthruEnable.c)
 * Callees:
 *     ??1SEMOBJEX@@QEAA@XZ @ 0x1C0163AF4 (--1SEMOBJEX@@QEAA@XZ.c)
 *     ??0SEMOBJEX@@QEAA@PEAUHSEMAPHORE__@@K0K0K0K0K0K0K0K@Z @ 0x1C0163BD0 (--0SEMOBJEX@@QEAA@PEAUHSEMAPHORE__@@K0K0K0K0K0K0K0K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C016E4B0 (_guard_dispatch_icall_nop.c)
 */

__int64 bDrvDisconnect()
{
  PVOID v0; // rdi
  HANDLE v1; // rsi
  unsigned int v2; // ebx
  __int64 (__fastcall *v3)(HANDLE, PVOID); // rax
  _BYTE v5[96]; // [rsp+90h] [rbp-68h] BYREF
  _QWORD *v6; // [rsp+110h] [rbp+18h] BYREF

  v0 = gConsoleShadowThinwireFileObject;
  v1 = ghConsoleShadowThinwireChannel;
  v6 = (_QWORD *)gConsoleShadowhDev;
  if ( gConsoleShadowhDev && (v2 = 1, (*(_DWORD *)(gConsoleShadowhDev + 40) & 1) != 0) )
  {
    SEMOBJEX::SEMOBJEX(
      (SEMOBJEX *)v5,
      ghsemDynamicModeChange,
      1,
      ghsemGreLock,
      2u,
      ghsemDCVisRgn,
      3u,
      *(HSEMAPHORE *)(gConsoleShadowhDev + 64),
      4u,
      ghsemSprite,
      5u,
      ghsemHT,
      6u);
    GreAcquireSemaphore(v6[6]);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"po.hsemDevLock()", v6[6], 11LL);
    PDEVOBJ::vSync((PDEVOBJ *)&v6, (struct _SURFOBJ *)((v6[319] + 24LL) & -(__int64)(v6[319] != 0LL)), 0LL, 0);
    v3 = (__int64 (__fastcall *)(HANDLE, PVOID))v6[414];
    if ( v3 )
    {
      v2 = v3(v1, v0);
      if ( v2 )
        *(_DWORD *)(v6[224] + 60LL) = 3;
    }
    EtwTraceGreLockReleaseSemaphore(L"po.hsemDevLock()", v6[6]);
    GreReleaseSemaphoreInternal(v6[6]);
    SEMOBJEX::~SEMOBJEX((SEMOBJEX *)v5);
  }
  else
  {
    return 0;
  }
  return v2;
}
