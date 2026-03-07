void __fastcall CDeviceManager::TrimAllDevices(CDeviceManager *this)
{
  __int64 v1; // rdi
  __int64 i; // rbx
  CD3DDevice *v3; // rcx
  struct _RTL_CRITICAL_SECTION *v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = &stru_1803E7020;
  EnterCriticalSection(&stru_1803E7020);
  v1 = xmmword_1803E7050;
  for ( i = qword_1803E7048; i != v1; i += 16LL )
  {
    v3 = *(CD3DDevice **)i;
    if ( *(int *)(*(_QWORD *)i + 1088LL) >= 0 && *((_BYTE *)v3 + 1508) )
      CD3DDevice::Trim(v3);
  }
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v4);
}
