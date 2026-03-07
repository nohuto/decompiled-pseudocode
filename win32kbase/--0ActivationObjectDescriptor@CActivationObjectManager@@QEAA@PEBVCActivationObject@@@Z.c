CActivationObjectManager::ActivationObjectDescriptor *__fastcall CActivationObjectManager::ActivationObjectDescriptor::ActivationObjectDescriptor(
        CActivationObjectManager::ActivationObjectDescriptor *this,
        PEPROCESS *a2)
{
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  if ( a2 )
  {
    *(_DWORD *)this = (unsigned int)PsGetProcessId(a2[3]) & 0xFFFFFFFC;
    *((_DWORD *)this + 1) = (unsigned int)PsGetThreadId(a2[4]);
    *((_QWORD *)this + 1) = a2[5];
  }
  return this;
}
