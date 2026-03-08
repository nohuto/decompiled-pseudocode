/*
 * XREFs of ExpandHTPatX @ 0x1C0254E34
 * Callers:
 *     GenerateWORDPat @ 0x1C0254ED4 (GenerateWORDPat.c)
 *     Generate_HTSC_WORD @ 0x1C02550F0 (Generate_HTSC_WORD.c)
 * Callees:
 *     memmove @ 0x1C0130B80 (memmove.c)
 */

__int64 __fastcall ExpandHTPatX(char *Src, int a2, int a3, int a4)
{
  int v4; // edi
  unsigned int v5; // esi
  __int64 result; // rax
  __int64 v8; // rcx
  unsigned int v9; // r14d
  __int64 v10; // r13
  char *v11; // r12
  unsigned int v12; // r15d
  unsigned int v13; // eax
  __int64 v14; // rbx

  v4 = a3;
  v5 = 6 * a2;
  result = (unsigned int)(6 * a4);
  if ( (unsigned int)result > 6 * a2 && a3 )
  {
    v8 = v5;
    v9 = result - v5;
    v10 = (unsigned int)result;
    do
    {
      --v4;
      v11 = &Src[v8];
      v12 = v9;
      if ( v9 )
      {
        do
        {
          v13 = v5;
          if ( v12 <= v5 )
            v13 = v12;
          v14 = v13;
          result = (__int64)memmove(v11, Src, v13);
          v11 += v14;
          v12 -= v14;
        }
        while ( v12 );
        v8 = v5;
      }
      Src += v10;
    }
    while ( v4 );
  }
  return result;
}
