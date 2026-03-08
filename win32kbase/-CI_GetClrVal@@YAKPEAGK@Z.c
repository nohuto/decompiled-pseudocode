/*
 * XREFs of ?CI_GetClrVal@@YAKPEAGK@Z @ 0x1C0018D04
 * Callers:
 *     xxxODI_ColorInit @ 0x1C0018A90 (xxxODI_ColorInit.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CI_GetClrVal(unsigned __int16 *a1, unsigned int a2)
{
  unsigned __int16 v2; // ax
  unsigned int *v4; // r9
  int v5; // r10d
  unsigned __int16 v6; // r8
  char v7; // dl
  unsigned int v9; // [rsp+8h] [rbp+8h] BYREF

  v2 = *a1;
  v9 = 0;
  if ( v2 )
  {
    v4 = &v9;
    v5 = 0;
    while ( v2 )
    {
      v6 = v2;
      while ( v6 < 0x30u || v6 > 0x39u )
      {
        v2 = *++a1;
        v6 = *a1;
        if ( !*a1 )
          return a2;
      }
      v7 = 0;
      do
      {
        if ( v6 > 0x39u )
          break;
        v7 = *(_BYTE *)a1++ + 10 * v7 - 48;
        v2 = *a1;
        v6 = *a1;
      }
      while ( *a1 >= 0x30u );
      *(_BYTE *)v4 = v7;
      ++v5;
      v4 = (unsigned int *)((char *)v4 + 1);
      if ( v5 >= 3 )
      {
        *(_BYTE *)v4 = 0;
        return v9;
      }
    }
  }
  return a2;
}
