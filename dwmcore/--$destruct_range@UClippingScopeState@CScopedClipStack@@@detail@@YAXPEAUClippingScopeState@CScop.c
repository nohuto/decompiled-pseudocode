void *__fastcall detail::destruct_range<CScopedClipStack::ClippingScopeState>(
        CScopedClipStack::ClippingScopeState *this,
        CScopedClipStack::ClippingScopeState *a2)
{
  CScopedClipStack::ClippingScopeState *v3; // rbx
  void *result; // rax

  if ( this != a2 )
  {
    v3 = this;
    do
    {
      result = CScopedClipStack::ClippingScopeState::`scalar deleting destructor'(v3, (unsigned int)a2);
      v3 = (CScopedClipStack::ClippingScopeState *)((char *)v3 + 184);
    }
    while ( v3 != a2 );
  }
  return result;
}
