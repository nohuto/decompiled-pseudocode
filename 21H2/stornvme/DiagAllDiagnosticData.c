/*
 * XREFs of DiagAllDiagnosticData @ 0x1C0011230
 * Callers:
 *     DiagGeneric @ 0x1C00115BC (DiagGeneric.c)
 * Callees:
 *     NVMeZeroMemory @ 0x1C0005A70 (NVMeZeroMemory.c)
 *     memmove @ 0x1C0007D80 (memmove.c)
 */

__int64 __fastcall DiagAllDiagnosticData(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // edx
  unsigned int v5; // ebp
  unsigned int v7; // ebx
  __int64 v8; // rax

  v4 = *(_DWORD *)(a2 + 32);
  v5 = 0;
  v7 = 104 * *(_DWORD *)(a1 + 196) + 8664;
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
    *(_BYTE *)(a2 + 64) = *(_BYTE *)(a1 + 16);
    *(_BYTE *)(a2 + 65) = *(_BYTE *)(a1 + 17);
    *(_BYTE *)(a2 + 66) = *(_BYTE *)(a1 + 18);
    *(_BYTE *)(a2 + 67) = *(_BYTE *)(a1 + 19);
    *(_BYTE *)(a2 + 68) = *(_BYTE *)(a1 + 20);
    *(_BYTE *)(a2 + 69) = *(_BYTE *)(a1 + 21);
    *(_DWORD *)(a2 + 72) = *(_DWORD *)(a1 + 24);
    *(_DWORD *)(a2 + 76) = *(_DWORD *)(a1 + 28);
    *(_OWORD *)(a2 + 80) = *(_OWORD *)(a1 + 32);
    *(_OWORD *)(a2 + 96) = *(_OWORD *)(a1 + 48);
    *(_OWORD *)(a2 + 112) = *(_OWORD *)(a1 + 64);
    *(_OWORD *)(a2 + 128) = *(_OWORD *)(a1 + 80);
    *(_OWORD *)(a2 + 144) = *(_OWORD *)(a1 + 96);
    *(_OWORD *)(a2 + 160) = *(_OWORD *)(a1 + 112);
    *(_OWORD *)(a2 + 176) = *(_OWORD *)(a1 + 128);
    *(_DWORD *)(a2 + 192) = *(_DWORD *)(a1 + 144);
    *(_QWORD *)(a2 + 200) = *(_QWORD *)(a1 + 152);
    *(_DWORD *)(a2 + 208) = *(_DWORD *)(a1 + 168);
    *(_QWORD *)(a2 + 216) = *(_QWORD *)(a1 + 176);
    *(_DWORD *)(a2 + 224) = *(_DWORD *)(*(_QWORD *)(a1 + 160) + 20LL);
    *(_DWORD *)(a2 + 228) = *(_DWORD *)(*(_QWORD *)(a1 + 160) + 28LL);
    *(_DWORD *)(a2 + 232) = *(_DWORD *)(*(_QWORD *)(a1 + 160) + 56LL);
    *(_DWORD *)(a2 + 236) = *(_DWORD *)(*(_QWORD *)(a1 + 160) + 60LL);
    *(_OWORD *)(a2 + 240) = *(_OWORD *)(a1 + 184);
    *(_OWORD *)(a2 + 256) = *(_OWORD *)(a1 + 200);
    *(_OWORD *)(a2 + 272) = *(_OWORD *)(a1 + 216);
    *(_OWORD *)(a2 + 288) = *(_OWORD *)(a1 + 232);
    *(_OWORD *)(a2 + 304) = *(_OWORD *)(a1 + 248);
    *(_OWORD *)(a2 + 320) = *(_OWORD *)(a1 + 264);
    memmove((void *)(a2 + 336), (const void *)(a1 + 1624), 0x1000uLL);
    *(_OWORD *)(a2 + 4432) = *(_OWORD *)(a1 + 1648);
    *(_OWORD *)(a2 + 4448) = *(_OWORD *)(a1 + 1664);
    *(_OWORD *)(a2 + 4464) = *(_OWORD *)(a1 + 1680);
    *(_OWORD *)(a2 + 4480) = *(_OWORD *)(a1 + 1696);
    *(_QWORD *)(a2 + 4496) = *(_QWORD *)(a1 + 1712);
    memmove((void *)(a2 + 4504), (const void *)(a1 + 3776), 0x1000uLL);
    *(_OWORD *)(a2 + 8600) = *(_OWORD *)(a1 + 3792);
    *(_DWORD *)(a2 + 8616) = *(_DWORD *)(a1 + 3808);
    *(_OWORD *)(a2 + 8620) = *(_OWORD *)(a1 + 3816);
    *(_OWORD *)(a2 + 8636) = *(_OWORD *)(a1 + 3832);
    *(_QWORD *)(a2 + 8656) = *(_QWORD *)(a1 + 3848);
    *(_DWORD *)(a2 + 8664) = *(_DWORD *)(a1 + 3856);
    *(_WORD *)(a2 + 8672) = *(_WORD *)(a1 + 280);
    *(_WORD *)(a2 + 8674) = *(_WORD *)(a1 + 282);
    *(_WORD *)(a2 + 8676) = *(_WORD *)(a1 + 284);
    *(_WORD *)(a2 + 8678) = *(_WORD *)(a1 + 286);
    *(_WORD *)(a2 + 8680) = *(_WORD *)(a1 + 288);
    *(_WORD *)(a2 + 8682) = *(_WORD *)(a1 + 290);
    *(_WORD *)(a2 + 8684) = *(_WORD *)(a1 + 292);
    *(_WORD *)(a2 + 8686) = *(_WORD *)(a1 + 792);
    *(_WORD *)(a2 + 8688) = *(_WORD *)(a1 + 794);
    *(_WORD *)(a2 + 8690) = *(_WORD *)(a1 + 816);
    *(_WORD *)(a2 + 8692) = *(_WORD *)(a1 + 818);
    *(_WORD *)(a2 + 8694) = *(_WORD *)(a1 + 820);
    *(_WORD *)(a2 + 8696) = *(_WORD *)(a1 + 822);
    v8 = *(unsigned int *)(a1 + 196);
    *(_DWORD *)(a2 + 8700) = v8;
    if ( (_DWORD)v8 )
      memmove((void *)(a2 + 8704), (const void *)(a1 + 1736), 104 * v8);
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
