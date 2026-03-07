__int64 *__fastcall PopPepCancelActivityRange(__int64 a1, int a2, int a3, int a4, volatile signed __int32 *a5)
{
  __int64 **v5; // r11
  __int64 *result; // rax
  _DWORD *v7; // rdx
  __int64 v8; // r10
  int v9; // r8d

  if ( a3 <= a4 )
  {
    v5 = (__int64 **)(a1 + 8LL * a3);
    result = qword_140004FC8;
    v7 = (_DWORD *)&qword_140004FC8[17 * a2] + a3;
    v8 = (unsigned int)(a4 - a3 + 1);
    do
    {
      if ( *v7 )
      {
        result = *v5;
        v9 = *(_DWORD *)*v5;
        if ( (*v7 & v9) != 0 )
        {
          if ( (v9 & 2) != 0 )
            _InterlockedDecrement(a5);
          result = *v5;
          *(_DWORD *)*v5 &= 0xFFFFFFFC;
        }
      }
      ++v7;
      ++v5;
      --v8;
    }
    while ( v8 );
  }
  return result;
}
