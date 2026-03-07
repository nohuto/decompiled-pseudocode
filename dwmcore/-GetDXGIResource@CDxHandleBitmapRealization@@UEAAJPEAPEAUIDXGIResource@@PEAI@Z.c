__int64 __fastcall CDxHandleBitmapRealization::GetDXGIResource(
        CDxHandleBitmapRealization *this,
        struct IDXGIResource **a2,
        unsigned int *a3)
{
  int v6; // eax
  __int64 v7; // rcx
  unsigned int *v8; // r8
  unsigned int v9; // ebx
  int DXGIResource; // eax
  __int64 v11; // rcx

  *a2 = 0LL;
  v6 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this - 45) + 64LL))((char *)this - 360);
  v9 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x110u, 0LL);
  }
  else
  {
    DXGIResource = CD2DBitmap::GetDXGIResource(*((CD2DBitmap **)this + 2), a2, v8);
    v9 = DXGIResource;
    if ( DXGIResource < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, DXGIResource, 0x112u, 0LL);
    }
    else if ( a3 )
    {
      *a3 = *(_DWORD *)(*((_QWORD *)this + 2) + 240LL);
    }
  }
  return v9;
}
