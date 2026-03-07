void __fastcall CWindowBackgroundTreatment::InvalidateBitmapRealization(__int64 this)
{
  char *v1; // rbx
  __int64 v3; // r8
  unsigned __int64 v4; // rax
  _QWORD *v5; // rcx

  v1 = (char *)(this + 80);
  v3 = *(_QWORD *)(this + 80);
  if ( v3 )
  {
    v4 = this + 64;
    v5 = (_QWORD *)(*(int *)(*(_QWORD *)(v3 + 8) + 8LL) + v3 + 8);
    (*(void (__fastcall **)(_QWORD *, unsigned __int64, _QWORD, __int64))(*v5 + 48LL))(
      v5,
      v4 & -(__int64)(this != 0),
      *v5,
      -this);
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset(v1);
  }
}
