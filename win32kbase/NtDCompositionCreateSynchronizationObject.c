__int64 __fastcall NtDCompositionCreateSynchronizationObject(_QWORD *a1)
{
  int SynchronizationObject; // ebx
  __int64 v3; // rcx
  struct DirectComposition::CConnection *DefaultConnection; // rax
  PERESOURCE *v5; // rdi
  struct _ERESOURCE *v6; // rbx
  unsigned int v7; // edx
  HANDLE Handle; // [rsp+38h] [rbp+10h] BYREF
  PVOID Object; // [rsp+40h] [rbp+18h] BYREF

  Handle = 0LL;
  Object = 0LL;
  SynchronizationObject = DCompositionCreateSynchronizationObject((struct DirectComposition::SynchronizationObject **)&Object);
  if ( SynchronizationObject >= 0 )
  {
    KeEnterCriticalRegion();
    DefaultConnection = DirectComposition::CConnection::GetDefaultConnection(v3);
    v5 = (PERESOURCE *)DefaultConnection;
    if ( DefaultConnection )
    {
      v6 = (struct _ERESOURCE *)*((_QWORD *)DefaultConnection + 1);
      KeEnterCriticalRegion();
      ExAcquireResourceExclusiveLite(v6, 1u);
      SynchronizationObject = CompositionObject::OpenDwmHandle((CompositionObject *)Object, &Handle);
      ExReleaseResourceLite(v5[1]);
      KeLeaveCriticalRegion();
      DirectComposition::CConnection::Release((DirectComposition::CConnection *)v5, v7);
    }
    else
    {
      SynchronizationObject = -1073741790;
    }
    KeLeaveCriticalRegion();
  }
  if ( SynchronizationObject >= 0 )
  {
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      a1 = (_QWORD *)MmUserProbeAddress;
    *a1 = Handle;
  }
  if ( Object )
    ObfDereferenceObject(Object);
  return (unsigned int)SynchronizationObject;
}
