__int64 __fastcall CCaptureController::ProcessSetRoot(
        CCaptureController *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_CAPTURECONTROLLER_SETROOT *a3)
{
  __int64 Resource; // rax
  unsigned int v5; // edx
  struct CVisual **v7; // rdi
  CRenderTarget **v8; // rsi
  CRenderTarget **i; // rbx

  Resource = 0LL;
  v5 = *((_DWORD *)a3 + 2);
  if ( v5 )
    Resource = CResourceTable::GetResource((__int64)a2, v5, 0xC4u);
  v7 = (struct CVisual **)((char *)this + 88);
  wil::com_ptr_t<CVisual,wil::err_returncode_policy>::operator=((__int64 *)this + 11, Resource);
  v8 = (CRenderTarget **)*((_QWORD *)this + 9);
  for ( i = (CRenderTarget **)*((_QWORD *)this + 8); i != v8; ++i )
    CRenderTarget::SetRootVisual(*i, *v7);
  return 0LL;
}
