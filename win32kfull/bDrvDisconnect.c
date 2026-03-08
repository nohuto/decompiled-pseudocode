/*
 * XREFs of bDrvDisconnect @ 0x1C02DF008
 * Callers:
 *     ?InitiateWin32kCleanup@@YAHXZ @ 0x1C0078068 (-InitiateWin32kCleanup@@YAHXZ.c)
 *     xxxRemoteConsoleShadowStop @ 0x1C0206924 (xxxRemoteConsoleShadowStop.c)
 *     xxxRemotePassthruEnable @ 0x1C0206C6C (xxxRemotePassthruEnable.c)
 * Callees:
 *     ??1SEMOBJEX@@QEAA@XZ @ 0x1C0129084 (--1SEMOBJEX@@QEAA@XZ.c)
 *     ??0SEMOBJEX@@QEAA@PEAUHSEMAPHORE__@@K0K0K0K0K0K0K0K@Z @ 0x1C0129160 (--0SEMOBJEX@@QEAA@PEAUHSEMAPHORE__@@K0K0K0K0K0K0K0K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall bDrvDisconnect(Gre::Base *a1)
{
  PVOID v1; // rdi
  HANDLE v2; // rsi
  unsigned int v3; // ebx
  HSEMAPHORE *v4; // rax
  __int64 (__fastcall *v5)(HANDLE, PVOID); // rax
  _BYTE v7[96]; // [rsp+98h] [rbp-9h] BYREF
  __int64 v8; // [rsp+118h] [rbp+77h] BYREF

  v1 = gConsoleShadowThinwireFileObject;
  v2 = ghConsoleShadowThinwireChannel;
  v8 = gConsoleShadowhDev;
  if ( !gConsoleShadowhDev )
    return 0LL;
  v3 = 1;
  if ( (*(_DWORD *)(gConsoleShadowhDev + 40) & 1) == 0 )
    return 0LL;
  v4 = (HSEMAPHORE *)Gre::Base::Globals(a1);
  SEMOBJEX::SEMOBJEX(
    (SEMOBJEX *)v7,
    v4[10],
    1,
    v4[15],
    2u,
    v4[11],
    3u,
    *(HSEMAPHORE *)(v8 + 56),
    4u,
    v4[14],
    5u,
    v4[17],
    6u);
  GreAcquireSemaphore(*(_QWORD *)(v8 + 48));
  EtwTraceGreLockAcquireSemaphoreExclusive(L"po.hsemDevLock()", *(_QWORD *)(v8 + 48), 11LL);
  PDEVOBJ::vSync(
    (PDEVOBJ *)&v8,
    (struct _SURFOBJ *)((*(_QWORD *)(v8 + 2528) + 24LL) & -(__int64)(*(_QWORD *)(v8 + 2528) != 0LL)),
    0LL,
    0);
  v5 = *(__int64 (__fastcall **)(HANDLE, PVOID))(v8 + 3288);
  if ( v5 )
  {
    v3 = v5(v2, v1);
    if ( v3 )
      *(_DWORD *)(*(_QWORD *)(v8 + 1760) + 60LL) = 3;
  }
  EtwTraceGreLockReleaseSemaphore(L"po.hsemDevLock()");
  GreReleaseSemaphoreInternal(*(_QWORD *)(v8 + 48));
  SEMOBJEX::~SEMOBJEX((SEMOBJEX *)v7);
  return v3;
}
