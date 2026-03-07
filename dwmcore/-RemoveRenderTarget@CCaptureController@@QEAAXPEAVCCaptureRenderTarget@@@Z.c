void __fastcall CCaptureController::RemoveRenderTarget(CCaptureController *this, struct CCaptureRenderTarget *a2)
{
  char *v2; // rdi
  CRenderTarget **i; // rbx
  char v4; // [rsp+30h] [rbp+8h] BYREF

  v2 = (char *)this + 64;
  for ( i = (CRenderTarget **)*((_QWORD *)this + 8); i != *((CRenderTarget ***)this + 9); ++i )
  {
    if ( *i == a2 )
    {
      CRenderTarget::SetRootVisual(*i, 0LL);
      *((_BYTE *)*i + 1896) = 0;
      *((_QWORD *)*i + 13) = 0LL;
      CCaptureRenderTarget::SetTransform((struct CResource **)*i, 0LL);
      std::vector<wil::com_ptr_t<CCaptureRenderTarget,wil::err_returncode_policy>>::erase(v2, &v4, i);
      return;
    }
  }
}
