/*
 * XREFs of SymCryptFdefIntShr1 @ 0x1403FDA70
 * Callers:
 *     SymCryptIntShr1 @ 0x1403F3964 (SymCryptIntShr1.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptFdefIntShr1(int a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // r10
  __int64 result; // rax
  unsigned __int64 v5; // r11
  int *v6; // r9
  __int64 v7; // r8
  int v8; // eax

  v3 = 0LL;
  result = (unsigned int)(16 * *(_DWORD *)(a3 + 4));
  v5 = (unsigned int)result;
  if ( (_DWORD)result )
  {
    v6 = (int *)(a2 + 36);
    v7 = a3 - a2;
    do
    {
      if ( ++v3 >= v5 )
        v8 = a1;
      else
        v8 = *v6;
      result = (unsigned int)(v8 << 31);
      *(int *)((char *)v6 + v7 - 4) = result | ((unsigned int)*(v6 - 1) >> 1);
      ++v6;
    }
    while ( v3 < v5 );
  }
  return result;
}
