__int64 __fastcall LongLongAdd(unsigned __int64 a1, unsigned __int64 a2, unsigned __int64 *a3)
{
  unsigned __int64 v3; // r9
  unsigned __int64 v4; // rcx
  __int64 result; // rax

  v3 = a1 + a2;
  v4 = a1 >> 63;
  if ( (_DWORD)v4 != a2 >> 63 || (_DWORD)v4 == v3 >> 63 )
  {
    result = 0LL;
  }
  else
  {
    result = 2147942934LL;
    v3 = -1LL;
  }
  *a3 = v3;
  return result;
}
