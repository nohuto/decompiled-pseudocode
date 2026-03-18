/*
 * XREFs of GreSetColorAdjustment @ 0x1C029DB20
 * Callers:
 *     NtGdiSetColorAdjustment @ 0x1C02AE9F0 (NtGdiSetColorAdjustment.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0041DDC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C015D384 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C015DA34 (--1MDCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GreSetColorAdjustment(HDC a1, __int64 a2)
{
  __int64 v3; // rax
  unsigned int v4; // ebx
  __int64 v5; // xmm0_8
  _QWORD v7[2]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v8[40]; // [rsp+30h] [rbp-28h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v7, a1);
  v3 = v7[0];
  v4 = 0;
  if ( v7[0] )
  {
    v4 = 1;
    v5 = *(_QWORD *)(a2 + 16);
    *(_OWORD *)(v7[0] + 176LL) = *(_OWORD *)a2;
    *(_QWORD *)(v3 + 192) = v5;
    *(_WORD *)(v7[0] + 178LL) &= 3u;
  }
  else
  {
    EngSetLastError(6u);
  }
  MDCOBJ::~MDCOBJ((MDCOBJ *)v7);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v8);
  return v4;
}
