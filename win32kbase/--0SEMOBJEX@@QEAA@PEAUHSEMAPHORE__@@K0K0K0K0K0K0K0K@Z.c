SEMOBJEX *__fastcall SEMOBJEX::SEMOBJEX(
        SEMOBJEX *this,
        HSEMAPHORE a2,
        __int64 a3,
        HSEMAPHORE a4,
        unsigned int a5,
        HSEMAPHORE hsem,
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
    *((_DWORD *)this + 16) = 1;
    EngAcquireSemaphore(a2);
    EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"hSem1", *(_QWORD *)this, *((_DWORD *)this + 16));
    if ( a4 )
    {
      *((_QWORD *)this + 1) = a4;
      *((_DWORD *)this + 17) = 2;
      EngAcquireSemaphore(a4);
      EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"hSem2", *((_QWORD *)this + 1), *((_DWORD *)this + 17));
      if ( hsem )
      {
        *((_QWORD *)this + 2) = hsem;
        *((_DWORD *)this + 18) = 3;
        EngAcquireSemaphore(hsem);
        EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"hSem3", *((_QWORD *)this + 2), *((_DWORD *)this + 18));
        if ( a8 )
        {
          *((_DWORD *)this + 19) = a9;
          *((_QWORD *)this + 3) = a8;
          EngAcquireSemaphore(a8);
          EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"hSem4", *((_QWORD *)this + 3), *((_DWORD *)this + 19));
          if ( a10 )
          {
            *((_DWORD *)this + 20) = a11;
            *((_QWORD *)this + 4) = a10;
            EngAcquireSemaphore(a10);
            EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"hSem5", *((_QWORD *)this + 4), *((_DWORD *)this + 20));
            if ( a12 )
            {
              *((_DWORD *)this + 21) = a13;
              *((_QWORD *)this + 5) = a12;
              EngAcquireSemaphore(a12);
              EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"hSem6", *((_QWORD *)this + 5), *((_DWORD *)this + 21));
            }
          }
        }
      }
    }
  }
  return this;
}
