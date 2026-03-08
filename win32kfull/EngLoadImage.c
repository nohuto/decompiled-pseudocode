/*
 * XREFs of EngLoadImage @ 0x1C026EF70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HANDLE __stdcall EngLoadImage(LPWSTR pwszDriver)
{
  struct Gre::Base::SESSION_GLOBALS *v2; // rdi
  void *v3; // rbx
  LPWSTR v5; // [rsp+30h] [rbp-18h] BYREF
  int v6; // [rsp+38h] [rbp-10h]
  int v7; // [rsp+3Ch] [rbp-Ch]
  int v8; // [rsp+50h] [rbp+8h] BYREF

  v8 = 0;
  v2 = Gre::Base::Globals((Gre::Base *)pwszDriver);
  GreAcquireSemaphore(*((_QWORD *)v2 + 1));
  EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemDriverMgmt", *((_QWORD *)v2 + 1), 16LL);
  v5 = pwszDriver;
  v6 = 5;
  v7 = 1;
  v3 = (void *)((__int64 (__fastcall *)(LPWSTR, __int64, int *, __int64, _DWORD, LPWSTR *))ldevLoadImage)(
                 pwszDriver,
                 1LL,
                 &v8,
                 1LL,
                 0,
                 &v5);
  EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDriverMgmt");
  GreReleaseSemaphoreInternal(*((_QWORD *)v2 + 1));
  return v3;
}
