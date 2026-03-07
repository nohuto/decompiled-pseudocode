__int64 __fastcall NtUnBindCompositionSurface(void *a1, unsigned int a2)
{
  int SessionTokenManager; // eax
  char v5; // r8
  struct CCompositionSurface *v6; // rdi
  int v7; // ebx
  CCompositionSurface *v8; // rsi
  struct DXGGLOBAL *Global; // rax
  struct CCompositionSurface *v11; // [rsp+20h] [rbp-E0h] BYREF
  PVOID Object; // [rsp+28h] [rbp-D8h] BYREF
  struct CCompositionBuffer *v13; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v14[164]; // [rsp+40h] [rbp-C0h] BYREF

  v11 = 0LL;
  Object = 0LL;
  KeEnterCriticalRegion();
  SessionTokenManager = DxgkGetSessionTokenManager(&v11);
  v6 = v11;
  v7 = SessionTokenManager;
  if ( SessionTokenManager >= 0 )
  {
    v7 = CompositionSurfaceObject::ResolveHandle(a1, 2u, v5, (struct CompositionSurfaceObject **)&Object);
    if ( v7 >= 0 )
    {
      v11 = 0LL;
      memset(v14, 0, sizeof(v14));
      v7 = CompositionSurfaceObject::LockForWrite((CompositionSurfaceObject *)Object, &v11);
      if ( v7 >= 0 )
      {
        v8 = v11;
        v13 = 0LL;
        if ( (int)CCompositionSurface::FindBuffer(v11, *((_QWORD *)v11 + 5), &v13) >= 0 )
          (*(void (__fastcall **)(struct CCompositionBuffer *, _QWORD *))(*(_QWORD *)v13 + 48LL))(v13, v14);
        v7 = CCompositionSurface::UnBind(v8, a2 != 0);
        CCompositionSurface::UnlockAndRelease(v8);
        if ( v7 >= 0 )
        {
          if ( v14[145] && LODWORD(v14[0]) == 2 )
          {
            Global = DXGGLOBAL::GetGlobal();
            (*(void (__fastcall **)(_QWORD, _QWORD))(*((_QWORD *)Global + 38069) + 544LL))(v14[145], a2);
          }
          if ( !a2 )
            (*(void (__fastcall **)(struct CCompositionSurface *, PVOID))(*(_QWORD *)v6 + 80LL))(v6, Object);
        }
      }
      ObfDereferenceObject(Object);
    }
  }
  if ( v6 )
    (*(void (__fastcall **)(struct CCompositionSurface *))(*(_QWORD *)v6 + 8LL))(v6);
  KeLeaveCriticalRegion();
  return (unsigned int)v7;
}
