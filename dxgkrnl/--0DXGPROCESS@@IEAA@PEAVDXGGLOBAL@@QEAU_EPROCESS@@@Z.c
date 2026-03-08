/*
 * XREFs of ??0DXGPROCESS@@IEAA@PEAVDXGGLOBAL@@QEAU_EPROCESS@@@Z @ 0x1C01A7AF0
 * Callers:
 *     ??0DXGPROCESSVM@@QEAA@PEAVDXGGLOBAL@@QEAU_EPROCESS@@PEAVDXGPROCESS@@2@Z @ 0x1C00554F4 (--0DXGPROCESSVM@@QEAA@PEAVDXGGLOBAL@@QEAU_EPROCESS@@PEAVDXGPROCESS@@2@Z.c)
 *     ?CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1EPEAU_EPROCESS@@@Z @ 0x1C01A7864 (-CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1EPEAU_EPROCESS@@@Z.c)
 * Callees:
 *     <none>
 */

DXGPROCESS *__fastcall DXGPROCESS::DXGPROCESS(DXGPROCESS *this, struct DXGGLOBAL *a2, struct _EPROCESS *const a3)
{
  DXGPROCESS *result; // rax

  *((_QWORD *)this + 3) = a2;
  *(_OWORD *)((char *)this + 8) = 0LL;
  *(_QWORD *)this = &DXGPROCESS::`vftable';
  *((_QWORD *)this + 4) = 0LL;
  *((_DWORD *)this + 10) = 0;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = a3;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_DWORD *)this + 20) = 0;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_DWORD *)this + 34) = 0;
  *((_DWORD *)this + 35) = 4;
  *((_DWORD *)this + 36) = 61;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_DWORD *)this + 42) = 0;
  *((_DWORD *)this + 43) = 14;
  *((_DWORD *)this + 44) = 39;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_DWORD *)this + 50) = 0;
  *((_DWORD *)this + 51) = 66;
  *((_DWORD *)this + 52) = 85;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_DWORD *)this + 58) = 0;
  *((_DWORD *)this + 59) = 56;
  *((_QWORD *)this + 31) = 0LL;
  *((_QWORD *)this + 32) = 0LL;
  *((_DWORD *)this + 66) = 0;
  *((_DWORD *)this + 67) = 6;
  *((_DWORD *)this + 68) = 37;
  *((_QWORD *)this + 35) = 0LL;
  *((_QWORD *)this + 36) = 0LL;
  *((_QWORD *)this + 37) = 0LL;
  *((_QWORD *)this + 38) = 0LL;
  *((_QWORD *)this + 41) = (char *)this + 320;
  *((_QWORD *)this + 40) = (char *)this + 320;
  *((_WORD *)this + 168) = 0;
  *((_QWORD *)this + 44) = (char *)this + 344;
  *((_QWORD *)this + 43) = (char *)this + 344;
  *((_QWORD *)this + 48) = 0LL;
  *((_QWORD *)this + 49) = 0LL;
  *((_QWORD *)this + 50) = 0LL;
  *((_DWORD *)this + 102) = 0;
  *((_DWORD *)this + 103) = 6;
  *((_DWORD *)this + 104) = 46;
  *((_DWORD *)this + 106) = 0;
  *((_WORD *)this + 214) = 0;
  *((_DWORD *)this + 108) = 0;
  *((_DWORD *)this + 109) = 0;
  *((_DWORD *)this + 110) = 0;
  *((_DWORD *)this + 111) = 0;
  *((_QWORD *)this + 56) = 0LL;
  *((_QWORD *)this + 57) = 0LL;
  *((_QWORD *)this + 58) = 0LL;
  *((_QWORD *)this + 59) = 0LL;
  *((_DWORD *)this + 120) = 0;
  *((_DWORD *)this + 121) = 1;
  *((_QWORD *)this + 64) = 0LL;
  *((_QWORD *)this + 65) = 0LL;
  *((_DWORD *)this + 132) = 0;
  *(_QWORD *)((char *)this + 532) = 1LL;
  *((_DWORD *)this + 135) = 0;
  *((_WORD *)this + 288) = 0;
  *(_QWORD *)((char *)this + 580) = 0LL;
  *((_WORD *)this + 294) = 0;
  *((_BYTE *)this + 590) = 0;
  *((_QWORD *)this + 74) = 0LL;
  *((_QWORD *)this + 62) = (char *)this + 488;
  *((_QWORD *)this + 61) = (char *)this + 488;
  *((_WORD *)this + 300) = 0;
  *((_DWORD *)this + 78) = 2;
  *((_DWORD *)this + 126) = 0;
  ExInitializeRundownProtection((PEX_RUNDOWN_REF)this + 30);
  result = this;
  *((_BYTE *)this + 556) = 0;
  *((_BYTE *)this + 572) = 0;
  return result;
}
