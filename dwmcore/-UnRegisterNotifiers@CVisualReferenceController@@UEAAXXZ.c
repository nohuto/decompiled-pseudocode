void __fastcall CVisualReferenceController::UnRegisterNotifiers(CVisualReferenceController *this)
{
  char *v1; // rdi
  __int64 v3; // rbx
  CVisualReferenceController **i; // rcx

  v1 = (char *)this + 72;
  v3 = *((_QWORD *)this + 9);
  if ( v3 )
  {
    for ( i = *(CVisualReferenceController ***)(v3 + 24); i != *(CVisualReferenceController ***)(v3 + 32) && *i != this; ++i )
      ;
    memmove_0(i, i + 1, *(_QWORD *)(v3 + 32) - (_QWORD)(i + 1));
    *(_QWORD *)(v3 + 32) -= 8LL;
    wil::com_ptr_t<CWeakReference<CVisual>,wil::err_returncode_policy>::reset(v1);
  }
}
