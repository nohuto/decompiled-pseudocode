void __fastcall SEMOBJEX::~SEMOBJEX(SEMOBJEX *this)
{
  if ( *((_QWORD *)this + 7) )
  {
    EtwTraceGreLockReleaseSemaphore(L"hSem8");
    GreReleaseSemaphoreInternal(*((_QWORD *)this + 7));
  }
  if ( *((_QWORD *)this + 6) )
  {
    EtwTraceGreLockReleaseSemaphore(L"hSem7");
    GreReleaseSemaphoreInternal(*((_QWORD *)this + 6));
  }
  if ( *((_QWORD *)this + 5) )
  {
    EtwTraceGreLockReleaseSemaphore(L"hSem6");
    GreReleaseSemaphoreInternal(*((_QWORD *)this + 5));
  }
  if ( *((_QWORD *)this + 4) )
  {
    EtwTraceGreLockReleaseSemaphore(L"hSem5");
    GreReleaseSemaphoreInternal(*((_QWORD *)this + 4));
  }
  if ( *((_QWORD *)this + 3) )
  {
    EtwTraceGreLockReleaseSemaphore(L"hSem4");
    GreReleaseSemaphoreInternal(*((_QWORD *)this + 3));
  }
  if ( *((_QWORD *)this + 2) )
  {
    EtwTraceGreLockReleaseSemaphore(L"hSem3");
    GreReleaseSemaphoreInternal(*((_QWORD *)this + 2));
  }
  if ( *((_QWORD *)this + 1) )
  {
    EtwTraceGreLockReleaseSemaphore(L"hSem2");
    GreReleaseSemaphoreInternal(*((_QWORD *)this + 1));
  }
  if ( *(_QWORD *)this )
  {
    EtwTraceGreLockReleaseSemaphore(L"hSem1");
    GreReleaseSemaphoreInternal(*(_QWORD *)this);
  }
}
