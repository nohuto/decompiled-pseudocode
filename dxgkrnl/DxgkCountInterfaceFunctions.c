__int64 __fastcall DxgkCountInterfaceFunctions(__int64 a1, __int64 *a2, _QWORD *a3, __int64 *a4)
{
  _QWORD *v4; // r11
  unsigned __int64 i; // r10
  __int64 result; // rax

  *a2 = 0LL;
  v4 = (_QWORD *)(a1 + 168);
  *a3 = 0LL;
  for ( i = 0LL; i < 0x8C; ++i )
  {
    if ( *v4 )
    {
      if ( i >= 0x40 )
      {
        if ( i >= 0x80 )
        {
          result = *a4 | (1LL << ((unsigned __int8)i + 0x80));
          *a4 = result;
        }
        else
        {
          result = i - 128 + 64;
          *a3 |= 1LL << ((unsigned __int8)i - 64);
        }
      }
      else
      {
        result = *a2 | (1LL << i);
        *a2 = result;
      }
    }
    ++v4;
  }
  return result;
}
