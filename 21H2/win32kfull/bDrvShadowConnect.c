/*
 * XREFs of bDrvShadowConnect @ 0x1C02C0C08
 * Callers:
 *     RemoteShadowStart @ 0x1C02266D0 (RemoteShadowStart.c)
 * Callees:
 *     ??1SEMOBJEX@@QEAA@XZ @ 0x1C0163AF4 (--1SEMOBJEX@@QEAA@XZ.c)
 *     ??0SEMOBJEX@@QEAA@PEAUHSEMAPHORE__@@K0K0K0K0K0K0K0K@Z @ 0x1C0163BD0 (--0SEMOBJEX@@QEAA@PEAUHSEMAPHORE__@@K0K0K0K0K0K0K0K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C016E4B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall bDrvShadowConnect(__int64 a1, __int64 a2, unsigned int a3)
{
  _QWORD *v5; // rcx
  __int64 (__fastcall *v6)(__int64, _QWORD); // rax
  unsigned int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rdx
  void (__fastcall *v10)(_QWORD, __int64 *, _QWORD, _QWORD, _DWORD); // rax
  _BYTE v12[96]; // [rsp+90h] [rbp-9h] BYREF
  _QWORD *v13; // [rsp+100h] [rbp+67h] BYREF
  __int64 v14; // [rsp+118h] [rbp+7Fh] BYREF

  v13 = (_QWORD *)a1;
  if ( a1 && (*(_DWORD *)(a1 + 40) & 1) != 0 )
  {
    SEMOBJEX::SEMOBJEX(
      (SEMOBJEX *)v12,
      ghsemDynamicModeChange,
      1,
      ghsemGreLock,
      2u,
      ghsemDCVisRgn,
      3u,
      *(HSEMAPHORE *)(a1 + 64),
      4u,
      ghsemSprite,
      5u,
      ghsemHT,
      6u);
    GreAcquireSemaphore(v13[6]);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"po.hsemDevLock()", v13[6], 11LL);
    PDEVOBJ::vSync((PDEVOBJ *)&v13, (struct _SURFOBJ *)((v13[319] + 24LL) & -(__int64)(v13[319] != 0LL)), 0LL, 0);
    v5 = v13;
    v6 = (__int64 (__fastcall *)(__int64, _QWORD))v13[416];
    if ( v6 )
    {
      v7 = v6(a2, a3);
      v5 = v13;
      v8 = v7;
    }
    else
    {
      v8 = 1;
    }
    v9 = v5[226];
    v14 = v9;
    if ( v8 == 1 && (*(_DWORD *)(v9 + 24) & 0x800) != 0 )
    {
      v10 = (void (__fastcall *)(_QWORD, __int64 *, _QWORD, _QWORD, _DWORD))v5[358];
      if ( v10 )
      {
        v10(v5[225], &v14, 0LL, 0LL, *(_DWORD *)(v9 + 28));
        v5 = v13;
      }
      else
      {
        v8 = 0;
      }
    }
    EtwTraceGreLockReleaseSemaphore(L"po.hsemDevLock()", v5[6]);
    GreReleaseSemaphoreInternal(v13[6]);
    SEMOBJEX::~SEMOBJEX((SEMOBJEX *)v12);
  }
  else
  {
    return 0;
  }
  return v8;
}
