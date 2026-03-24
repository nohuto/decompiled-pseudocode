/*
 * XREFs of ?vStrMirror16@@YAXPEAVSURFACE@@@Z @ 0x1C02C34F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vStrMirror16(struct SURFACE *a1)
{
  __int16 *v1; // r9
  int v2; // r11d
  __int64 i; // rdi
  __int16 *v5; // rdx
  __int16 *v6; // r10
  __int64 v7; // rbx
  __int16 v8; // cx

  v1 = (__int16 *)*((_QWORD *)a1 + 10);
  v2 = 0;
  for ( i = (unsigned int)(*((_DWORD *)a1 + 14) / 2);
        v2 < *((_DWORD *)a1 + 15);
        v1 = (__int16 *)((char *)v1 + *((int *)a1 + 22)) )
  {
    v5 = v1;
    v6 = &v1[*((int *)a1 + 14) - 1];
    if ( (int)i > 0 )
    {
      v7 = i;
      do
      {
        v8 = *v5;
        *v5++ = *v6;
        *v6-- = v8;
        --v7;
      }
      while ( v7 );
    }
    ++v2;
  }
}
