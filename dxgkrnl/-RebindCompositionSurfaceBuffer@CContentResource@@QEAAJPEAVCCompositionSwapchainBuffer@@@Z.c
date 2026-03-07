__int64 __fastcall CContentResource::RebindCompositionSurfaceBuffer(
        CContentResource *this,
        struct CCompositionSwapchainBuffer *a2)
{
  int v3; // ebx
  CompositionSurfaceObject *v4; // rcx
  int v6; // eax
  CCompositionSurface *v7; // rdi
  struct DXGGLOBAL *Global; // rax
  CCompositionSurface *v10; // [rsp+60h] [rbp+8h] BYREF

  v3 = 0;
  v4 = (CompositionSurfaceObject *)*((_QWORD *)this + 6);
  if ( v4 )
  {
    v10 = 0LL;
    v6 = CompositionSurfaceObject::LockForWrite(v4, &v10);
    v7 = v10;
    v3 = v6;
    if ( v6 >= 0 )
    {
      v3 = CCompositionSurface::UnBind(v10, 1);
      if ( v3 >= 0 )
      {
        *((_BYTE *)this + 64) = 0;
        *((_QWORD *)this + 7) = 0LL;
        if ( a2 )
        {
          if ( !*((_DWORD *)a2 + 68) || (v3 = CCompositionSurface::Bind(v7, a2, (unsigned __int64 *)this + 7), v3 >= 0) )
          {
            *((_BYTE *)this + 64) = *((_BYTE *)a2 + 624);
            *((_BYTE *)this + 65) = *((_BYTE *)a2 + 737);
            Global = DXGGLOBAL::GetGlobal();
            (*(void (__fastcall **)(CContentResource *, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD))(*((_QWORD *)Global
                                                                                                 + 38069)
                                                                                               + 168LL))(
              this,
              *((_QWORD *)v7 - 2),
              *((_QWORD *)this + 7),
              *((unsigned __int8 *)this + 65),
              *((unsigned __int8 *)this + 64),
              *((_DWORD *)a2 + 68));
          }
        }
      }
    }
    if ( v7 )
      CCompositionSurface::UnlockAndRelease(v7);
  }
  return (unsigned int)v3;
}
