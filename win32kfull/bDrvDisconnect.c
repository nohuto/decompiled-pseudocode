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
