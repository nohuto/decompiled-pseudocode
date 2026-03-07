__int64 __fastcall NtDCompositionCommitSynchronizationObject(void *a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // ebx
  __int64 v6; // rcx
  struct DirectComposition::CConnection *DefaultConnection; // rax
  PERESOURCE *v8; // rdi
  struct _ERESOURCE *v9; // rbx
  PVOID v10; // rcx
  unsigned int v11; // edx
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF
  PVOID Object; // [rsp+48h] [rbp+10h] BYREF

  if ( UserIsCurrentProcessDwm((__int64)a1, a2, a3, a4)
    || (LOBYTE(Object) = 0,
        DestinationString = 0LL,
        RtlInitUnicodeString(&DestinationString, L"shellExperienceComposer"),
        (int)RtlCapabilityCheck(0LL, &DestinationString, &Object) >= 0)
    && (_BYTE)Object )
  {
    KeEnterCriticalRegion();
    DefaultConnection = DirectComposition::CConnection::GetDefaultConnection(v6);
    v8 = (PERESOURCE *)DefaultConnection;
    if ( DefaultConnection )
    {
      v9 = (struct _ERESOURCE *)*((_QWORD *)DefaultConnection + 1);
      KeEnterCriticalRegion();
      ExAcquireResourceExclusiveLite(v9, 1u);
      Object = 0LL;
      v5 = DirectComposition::SynchronizationObject::ResolveHandle(
             a1,
             2u,
             1,
             (struct DirectComposition::SynchronizationObject **)&Object);
      if ( v5 >= 0 )
      {
        v10 = Object;
        *((_BYTE *)Object + 33) = 1;
        ObfDereferenceObject(v10);
      }
      ExReleaseResourceLite(v8[1]);
      KeLeaveCriticalRegion();
      DirectComposition::CConnection::Release((DirectComposition::CConnection *)v8, v11);
    }
    else
    {
      v5 = -1073741790;
    }
    KeLeaveCriticalRegion();
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return (unsigned int)v5;
}
