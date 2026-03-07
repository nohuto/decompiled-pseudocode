bool __fastcall CCursorVisual::IsVisible(CCursorVisual *this)
{
  __int64 v1; // rdx
  bool result; // al

  v1 = *((_QWORD *)this + 90);
  result = 0;
  if ( v1 )
    return *(_QWORD *)(v1 + 184) != 0LL;
  return result;
}
