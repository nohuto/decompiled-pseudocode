/*
 * XREFs of ?vSolidXorRect24@@YAXPEAU_RECTL@@KPEAEJKK@Z @ 0x1C0305BE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vSolidXorRect24(struct _RECTL *a1, int a2, unsigned __int8 *a3, int a4, unsigned int a5)
{
  int v6; // r10d
  LONG *p_right; // r11
  int v8; // edx
  int v9; // ebx
  unsigned __int8 *v10; // r9
  int i; // ecx
  int j; // eax

  v6 = a2;
  if ( a2 )
  {
    p_right = &a1->right;
    do
    {
      v8 = *(p_right - 2);
      v9 = *p_right - v8;
      v10 = &a3[3 * v8 + a4 * *(p_right - 1)];
      for ( i = p_right[1] - *(p_right - 1); i; v10 += a4 - 3 * v9 )
      {
        --i;
        for ( j = v9; j; --j )
        {
          *(_WORD *)v10 ^= a5;
          v10[2] ^= BYTE2(a5);
          v10 += 3;
        }
      }
      p_right += 4;
      --v6;
    }
    while ( v6 );
  }
}
