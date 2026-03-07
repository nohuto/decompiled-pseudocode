__int64 __fastcall NtOpenCompositionSurfaceDirtyRegion(__int64 a1, unsigned __int64 *a2, ULONG64 a3, HRGN *a4)
{
  signed int Buffer; // ebx
  unsigned __int64 v7; // rsi
  struct DXGGLOBAL *Global; // rax
  __int64 v9; // r8
  PVOID v10; // r14
  struct CBufferRealization *RealizationAt; // rax
  CBufferRealization *v12; // rcx
  struct DXGGLOBAL *v14; // rax
  CCompositionSurface *v15; // [rsp+38h] [rbp-90h] BYREF
  unsigned __int64 v16; // [rsp+40h] [rbp-88h]
  PVOID Object; // [rsp+48h] [rbp-80h] BYREF
  CCompositionBuffer *v18; // [rsp+50h] [rbp-78h] BYREF
  unsigned int v19[4]; // [rsp+58h] [rbp-70h]
  __int128 v20; // [rsp+68h] [rbp-60h]
  __int64 v21; // [rsp+78h] [rbp-50h]
  __int128 v22; // [rsp+80h] [rbp-48h]
  __int128 v23; // [rsp+90h] [rbp-38h]
  __int64 v24; // [rsp+A0h] [rbp-28h]
  HRGN v25; // [rsp+D8h] [rbp+10h] BYREF
  HRGN *v26; // [rsp+E8h] [rbp+20h]

  v26 = a4;
  Buffer = 0;
  v7 = 0LL;
  v16 = 0LL;
  *(_OWORD *)v19 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  v25 = 0LL;
  if ( a2 && a3 )
  {
    if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
      a2 = (unsigned __int64 *)MmUserProbeAddress;
    v7 = *a2;
    v16 = *a2;
    if ( a3 + 40 < a3 || a3 + 40 > MmUserProbeAddress )
      a3 = MmUserProbeAddress;
    v22 = *(_OWORD *)a3;
    v23 = *(_OWORD *)(a3 + 16);
    v24 = *(_QWORD *)(a3 + 32);
    *(_OWORD *)v19 = v22;
    v20 = v23;
    v21 = v24;
  }
  else
  {
    Buffer = -1073741811;
  }
  KeEnterCriticalRegion();
  if ( Buffer >= 0 )
  {
    Global = DXGGLOBAL::GetGlobal();
    if ( (*(unsigned int (**)(void))(*((_QWORD *)Global + 38069) + 560LL))() )
    {
      Object = 0LL;
      LOBYTE(v9) = 1;
      Buffer = DxgkCompositionObject::ResolveHandle(a1, 1LL, v9, 1LL, &Object);
      if ( Buffer >= 0 )
      {
        v10 = Object;
        v15 = 0LL;
        Buffer = CompositionSurfaceObject::LockForRead((CompositionSurfaceObject *)Object, &v15);
        if ( Buffer >= 0 )
        {
          v18 = 0LL;
          Buffer = CCompositionSurface::FindBuffer(v15, v7, &v18);
          if ( Buffer >= 0 )
          {
            RealizationAt = CCompositionBuffer::GetRealizationAt(v18, v19[1]);
            v12 = 0LL;
            if ( RealizationAt )
              v12 = RealizationAt;
            Buffer = RealizationAt == 0LL ? 0xC0000225 : 0;
            if ( RealizationAt )
              Buffer = CBufferRealization::OpenLifetimeDirtyRegion(v12, &v25);
          }
          CCompositionSurface::UnlockAndRelease(v15);
        }
        ObfDereferenceObject(v10);
      }
    }
    else
    {
      Buffer = -1073741790;
    }
  }
  if ( a4 )
  {
    if ( a4 + 1 < a4 || (unsigned __int64)(a4 + 1) > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    *a4 = v25;
  }
  else
  {
    Buffer = -1073741811;
  }
  if ( Buffer < 0 && v25 )
  {
    v14 = DXGGLOBAL::GetGlobal();
    (*(void (__fastcall **)(HRGN))(*((_QWORD *)v14 + 38069) + 72LL))(v25);
  }
  KeLeaveCriticalRegion();
  return (unsigned int)Buffer;
}
