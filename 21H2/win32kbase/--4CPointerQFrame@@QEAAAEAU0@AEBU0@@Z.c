/*
 * XREFs of ??4CPointerQFrame@@QEAAAEAU0@AEBU0@@Z @ 0x1C01878EC
 * Callers:
 *     ?CopyPTPPointerInputFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAU2@PEAX@Z @ 0x1C018BFCC (-CopyPTPPointerInputFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAU2@PEAX@Z.c)
 * Callees:
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C009E41C (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 */

__int64 __fastcall CPointerQFrame::operator=(__int64 a1, __int64 a2)
{
  int v4; // edx
  int v5; // ecx
  int v6; // eax
  int v7; // ecx

  *(_DWORD *)a1 = *(_DWORD *)a2;
  *(_QWORD *)(a1 + 8) = *(_QWORD *)(a2 + 8);
  CInputDest::operator=(a1 + 16, a2 + 16);
  v4 = *(_DWORD *)(a1 + 140);
  *(_DWORD *)(a1 + 136) = *(_DWORD *)(a2 + 136);
  *(_DWORD *)(a1 + 140) ^= (*(_DWORD *)(a2 + 140) ^ v4) & 1;
  v5 = *(_DWORD *)(a1 + 140) ^ ((unsigned __int8)*(_DWORD *)(a1 + 140) ^ (unsigned __int8)*(_DWORD *)(a2 + 140)) & 2;
  *(_DWORD *)(a1 + 140) = v5;
  v6 = v5 ^ ((unsigned __int8)v5 ^ (unsigned __int8)*(_DWORD *)(a2 + 140)) & 4;
  *(_DWORD *)(a1 + 140) = v6;
  v7 = v6 ^ ((unsigned __int8)v6 ^ (unsigned __int8)*(_DWORD *)(a2 + 140)) & 8;
  *(_DWORD *)(a1 + 140) = v7;
  *(_DWORD *)(a1 + 140) = v7 ^ ((unsigned __int8)v7 ^ (unsigned __int8)*(_DWORD *)(a2 + 140)) & 0x10;
  *(_DWORD *)(a1 + 144) = *(_DWORD *)(a2 + 144);
  *(_DWORD *)(a1 + 148) = *(_DWORD *)(a2 + 148);
  *(_QWORD *)(a1 + 152) = *(_QWORD *)(a2 + 152);
  return a1;
}
