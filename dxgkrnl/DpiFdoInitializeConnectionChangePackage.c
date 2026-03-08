/*
 * XREFs of DpiFdoInitializeConnectionChangePackage @ 0x1C005EA28
 * Callers:
 *     DpiFdoHandleDisplayDetectControl @ 0x1C001BDEC (DpiFdoHandleDisplayDetectControl.c)
 *     DpIndicateChildStatus @ 0x1C005D370 (DpIndicateChildStatus.c)
 * Callees:
 *     memset @ 0x1C0027640 (memset.c)
 */

_DWORD *__fastcall DpiFdoInitializeConnectionChangePackage(
        __int64 a1,
        int a2,
        char a3,
        int a4,
        char a5,
        char a6,
        char a7,
        char a8)
{
  _DWORD *v12; // rax
  _DWORD *v13; // rbx
  _DWORD *result; // rax
  signed __int64 v15; // rax
  unsigned int v16; // edi

  v12 = ExAllocateFromNPagedLookasideList(&Lookaside);
  v13 = v12;
  if ( v12 )
  {
    memset(v12, 0, 0x90uLL);
    v13[4] = 1953656900;
    v13[5] = 13;
    *((_OWORD *)v13 + 4) = *(_OWORD *)a1;
    *((_OWORD *)v13 + 5) = *(_OWORD *)(a1 + 16);
    *((_OWORD *)v13 + 6) = *(_OWORD *)(a1 + 32);
    *((_OWORD *)v13 + 7) = *(_OWORD *)(a1 + 48);
    *((_QWORD *)v13 + 16) = *(_QWORD *)(a1 + 64);
    v15 = _InterlockedExchangeAdd64(&qword_1C013B988, 1uLL);
    v13[9] = a4;
    *((_QWORD *)v13 + 3) = v15 + 1;
    v16 = v13[8] & 0xF0000000 | a2 & 0xFFFFFF | ((a3 & 0xF) << 24);
    *((_BYTE *)v13 + 140) = a5;
    *((_BYTE *)v13 + 141) = a6;
    *((_BYTE *)v13 + 143) = a8;
    *((_BYTE *)v13 + 142) = a7;
    result = v13;
    v13[8] = v16;
    *((_BYTE *)v13 + 136) = HIBYTE(a2);
  }
  else
  {
    WdLogSingleEntry1(6LL, -1073741670LL);
    return 0LL;
  }
  return result;
}
