bool __fastcall DirectComposition::CVisualReferenceControllerMarshaler::SetRemarshalingFlags(
        DirectComposition::CVisualReferenceControllerMarshaler *this)
{
  __int64 v1; // rdx
  bool result; // al

  v1 = *((_QWORD *)this + 7);
  result = 0;
  if ( v1 )
    return *(_QWORD *)(v1 + 16) != 0LL;
  return result;
}
