__int64 __fastcall NtOpenCompositionSurfaceSectionInfo(
        void *a1,
        unsigned __int64 *a2,
        __int64 *a3,
        unsigned __int64 a4)
{
  int v6; // ebx
  unsigned __int64 v7; // rsi
  struct DXGGLOBAL *Global; // rax
  __int64 v9; // r8
  PVOID Object; // [rsp+28h] [rbp-50h] BYREF
  unsigned __int64 v12; // [rsp+30h] [rbp-48h]
  __int64 v13; // [rsp+38h] [rbp-40h] BYREF
  __int128 v14; // [rsp+40h] [rbp-38h] BYREF
  __int64 v15; // [rsp+50h] [rbp-28h]
  struct CCompositionSurface *v16; // [rsp+88h] [rbp+10h] BYREF
  unsigned __int64 v17; // [rsp+98h] [rbp+20h]

  v17 = a4;
  v6 = 0;
  Object = 0LL;
  v7 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  if ( a2 && a3 )
  {
    if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
      a2 = (unsigned __int64 *)MmUserProbeAddress;
    v7 = *a2;
    v12 = *a2;
    if ( a3 + 1 < a3 || (unsigned __int64)(a3 + 1) > MmUserProbeAddress )
      a3 = (__int64 *)MmUserProbeAddress;
    v13 = *a3;
  }
  else
  {
    v6 = -1073741811;
  }
  KeEnterCriticalRegion();
  if ( v6 >= 0 )
  {
    Global = DXGGLOBAL::GetGlobal();
    if ( (*(unsigned int (__fastcall **)(_QWORD))(*((_QWORD *)Global + 38069) + 560LL))(*((_QWORD *)Global + 38069)) )
    {
      v6 = CompositionSurfaceObject::ResolveHandle(a1, 1u, v9, (struct CompositionSurfaceObject **)&Object);
      if ( v6 >= 0 )
      {
        v16 = 0LL;
        v6 = CompositionSurfaceObject::LockForRead((CompositionSurfaceObject *)Object, &v16);
        if ( v6 >= 0 )
        {
          v6 = CCompositionSurface::OpenSectionInfo(
                 v16,
                 v7,
                 (const struct CSM_SYSMEM_REALIZATION *)&v13,
                 (struct CSM_SYSMEM_SECTION_INFO *)&v14);
          CCompositionSurface::UnlockAndRelease(v16);
        }
        ObfDereferenceObject(Object);
      }
    }
    else
    {
      v6 = -1073741790;
    }
  }
  if ( a4 )
  {
    if ( a4 + 24 < a4 || a4 + 24 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    *(_OWORD *)a4 = v14;
    *(_QWORD *)(a4 + 16) = v15;
  }
  else
  {
    v6 = -1073741811;
  }
  KeLeaveCriticalRegion();
  return (unsigned int)v6;
}
