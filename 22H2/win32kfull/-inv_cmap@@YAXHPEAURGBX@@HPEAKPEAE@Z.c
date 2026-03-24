/*
 * XREFs of ?inv_cmap@@YAXHPEAURGBX@@HPEAKPEAE@Z @ 0x1C00D4250
 * Callers:
 *     ?MakeITable@@YAHPEAEPEAURGBX@@H@Z @ 0x1C00D4124 (-MakeITable@@YAHPEAEPEAURGBX@@H@Z.c)
 * Callees:
 *     ?redloop@@YAHXZ @ 0x1C00D43E8 (-redloop@@YAHXZ.c)
 */

void __fastcall inv_cmap(int a1, struct RGBX *a2, __int64 a3, unsigned int *a4, unsigned __int8 *a5)
{
  int v6; // ebp
  unsigned int *v7; // rdi
  __int64 i; // rcx
  unsigned int v11; // r10d
  unsigned int v12; // r9d
  unsigned int v13; // r8d
  __int64 v14; // r11
  __int64 v15; // rcx

  dword_1C0339EA8 = 8;
  dword_1C0339EB0 = 32;
  v6 = 0;
  dword_1C0339EA0 = 32;
  dword_1C0339EAC = 64;
  dword_1C0339EA4 = 1024;
  v7 = a4;
  dword_1C0339EB4 = 0;
  for ( i = 0x8000LL; i; --i )
    *v7++ = -1;
  if ( a1 > 0 )
  {
    do
    {
      v11 = *((unsigned __int8 *)a2 + 4 * v6);
      v12 = *((unsigned __int8 *)a2 + 4 * v6 + 1);
      v13 = *((unsigned __int8 *)a2 + 4 * v6 + 2);
      v14 = v13 >> 3;
      dword_1C0339E54 = v11 >> 3;
      dword_1C0339E50 = v12 >> 3;
      dword_1C0339E5C = v11 - 8 * (v11 >> 3) - 4;
      dword_1C0339E4C = v14;
      dword_1C0339E58 = v12 - 8 * (v12 >> 3) - 4;
      dword_1C0339E6C = 16 * (8 * (v11 >> 3) + 8 - v11);
      dword_1C0339E68 = 16 * (8 * (v12 >> 3) + 8 - v12);
      dword_1C0339E60 = dword_1C0339E58 * dword_1C0339E58
                      + (v13 - 8 * v14 - 4) * (v13 - 8 * v14 - 4)
                      + dword_1C0339E5C * dword_1C0339E5C;
      dword_1C0339E64 = 16 * (8 * v14 + 8 - v13);
      v15 = v14 + 32 * (v12 >> 3) + (unsigned __int64)(v11 >> 3 << 10);
      qword_1C0339E80 = (__int64)&a4[v15];
      qword_1C0339E98 = (__int64)&a5[v15];
      redloop();
      dword_1C0339EB4 = ++v6;
    }
    while ( v6 < a1 );
  }
}
