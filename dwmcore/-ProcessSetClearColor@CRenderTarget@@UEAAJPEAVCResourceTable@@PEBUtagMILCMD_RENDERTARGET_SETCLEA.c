__int64 __fastcall CRenderTarget::ProcessSetClearColor(
        CRenderTarget *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_RENDERTARGET_SETCLEARCOLOR *a3)
{
  bool v3; // zf

  if ( *((float *)this + 31) != *((float *)a3 + 2)
    || *((float *)this + 32) != *((float *)a3 + 3)
    || *((float *)this + 33) != *((float *)a3 + 4)
    || *((float *)this + 34) != *((float *)a3 + 5) )
  {
    v3 = *((_BYTE *)this + 140) == 0;
    *(_OWORD *)((char *)this + 124) = *(_OWORD *)((char *)a3 + 8);
    if ( !v3 )
      *((_BYTE *)this + 141) = 1;
  }
  return 0LL;
}
