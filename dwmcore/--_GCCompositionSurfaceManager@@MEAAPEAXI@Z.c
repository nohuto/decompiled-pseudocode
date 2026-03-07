CCompositionSurfaceManager *__fastcall CCompositionSurfaceManager::`scalar deleting destructor'(
        CCompositionSurfaceManager *this,
        char a2)
{
  struct _RTL_GENERIC_TABLE *v3; // rdi
  PVOID v5; // rax
  PVOID RestartKey; // [rsp+30h] [rbp+8h] BYREF

  *(_QWORD *)this = &CCompositionSurfaceManager::`vftable';
  v3 = (struct _RTL_GENERIC_TABLE *)((char *)this + 8);
  while ( 1 )
  {
    RestartKey = 0LL;
    v5 = RtlEnumerateGenericTableWithoutSplaying(v3, &RestartKey);
    if ( !v5 )
      break;
    if ( !RtlDeleteElementGenericTable(v3, v5) )
      RaiseFailFastException(0LL, 0LL, 1u);
  }
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
