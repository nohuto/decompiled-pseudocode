__int64 __fastcall anonymous_namespace_::NTW_GetPrevTop(__int64 a1, __int64 a2)
{
  __int64 v4; // rbx
  __int64 NextTop; // rax

  v4 = 0LL;
  do
  {
    NextTop = anonymous_namespace_::NTW_GetNextTop(a1, v4);
    if ( NextTop == a2 && v4 )
      break;
    v4 = NextTop;
  }
  while ( NextTop );
  return v4;
}
