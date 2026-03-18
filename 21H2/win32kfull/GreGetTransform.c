/*
 * XREFs of GreGetTransform @ 0x1C015F924
 * Callers:
 *     NtGdiGetTransform @ 0x1C00E1E10 (NtGdiGetTransform.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0041DDC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00E47F8 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?vInitPageToDevice@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@PEAVMATRIX@@@Z @ 0x1C013BEDC (-vInitPageToDevice@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@PEAVMATRIX@@@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C015D384 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C015DA34 (--1MDCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GreGetTransform(HDC a1, int a2, struct _XFORML *a3)
{
  unsigned int v5; // ebx
  _QWORD v7[2]; // [rsp+20h] [rbp-29h] BYREF
  _QWORD v8[2]; // [rsp+30h] [rbp-19h] BYREF
  _BYTE v9[32]; // [rsp+40h] [rbp-9h] BYREF
  _OWORD v10[2]; // [rsp+60h] [rbp+17h] BYREF
  int v11; // [rsp+80h] [rbp+37h]

  v5 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v8, a1);
  if ( v8[0] )
  {
    EXFORMOBJ::vQuickInit((EXFORMOBJ *)v7, (struct XDCOBJ *)v8, a2 | 0x80000000);
    v11 = 0;
    memset(v10, 0, sizeof(v10));
    if ( v7[0]
      || a2 == 772 && (EXFORMOBJ::vInitPageToDevice((EXFORMOBJ *)v7, (struct XDCOBJ *)v8, (struct MATRIX *)v10), v7[0]) )
    {
      EXFORMOBJ::vGetCoefficient((EXFORMOBJ *)v7, a3);
      v5 = 1;
    }
  }
  MDCOBJ::~MDCOBJ((MDCOBJ *)v8);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v9);
  return v5;
}
