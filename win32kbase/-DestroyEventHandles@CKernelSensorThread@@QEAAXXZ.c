void __fastcall CKernelSensorThread::DestroyEventHandles(CKernelSensorThread *this)
{
  char *v1; // rbx
  HANDLE *v3; // rdi
  __int64 v4; // rsi

  v1 = (char *)this + 8;
  RIMLockExclusive((__int64)this + 8);
  v3 = (HANDLE *)((char *)this + 56);
  v4 = 5LL;
  do
  {
    if ( *v3 )
    {
      ZwClose(*v3);
      *v3 = 0LL;
    }
    ++v3;
    --v4;
  }
  while ( v4 );
  *((_QWORD *)v1 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v1, 0LL);
  KeLeaveCriticalRegion();
}
