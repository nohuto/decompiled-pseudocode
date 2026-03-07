void __fastcall CD2DBitmap::LockAndRead(CD2DBitmap *this, const struct ID2DContextOwner *a2)
{
  char *v4; // rcx
  __int64 v5; // rax
  int v6; // eax
  __int64 v7; // rcx
  struct ID3D11Texture2D *v8; // rcx
  int v9; // eax
  __int64 v10; // rcx

  if ( a2 )
  {
    v4 = (char *)this + *(int *)(*((_QWORD *)this - 38) + 8LL) - 304;
    v5 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v4 + 8LL))(v4);
    v6 = CD2DContext::FlushD2D((CD2DContext *)(v5 + 16), a2);
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0xA1u, 0LL);
  }
  v8 = (struct ID3D11Texture2D *)*((_QWORD *)this - 25);
  if ( v8 )
  {
    v9 = DebugInspectTexture(v8, *((_DWORD *)this - 20));
    if ( v9 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0xA6u, 0LL);
  }
}
