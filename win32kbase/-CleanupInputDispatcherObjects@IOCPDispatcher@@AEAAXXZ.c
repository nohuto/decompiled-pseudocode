void __fastcall IOCPDispatcher::CleanupInputDispatcherObjects(IOCPDispatcher *this)
{
  IOCPDispatcher::SensorIOCPWCP *v1; // rbx
  IOCPDispatcher::SensorIOCPWCP *v3; // rsi

  v1 = (IOCPDispatcher *)((char *)this + 8);
  v3 = (IOCPDispatcher *)((char *)this + 2568);
  while ( v1 != v3 )
  {
    IOCPDispatcher::SensorIOCPWCP::Cleanup(v1);
    v1 = (IOCPDispatcher::SensorIOCPWCP *)((char *)v1 + 40);
  }
  *((_DWORD *)this + 642) = 0;
}
