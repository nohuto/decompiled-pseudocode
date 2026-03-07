__int64 __fastcall NtDCompositionGetMaterialProperty(__int64 a1, _QWORD *a2)
{
  struct _ERESOURCE *v4; // rbx
  __int64 DesktopIdForCurrentThread; // rax
  int MaterialProperty; // ebx
  void *v7; // r8
  CompositionObject *v8; // rcx
  void *v10; // [rsp+50h] [rbp+18h] BYREF
  __int64 v11; // [rsp+58h] [rbp+20h] BYREF

  v4 = Resource;
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite(v4, 1u);
  v11 = 0LL;
  DesktopIdForCurrentThread = UserGetDesktopIdForCurrentThread();
  MaterialProperty = FindMaterialProperty(DesktopIdForCurrentThread, a1, &v11);
  if ( MaterialProperty >= 0 && !*(_QWORD *)(v11 + 16) )
    MaterialProperty = -1073741275;
  v7 = 0LL;
  v10 = 0LL;
  if ( MaterialProperty >= 0 )
  {
    v8 = *(CompositionObject **)(v11 + 16);
    if ( v8 )
    {
      MaterialProperty = CompositionObject::CreateHandle(v8, 1u, 0, 0, &v10);
      v7 = v10;
      if ( MaterialProperty >= 0 )
      {
        if ( (unsigned __int64)a2 >= MmUserProbeAddress )
          a2 = (_QWORD *)MmUserProbeAddress;
        *a2 = v10;
        v7 = 0LL;
        v10 = 0LL;
      }
    }
    else
    {
      MaterialProperty = -1073741790;
    }
  }
  if ( v7 )
    ObCloseHandle(v7, 0);
  ExReleaseResourceLite(Resource);
  KeLeaveCriticalRegion();
  return (unsigned int)MaterialProperty;
}
