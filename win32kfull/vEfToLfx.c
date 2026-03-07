__int64 __fastcall vEfToLfx(int *a1, __int64 *a2)
{
  int v2; // r9d
  __int64 v3; // r8
  char v4; // cl
  __int64 v5; // r8
  __int64 result; // rax

  v2 = *a1;
  v3 = *a1 & 0x7FFFFF | 0x800000LL;
  v4 = (*a1 >> 23) - 118;
  if ( v4 < 0 )
    v5 = v3 >> -v4;
  else
    v5 = v3 << v4;
  result = -v5;
  if ( v2 >= 0 )
    result = v5;
  *a2 = result;
  return result;
}
