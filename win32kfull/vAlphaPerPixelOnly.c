/*
 * XREFs of vAlphaPerPixelOnly @ 0x1C0092770
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vAlphaPerPixelOnly(unsigned int *a1, __int64 a2, int a3)
{
  int v3; // r11d
  unsigned int *v4; // r10
  __int64 v5; // rbx
  unsigned int v6; // eax
  unsigned int v7; // edi
  int v8; // ecx
  unsigned int v9; // r9d

  v3 = a3;
  v4 = a1;
  if ( a3 )
  {
    v5 = a2 - (_QWORD)a1;
    do
    {
      v6 = *(unsigned int *)((char *)v4 + v5);
      --v3;
      if ( HIBYTE(v6) )
      {
        v7 = *v4;
        if ( HIBYTE(v6) != 0xFF )
        {
          v8 = 255 - HIBYTE(v6);
          v9 = v8 * ((v7 >> 8) & 0xFF00FF) + 8388736;
          v6 += (v9 + ((v9 >> 8) & 0xFF00FF)) ^ ((v9 + ((v9 >> 8) & 0xFFFF00FF)) ^ ((v8 * (v7 & 0xFF00FF)
                                                                                   + 8388736
                                                                                   + (((v8 * (v7 & 0xFF00FF) + 8388736) >> 8) & 0xFF00FF)) >> 8)) & 0xFF00FF;
        }
        *v4 = v6;
      }
      ++v4;
    }
    while ( v3 );
  }
}
