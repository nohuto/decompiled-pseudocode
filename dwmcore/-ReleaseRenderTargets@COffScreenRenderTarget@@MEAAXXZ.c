void __fastcall COffScreenRenderTarget::ReleaseRenderTargets(COffScreenRenderTarget *this)
{
  __int64 v1; // rsi
  char *i; // rbx

  v1 = 0LL;
  for ( i = (char *)this + 1760; (unsigned int)v1 < *((_DWORD *)this + 446); v1 = (unsigned int)(v1 + 1) )
    ReleaseInterfaceNoNULL<IRenderTargetBitmap>(*(_QWORD *)(*(_QWORD *)i + 8 * v1));
  *((_DWORD *)i + 6) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)i, 8u);
}
