__int64 __fastcall RtlTimelineBitmapUpdateRange(__int64 *a1, unsigned int a2, unsigned int a3)
{
  __int64 result; // rax
  int v6; // ecx
  unsigned int v7; // eax
  int v8; // r8d
  int v9; // eax
  int v10; // eax
  unsigned int v11; // ecx
  __int64 v12; // [rsp+8h] [rbp+8h]

  result = *a1;
  v12 = result;
  v6 = *a1;
  if ( a3 <= (unsigned int)result )
  {
    v11 = v6 - a3;
    if ( v11 >= 0x20 )
      return result;
    v9 = HIDWORD(result);
    v8 = 1 << v11;
  }
  else
  {
    LODWORD(v12) = a3;
    v7 = a3 - v6;
    v8 = 1;
    if ( v7 >= 0x20 )
      v9 = 0;
    else
      v9 = HIDWORD(v12) << v7;
  }
  v10 = v8 | v9;
  while ( 1 )
  {
    HIDWORD(v12) = v10;
    if ( a2 >= a3 )
      break;
    v8 *= 2;
    if ( !v8 )
      break;
    v10 |= v8;
    ++a2;
  }
  result = v12;
  *a1 = v12;
  return result;
}
