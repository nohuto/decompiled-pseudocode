/*
 * XREFs of ??0SEMOBJEX@@QEAA@PEAUHSEMAPHORE__@@K0K0K0K0K0K0K0K@Z @ 0x1C0129160
 * Callers:
 *     GreDrvDisconnect @ 0x1C0128FB4 (GreDrvDisconnect.c)
 *     GreDrvReconnect @ 0x1C02DEC3C (GreDrvReconnect.c)
 *     bDrvDisconnect @ 0x1C02DF008 (bDrvDisconnect.c)
 *     bDrvDisplayIOCtl @ 0x1C02DF1C0 (bDrvDisplayIOCtl.c)
 *     bDrvReconnect @ 0x1C02DF36C (bDrvReconnect.c)
 *     bDrvShadowConnect @ 0x1C02DF56C (bDrvShadowConnect.c)
 *     bDrvShadowDisconnect @ 0x1C02DF744 (bDrvShadowDisconnect.c)
 *     vDrvInvalidateRect @ 0x1C02DF91C (vDrvInvalidateRect.c)
 * Callees:
 *     <none>
 */

SEMOBJEX *__fastcall SEMOBJEX::SEMOBJEX(
        SEMOBJEX *this,
        HSEMAPHORE a2,
        int a3,
        HSEMAPHORE a4,
        unsigned int a5,
        HSEMAPHORE a6,
        unsigned int a7,
        HSEMAPHORE a8,
        unsigned int a9,
        HSEMAPHORE a10,
        unsigned int a11,
        HSEMAPHORE a12,
        unsigned int a13)
{
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  if ( a2 )
  {
    *(_QWORD *)this = a2;
    *((_DWORD *)this + 16) = a3;
    GreAcquireSemaphore(a2);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"hSem1", *(_QWORD *)this, *((unsigned int *)this + 16));
    if ( a4 )
    {
      *((_DWORD *)this + 17) = a5;
      *((_QWORD *)this + 1) = a4;
      GreAcquireSemaphore(a4);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"hSem2", *((_QWORD *)this + 1), *((unsigned int *)this + 17));
      if ( a6 )
      {
        *((_DWORD *)this + 18) = a7;
        *((_QWORD *)this + 2) = a6;
        GreAcquireSemaphore(a6);
        EtwTraceGreLockAcquireSemaphoreExclusive(L"hSem3", *((_QWORD *)this + 2), *((unsigned int *)this + 18));
        if ( a8 )
        {
          *((_DWORD *)this + 19) = a9;
          *((_QWORD *)this + 3) = a8;
          GreAcquireSemaphore(a8);
          EtwTraceGreLockAcquireSemaphoreExclusive(L"hSem4", *((_QWORD *)this + 3), *((unsigned int *)this + 19));
          if ( a10 )
          {
            *((_DWORD *)this + 20) = a11;
            *((_QWORD *)this + 4) = a10;
            GreAcquireSemaphore(a10);
            EtwTraceGreLockAcquireSemaphoreExclusive(L"hSem5", *((_QWORD *)this + 4), *((unsigned int *)this + 20));
            if ( a12 )
            {
              *((_DWORD *)this + 21) = a13;
              *((_QWORD *)this + 5) = a12;
              GreAcquireSemaphore(a12);
              EtwTraceGreLockAcquireSemaphoreExclusive(L"hSem6", *((_QWORD *)this + 5), *((unsigned int *)this + 21));
            }
          }
        }
      }
    }
  }
  return this;
}
