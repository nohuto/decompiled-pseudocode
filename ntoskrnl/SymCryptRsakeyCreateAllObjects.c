/*
 * XREFs of SymCryptRsakeyCreateAllObjects @ 0x1403F1E6C
 * Callers:
 *     SymCryptRsakeySetValue @ 0x1403F1F8C (SymCryptRsakeySetValue.c)
 * Callees:
 *     SymCryptIntCreate @ 0x1403F37C8 (SymCryptIntCreate.c)
 *     SymCryptModElementCreate @ 0x1403F3AEC (SymCryptModElementCreate.c)
 *     SymCryptModulusCreate @ 0x1403F3EC0 (SymCryptModulusCreate.c)
 *     SymCryptSizeofIntFromDigits @ 0x1403F3EF0 (SymCryptSizeofIntFromDigits.c)
 *     SymCryptSizeofModElementFromModulus @ 0x1403F3F08 (SymCryptSizeofModElementFromModulus.c)
 *     SymCryptSizeofModulusFromDigits @ 0x1403F3F20 (SymCryptSizeofModulusFromDigits.c)
 */

__int64 __fastcall SymCryptRsakeyCreateAllObjects(_DWORD *a1, __int64 a2)
{
  unsigned int v2; // eax
  __int64 v3; // rbp
  unsigned int i; // r14d
  unsigned int v6; // ebx
  unsigned int v7; // eax
  unsigned int v8; // r14d
  __int64 v9; // rdi
  __int64 v10; // rbx
  unsigned int v11; // eax
  __int64 v12; // rax
  unsigned int v13; // eax
  unsigned int j; // r14d
  unsigned int v15; // ebx
  unsigned int v16; // eax
  __int64 result; // rax
  unsigned int v18; // ebx
  unsigned int v19; // eax

  v2 = a1[6];
  v3 = 0LL;
  for ( i = 0; i < v2; v2 = a1[6] )
  {
    v6 = a1[i + 9];
    v7 = SymCryptSizeofModulusFromDigits(v6);
    *(_QWORD *)&a1[2 * i + 30] = SymCryptModulusCreate(*(_QWORD *)&a1[2 * i + 14], v7, v6);
    ++i;
  }
  v8 = 0;
  if ( v2 )
  {
    do
    {
      v9 = v8;
      v10 = *(_QWORD *)&a1[2 * v8 + 30];
      v11 = SymCryptSizeofModElementFromModulus(v10);
      v12 = SymCryptModElementCreate(*(_QWORD *)&a1[2 * v8++ + 18], v11, v10);
      *(_QWORD *)&a1[2 * v9 + 34] = v12;
    }
    while ( v8 < a1[6] );
  }
  v13 = a1[5];
  for ( j = 0; j < v13; v13 = a1[5] )
  {
    v15 = a1[4];
    v16 = SymCryptSizeofIntFromDigits(v15, a2);
    *(_QWORD *)&a1[2 * j + 38] = SymCryptIntCreate(*(_QWORD *)&a1[2 * j + 22], v16, v15);
    ++j;
  }
  result = a1[6] * v13;
  if ( (_DWORD)result )
  {
    do
    {
      v18 = a1[v3 + 9];
      v19 = SymCryptSizeofIntFromDigits(v18, a2);
      *(_QWORD *)&a1[2 * v3 + 40] = SymCryptIntCreate(*(_QWORD *)&a1[2 * v3 + 24], v19, v18);
      v3 = (unsigned int)(v3 + 1);
      result = (unsigned int)(a1[6] * a1[5]);
    }
    while ( (unsigned int)v3 < (unsigned int)result );
  }
  return result;
}
