__int64 __fastcall ValidateDXGIAlphaMode(int a1)
{
  __int64 result; // rax

  result = 3221225485LL;
  if ( (a1 & 0xFFFFFFFC) == 0 && a1 != 2 )
    return 0LL;
  return result;
}
