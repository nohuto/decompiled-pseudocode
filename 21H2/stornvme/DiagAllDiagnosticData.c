/*
 * XREFs of DiagAllDiagnosticData @ 0x1C001A27C
 * Callers:
 *     DiagGeneric @ 0x1C001A624 (DiagGeneric.c)
 * Callees:
 *     NVMeZeroMemory @ 0x1C0005100 (NVMeZeroMemory.c)
 *     memmove @ 0x1C0010700 (memmove.c)
 */

__int64 __fastcall DiagAllDiagnosticData(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // edx
  unsigned int v5; // ebp
  unsigned int v7; // ebx
  __int64 v8; // rax

  v4 = *(_DWORD *)(a2 + 32);
  v5 = 0;
  v7 = 424 * *(_DWORD *)(a1 + 212) + 8672;
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
    *(_QWORD *)(a2 + 196) = *(_QWORD *)(a1 + 152);
    *(_DWORD *)(a2 + 204) = *(_DWORD *)(a1 + 160);
    *(_QWORD *)(a2 + 208) = *(_QWORD *)(a1 + 168);
    *(_DWORD *)(a2 + 216) = *(_DWORD *)(a1 + 184);
    *(_QWORD *)(a2 + 224) = *(_QWORD *)(a1 + 192);
    *(_DWORD *)(a2 + 232) = *(_DWORD *)(*(_QWORD *)(a1 + 176) + 20LL);
    *(_DWORD *)(a2 + 236) = *(_DWORD *)(*(_QWORD *)(a1 + 176) + 28LL);
    *(_DWORD *)(a2 + 240) = *(_DWORD *)(*(_QWORD *)(a1 + 176) + 56LL);
    *(_DWORD *)(a2 + 244) = *(_DWORD *)(*(_QWORD *)(a1 + 176) + 60LL);
    *(_OWORD *)(a2 + 248) = *(_OWORD *)(a1 + 200);
    *(_OWORD *)(a2 + 264) = *(_OWORD *)(a1 + 216);
    *(_OWORD *)(a2 + 280) = *(_OWORD *)(a1 + 232);
    *(_OWORD *)(a2 + 296) = *(_OWORD *)(a1 + 248);
    *(_OWORD *)(a2 + 312) = *(_OWORD *)(a1 + 264);
    *(_OWORD *)(a2 + 328) = *(_OWORD *)(a1 + 280);
    memmove((void *)(a2 + 344), (const void *)(a1 + 1640), 0x1000uLL);
    *(_OWORD *)(a2 + 4440) = *(_OWORD *)(a1 + 1664);
    *(_OWORD *)(a2 + 4456) = *(_OWORD *)(a1 + 1680);
    *(_OWORD *)(a2 + 4472) = *(_OWORD *)(a1 + 1696);
    *(_OWORD *)(a2 + 4488) = *(_OWORD *)(a1 + 1712);
    *(_QWORD *)(a2 + 4504) = *(_QWORD *)(a1 + 1728);
    memmove((void *)(a2 + 4512), (const void *)(a1 + 3792), 0x1000uLL);
    *(_OWORD *)(a2 + 8608) = *(_OWORD *)(a1 + 3808);
    *(_DWORD *)(a2 + 8624) = *(_DWORD *)(a1 + 3824);
    *(_OWORD *)(a2 + 8628) = *(_OWORD *)(a1 + 3832);
    *(_OWORD *)(a2 + 8644) = *(_OWORD *)(a1 + 3848);
    *(_QWORD *)(a2 + 8664) = *(_QWORD *)(a1 + 3864);
    *(_DWORD *)(a2 + 8672) = *(_DWORD *)(a1 + 3872);
    *(_WORD *)(a2 + 8680) = *(_WORD *)(a1 + 296);
    *(_WORD *)(a2 + 8682) = *(_WORD *)(a1 + 298);
    *(_WORD *)(a2 + 8684) = *(_WORD *)(a1 + 300);
    *(_WORD *)(a2 + 8686) = *(_WORD *)(a1 + 302);
    *(_WORD *)(a2 + 8688) = *(_WORD *)(a1 + 304);
    *(_WORD *)(a2 + 8690) = *(_WORD *)(a1 + 306);
    *(_WORD *)(a2 + 8692) = *(_WORD *)(a1 + 308);
    *(_WORD *)(a2 + 8694) = *(_WORD *)(a1 + 808);
    *(_WORD *)(a2 + 8696) = *(_WORD *)(a1 + 810);
    *(_WORD *)(a2 + 8698) = *(_WORD *)(a1 + 832);
    *(_WORD *)(a2 + 8700) = *(_WORD *)(a1 + 834);
    *(_WORD *)(a2 + 8702) = *(_WORD *)(a1 + 836);
    *(_WORD *)(a2 + 8704) = *(_WORD *)(a1 + 838);
    v8 = *(unsigned int *)(a1 + 212);
    *(_DWORD *)(a2 + 8708) = v8;
    if ( (_DWORD)v8 )
      memmove((void *)(a2 + 8712), (const void *)(a1 + 1752), 424 * v8);
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
