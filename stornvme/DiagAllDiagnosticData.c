/*
 * XREFs of DiagAllDiagnosticData @ 0x1C00110F4
 * Callers:
 *     DiagGeneric @ 0x1C00114BC (DiagGeneric.c)
 * Callees:
 *     memmove @ 0x1C0004280 (memmove.c)
 *     NVMeZeroMemory @ 0x1C0009218 (NVMeZeroMemory.c)
 */

__int64 __fastcall DiagAllDiagnosticData(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // edx
  unsigned int v5; // ebp
  unsigned int v7; // ebx
  __int64 v8; // rax

  v4 = *(_DWORD *)(a2 + 32);
  v5 = 0;
  v7 = 424 * *(_DWORD *)(a1 + 220) + 8704;
  if ( v4 >= v7 )
  {
    NVMeZeroMemory((void *)(a2 + 40), v4);
    *(_DWORD *)(a2 + 40) = v7;
    *(_DWORD *)(a2 + 44) = 1;
    *(_DWORD *)(a2 + 48) = *(_DWORD *)a1;
    *(_WORD *)(a2 + 52) = *(_WORD *)(a1 + 4);
    *(_WORD *)(a2 + 54) = *(_WORD *)(a1 + 6);
    *(_BYTE *)(a2 + 56) = *(_BYTE *)(a1 + 8);
    *(_DWORD *)(a2 + 60) = *(_DWORD *)(a1 + 12);
    *(_DWORD *)(a2 + 64) = *(_DWORD *)(a1 + 16);
    *(_BYTE *)(a2 + 68) = *(_BYTE *)(a1 + 20);
    *(_BYTE *)(a2 + 69) = *(_BYTE *)(a1 + 21);
    *(_BYTE *)(a2 + 70) = *(_BYTE *)(a1 + 25);
    *(_BYTE *)(a2 + 71) = *(_BYTE *)(a1 + 26);
    *(_BYTE *)(a2 + 72) = *(_BYTE *)(a1 + 27);
    *(_BYTE *)(a2 + 73) = *(_BYTE *)(a1 + 28);
    *(_DWORD *)(a2 + 76) = *(_DWORD *)(a1 + 32);
    *(_DWORD *)(a2 + 80) = *(_DWORD *)(a1 + 36);
    *(_OWORD *)(a2 + 84) = *(_OWORD *)(a1 + 40);
    *(_OWORD *)(a2 + 100) = *(_OWORD *)(a1 + 56);
    *(_OWORD *)(a2 + 116) = *(_OWORD *)(a1 + 72);
    *(_OWORD *)(a2 + 132) = *(_OWORD *)(a1 + 88);
    *(_OWORD *)(a2 + 148) = *(_OWORD *)(a1 + 104);
    *(_OWORD *)(a2 + 164) = *(_OWORD *)(a1 + 120);
    *(_OWORD *)(a2 + 180) = *(_OWORD *)(a1 + 136);
    *(_OWORD *)(a2 + 196) = *(_OWORD *)(a1 + 152);
    *(_DWORD *)(a2 + 212) = *(_DWORD *)(a1 + 168);
    *(_QWORD *)(a2 + 216) = *(_QWORD *)(a1 + 176);
    *(_DWORD *)(a2 + 224) = *(_DWORD *)(a1 + 192);
    *(_QWORD *)(a2 + 232) = *(_QWORD *)(a1 + 200);
    *(_DWORD *)(a2 + 240) = *(_DWORD *)(*(_QWORD *)(a1 + 184) + 20LL);
    *(_DWORD *)(a2 + 244) = *(_DWORD *)(*(_QWORD *)(a1 + 184) + 28LL);
    *(_DWORD *)(a2 + 248) = *(_DWORD *)(*(_QWORD *)(a1 + 184) + 56LL);
    *(_DWORD *)(a2 + 252) = *(_DWORD *)(*(_QWORD *)(a1 + 184) + 60LL);
    *(_OWORD *)(a2 + 256) = *(_OWORD *)(a1 + 208);
    *(_OWORD *)(a2 + 272) = *(_OWORD *)(a1 + 224);
    *(_OWORD *)(a2 + 288) = *(_OWORD *)(a1 + 240);
    *(_OWORD *)(a2 + 304) = *(_OWORD *)(a1 + 256);
    *(_OWORD *)(a2 + 320) = *(_OWORD *)(a1 + 272);
    *(_OWORD *)(a2 + 336) = *(_OWORD *)(a1 + 288);
    *(_OWORD *)(a2 + 352) = *(_OWORD *)(a1 + 304);
    *(_QWORD *)(a2 + 368) = *(_QWORD *)(a1 + 320);
    memmove((void *)(a2 + 376), (const void *)(a1 + 1840), 0x1000uLL);
    *(_OWORD *)(a2 + 4472) = *(_OWORD *)(a1 + 1864);
    *(_OWORD *)(a2 + 4488) = *(_OWORD *)(a1 + 1880);
    *(_OWORD *)(a2 + 4504) = *(_OWORD *)(a1 + 1896);
    *(_OWORD *)(a2 + 4520) = *(_OWORD *)(a1 + 1912);
    *(_QWORD *)(a2 + 4536) = *(_QWORD *)(a1 + 1928);
    memmove((void *)(a2 + 4544), (const void *)(a1 + 3992), 0x1000uLL);
    *(_OWORD *)(a2 + 8640) = *(_OWORD *)(a1 + 4008);
    *(_DWORD *)(a2 + 8656) = *(_DWORD *)(a1 + 4024);
    *(_OWORD *)(a2 + 8660) = *(_OWORD *)(a1 + 4032);
    *(_OWORD *)(a2 + 8676) = *(_OWORD *)(a1 + 4048);
    *(_QWORD *)(a2 + 8696) = *(_QWORD *)(a1 + 4064);
    *(_DWORD *)(a2 + 8704) = *(_DWORD *)(a1 + 4072);
    *(_WORD *)(a2 + 8712) = *(_WORD *)(a1 + 328);
    *(_WORD *)(a2 + 8714) = *(_WORD *)(a1 + 330);
    *(_WORD *)(a2 + 8716) = *(_WORD *)(a1 + 332);
    *(_WORD *)(a2 + 8718) = *(_WORD *)(a1 + 334);
    *(_WORD *)(a2 + 8720) = *(_WORD *)(a1 + 336);
    *(_WORD *)(a2 + 8722) = *(_WORD *)(a1 + 338);
    *(_WORD *)(a2 + 8724) = *(_WORD *)(a1 + 340);
    *(_WORD *)(a2 + 8726) = *(_WORD *)(a1 + 888);
    *(_WORD *)(a2 + 8728) = *(_WORD *)(a1 + 890);
    *(_WORD *)(a2 + 8730) = *(_WORD *)(a1 + 912);
    *(_WORD *)(a2 + 8732) = *(_WORD *)(a1 + 914);
    *(_WORD *)(a2 + 8734) = *(_WORD *)(a1 + 916);
    *(_WORD *)(a2 + 8736) = *(_WORD *)(a1 + 918);
    v8 = *(unsigned int *)(a1 + 220);
    *(_DWORD *)(a2 + 8740) = v8;
    if ( (_DWORD)v8 )
      memmove((void *)(a2 + 8744), (const void *)(a1 + 1952), 424 * v8);
    *(_DWORD *)(a2 + 32) = v7;
  }
  else
  {
    *(_DWORD *)(a2 + 32) = v7;
    v5 = -1056964604;
    *(_DWORD *)(a3 + 20) = 6;
  }
  return v5;
}
