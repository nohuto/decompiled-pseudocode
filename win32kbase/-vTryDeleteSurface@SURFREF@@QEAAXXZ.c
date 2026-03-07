void __fastcall SURFREF::vTryDeleteSurface(SURFREF *this)
{
  void *v2; // rbx
  char v3; // [rsp+30h] [rbp-18h]

  if ( KeAreApcsDisabled() )
  {
    v2 = Win32AllocPoolNonPaged(0x58uLL, 0x63707347u);
    v3 = 0;
    KeInitializeApc(
      v2,
      KeGetCurrentThread(),
      0LL,
      lambda_a018e77ba64c4f241a1dcf8ac06f3d65_::_lambda_invoker_cdecl_,
      lambda_a018e77ba64c4f241a1dcf8ac06f3d65_::_lambda_invoker_cdecl_,
      lambda_c42d5e148a0c8c495193b965072d0c08_::_lambda_invoker_cdecl_,
      v3,
      0LL);
    KeInsertQueueApc(v2, **(_QWORD **)this, 0LL, 0LL);
  }
  else
  {
    SURFREF::bDeleteSurface(this);
  }
}
