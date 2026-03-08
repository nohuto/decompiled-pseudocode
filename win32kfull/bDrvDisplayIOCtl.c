/*
 * XREFs of bDrvDisplayIOCtl @ 0x1C02DF1C0
 * Callers:
 *     CtxDisplayIOCtl @ 0x1C0205B4C (CtxDisplayIOCtl.c)
 * Callees:
 *     ??1SEMOBJEX@@QEAA@XZ @ 0x1C0129084 (--1SEMOBJEX@@QEAA@XZ.c)
 *     ??0SEMOBJEX@@QEAA@PEAUHSEMAPHORE__@@K0K0K0K0K0K0K0K@Z @ 0x1C0129160 (--0SEMOBJEX@@QEAA@PEAUHSEMAPHORE__@@K0K0K0K0K0K0K0K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall bDrvDisplayIOCtl(Gre::Base *a1, __int64 a2, unsigned int a3)
{
  unsigned int v5; // ebx
  HSEMAPHORE *v6; // rax
  __int64 (__fastcall *v7)(__int64, _QWORD); // rax
  _BYTE v9[96]; // [rsp+90h] [rbp-68h] BYREF
  Gre::Base *v10; // [rsp+100h] [rbp+8h] BYREF

  v10 = a1;
  if ( !a1 )
    return 0LL;
  v5 = 1;
  if ( (*((_DWORD *)a1 + 10) & 1) == 0 )
    return 0LL;
  v6 = (HSEMAPHORE *)Gre::Base::Globals(a1);
  SEMOBJEX::SEMOBJEX(
    (SEMOBJEX *)v9,
    v6[10],
    1,
    v6[15],
    2u,
    v6[11],
    3u,
    *((HSEMAPHORE *)v10 + 7),
    4u,
    v6[14],
    5u,
    v6[17],
    6u);
  GreAcquireSemaphore(*((_QWORD *)v10 + 6));
  EtwTraceGreLockAcquireSemaphoreExclusive(L"po.hsemDevLock()", *((_QWORD *)v10 + 6), 11LL);
  PDEVOBJ::vSync(
    (PDEVOBJ *)&v10,
    (struct _SURFOBJ *)((*((_QWORD *)v10 + 316) + 24LL) & -(__int64)(*((_QWORD *)v10 + 316) != 0LL)),
    0LL,
    0);
  v7 = (__int64 (__fastcall *)(__int64, _QWORD))*((_QWORD *)v10 + 417);
  if ( v7 )
    v5 = v7(a2, a3);
  EtwTraceGreLockReleaseSemaphore(L"po.hsemDevLock()");
  GreReleaseSemaphoreInternal(*((_QWORD *)v10 + 6));
  SEMOBJEX::~SEMOBJEX((SEMOBJEX *)v9);
  return v5;
}
