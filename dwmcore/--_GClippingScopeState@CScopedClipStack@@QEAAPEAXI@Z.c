CScopedClipStack::ClippingScopeState *__fastcall CScopedClipStack::ClippingScopeState::`scalar deleting destructor'(
        CScopedClipStack::ClippingScopeState *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 21);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  return this;
}
