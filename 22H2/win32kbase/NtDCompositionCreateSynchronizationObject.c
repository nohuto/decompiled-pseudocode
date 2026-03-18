/*
 * XREFs of NtDCompositionCreateSynchronizationObject @ 0x1C0209550
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x1C002602C (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x1C0032288 (-GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ.c)
 *     ?OpenDwmHandle@CompositionObject@@QEBAJPEAPEAX@Z @ 0x1C0086BD0 (-OpenDwmHandle@CompositionObject@@QEBAJPEAPEAX@Z.c)
 *     DCompositionCreateSynchronizationObject @ 0x1C0209030 (DCompositionCreateSynchronizationObject.c)
 */

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
