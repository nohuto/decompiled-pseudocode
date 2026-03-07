__int64 __fastcall CInteractionTracker::s_OnIdleAtFrameBegin(_QWORD *a1)
{
  bool v1; // zf
  _QWORD *v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = a1[6] == 0LL;
  v4 = a1;
  if ( !v1 )
    CResource::InvalidateAnimationSources((CResource *)a1, 60);
  *((_BYTE *)a1 + 540) &= ~0x80u;
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v4);
  return 0LL;
}
