__int64 CoreMessagingK::EntryLock::Initialize(void)
{
  struct _KMUTANT *Pool2; // rax
  unsigned int v1; // ebx

  Pool2 = (struct _KMUTANT *)ExAllocatePool2(66LL, 56LL, 1279610179LL);
  v1 = 0;
  if ( Pool2 )
  {
    Mutex = Pool2;
    KeInitializeMutex(Pool2, 0);
    CoreMessagingK::EntryLock::s_Initialized = 1;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v1;
}
