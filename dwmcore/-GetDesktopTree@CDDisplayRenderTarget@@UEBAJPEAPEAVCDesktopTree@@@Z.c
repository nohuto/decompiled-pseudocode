__int64 __fastcall CDDisplayRenderTarget::GetDesktopTree(CDDisplayRenderTarget *this, struct CDesktopTree **a2)
{
  __int64 v3; // rdx
  unsigned int v4; // edi
  CResource *v6; // [rsp+40h] [rbp+8h] BYREF

  v3 = *((_QWORD *)this + 4);
  v4 = 0;
  if ( v3 )
  {
    wil::com_ptr_t<CDesktopTree,wil::err_returncode_policy>::operator=(&v6, v3);
  }
  else
  {
    v4 = -2003292412;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, -2003292412, 0x9Bu, 0LL);
  }
  *a2 = 0LL;
  return v4;
}
