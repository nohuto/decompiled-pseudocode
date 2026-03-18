/*
 * XREFs of ?inv_cmap@@YAXHPEAURGBX@@HPEAKPEAE@Z @ 0x1C00DACDC
 * Callers:
 *     ?MakeITable@@YAHPEAEPEAURGBX@@H@Z @ 0x1C00DABB8 (-MakeITable@@YAHPEAEPEAURGBX@@H@Z.c)
 * Callees:
 *     ?redloop@@YAHXZ @ 0x1C00DAE7C (-redloop@@YAHXZ.c)
 *     memset @ 0x1C0160540 (memset.c)
 */

void __fastcall inv_cmap(int a1, struct RGBX *a2, __int64 a3, unsigned int *a4, unsigned __int8 *a5)
{
  int v8; // ebp
  unsigned int v9; // r11d
  unsigned int v10; // r10d
  unsigned int v11; // r9d
  __int64 v12; // rbx
  __int64 v13; // rcx

  dword_1C0336068 = 8;
  dword_1C0336070 = 32;
  dword_1C0336060 = 32;
  dword_1C033606C = 64;
  dword_1C0336064 = 1024;
  memset(a4, -1, 0x20000uLL);
  v8 = 0;
  for ( dword_1C0336074 = 0; v8 < a1; dword_1C0336074 = v8 )
  {
    v9 = *((unsigned __int8 *)a2 + 4 * v8);
    v10 = *((unsigned __int8 *)a2 + 4 * v8 + 1);
    v11 = *((unsigned __int8 *)a2 + 4 * v8 + 2);
    v12 = v11 >> 3;
    dword_1C0336014 = v9 >> 3;
    dword_1C0336010 = v10 >> 3;
    dword_1C033600C = v12;
    dword_1C033601C = v9 - 8 * (v9 >> 3) - 4;
    dword_1C0336018 = v10 - 8 * (v10 >> 3) - 4;
    dword_1C033602C = 16 * (8 * (v9 >> 3) + 8 - v9);
    dword_1C0336028 = 16 * (8 * (v10 >> 3) + 8 - v10);
    dword_1C0336024 = 16 * (8 * v12 + 8 - v11);
    dword_1C0336020 = dword_1C0336018 * dword_1C0336018
                    + (v11 - 8 * v12 - 4) * (v11 - 8 * v12 - 4)
                    + dword_1C033601C * dword_1C033601C;
    v13 = v12 + 32 * (v10 >> 3) + (unsigned __int64)(v9 >> 3 << 10);
    qword_1C0336040 = (__int64)&a4[v13];
    qword_1C0336058 = (__int64)&a5[v13];
    redloop();
    ++v8;
  }
}
