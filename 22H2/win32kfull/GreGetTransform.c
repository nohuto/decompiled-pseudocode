/*
 * XREFs of GreGetTransform @ 0x1C01405F4
 * Callers:
 *     NtGdiGetTransform @ 0x1C0002A20 (NtGdiGetTransform.c)
 * Callees:
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0099E60 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C011B310 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C011C01C (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013E000 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ?vInitPageToDevice@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@PEAVMATRIX@@@Z @ 0x1C02D02A4 (-vInitPageToDevice@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@PEAVMATRIX@@@Z.c)
 */

__int64 __fastcall GreGetTransform(HDC a1, int a2, struct _XFORML *a3)
{
  unsigned int v5; // ebx
  __int64 v6; // rax
  _QWORD v8[2]; // [rsp+20h] [rbp-29h] BYREF
  _QWORD v9[2]; // [rsp+30h] [rbp-19h] BYREF
  _BYTE v10[32]; // [rsp+40h] [rbp-9h] BYREF
  _OWORD v11[2]; // [rsp+60h] [rbp+17h] BYREF
  int v12; // [rsp+80h] [rbp+37h]

  v5 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v9, a1);
  if ( v9[0] )
  {
    EXFORMOBJ::vQuickInit((EXFORMOBJ *)v8, (struct XDCOBJ *)v9, a2 | 0x80000000);
    v12 = 0;
    v6 = v8[0];
    memset(v11, 0, sizeof(v11));
    if ( v8[0] )
      goto LABEL_6;
    if ( a2 == 772 )
    {
      EXFORMOBJ::vInitPageToDevice((EXFORMOBJ *)v8, (struct XDCOBJ *)v9, (struct MATRIX *)v11);
      v6 = v8[0];
    }
    if ( v6 )
    {
LABEL_6:
      EXFORMOBJ::vGetCoefficient((EXFORMOBJ *)v8, a3);
      v5 = 1;
    }
  }
  if ( v9[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v9);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v10);
  return v5;
}
