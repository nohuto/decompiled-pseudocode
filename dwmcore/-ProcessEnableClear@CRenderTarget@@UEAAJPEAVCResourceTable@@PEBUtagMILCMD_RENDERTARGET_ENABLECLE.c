__int64 __fastcall CRenderTarget::ProcessEnableClear(
        CRenderTarget *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_RENDERTARGET_ENABLECLEAR *a3)
{
  char v3; // al

  v3 = *((_BYTE *)a3 + 8) != 0;
  if ( *((_BYTE *)this + 140) != v3 )
  {
    *((_BYTE *)this + 140) = v3;
    *((_BYTE *)this + 141) = 1;
  }
  return 0LL;
}
