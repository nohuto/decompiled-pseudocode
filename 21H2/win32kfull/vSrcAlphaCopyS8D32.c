/*
 * XREFs of vSrcAlphaCopyS8D32 @ 0x1C00DCC90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vSrcAlphaCopyS8D32(__int64 a1, int a2, int a3, __int64 a4, int a5, int a6, int a7, int a8)
{
  int v8; // esi
  unsigned __int8 *v9; // rbp
  int *v10; // rdi
  __int64 v11; // r12
  unsigned __int8 *v12; // r11
  int *i; // rax
  __int64 v14; // rcx

  v8 = a8;
  v9 = (unsigned __int8 *)(a1 + a2);
  v10 = (int *)(a4 + 4LL * a5);
  if ( a8 )
  {
    v11 = (unsigned int)(a6 - a5);
    do
    {
      v12 = v9;
      for ( i = v10; i < &v10[v11]; ++i )
      {
        v14 = *v12;
        if ( (_BYTE)v14 )
        {
          if ( (unsigned __int8)v14 >= 0x72u )
          {
            *i = 0xFFFFFF;
          }
          else
          {
            _mm_lfence();
            *i = alAlpha_255[*((unsigned __int8 *)off_1C03260D0 + 4 * v14 + 2)] | (((alAlpha_255[*((unsigned __int8 *)off_1C03260D0
                                                                                                 + 4 * v14)] << 8) | alAlpha_255[*((unsigned __int8 *)off_1C03260D0 + 4 * v14 + 1)]) << 8);
          }
        }
        ++v12;
      }
      v9 += a3;
      v10 = (int *)((char *)v10 + a7);
      --v8;
    }
    while ( v8 );
  }
}
