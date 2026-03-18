/*
 * XREFs of ?GrePolyBezierInternal@@YAHPEAUHDC__@@PEAUtagPOINT@@K@Z @ 0x1C02AB188
 * Callers:
 *     GrePolyBezier @ 0x1C02ABFF0 (GrePolyBezier.c)
 * Callees:
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0099E60 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C011B310 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C011BFF0 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C011C01C (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013E000 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1C015A6C4 (--1XEPATHOBJ@@QEAA@XZ.c)
 *     ?bMoveTo@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@@Z @ 0x1C015A700 (-bMoveTo@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@@Z.c)
 *     ?bPolyBezierTo@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@K@Z @ 0x1C015ADD6 (-bPolyBezierTo@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@K@Z.c)
 *     ??0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C0284824 (--0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEBU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C0285B9C (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEBU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 */

__int64 __fastcall GrePolyBezierInternal(HDC a1, struct _POINTL *a2, unsigned int a3)
{
  POINTL *v5; // rcx
  unsigned int v6; // ebx
  POINTL v7; // rdx
  int v8; // esi
  ULONG v10; // ecx
  POINTL *v11[2]; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v12[32]; // [rsp+40h] [rbp-C0h] BYREF
  struct _XFORMOBJ v13; // [rsp+60h] [rbp-A0h] BYREF
  PATHOBJ ppo; // [rsp+70h] [rbp-90h] BYREF
  __int64 v15; // [rsp+78h] [rbp-88h]

  DCOBJ::DCOBJ((DCOBJ *)v11, a1);
  v5 = v11[0];
  if ( !v11[0] || (v11[0][4].y & 0x10000) != 0 )
  {
    v10 = 6;
    goto LABEL_22;
  }
  if ( a3 < 4 || (v6 = 1, a3 % 3 != 1) )
  {
    v10 = 87;
LABEL_22:
    EngSetLastError(v10);
    goto LABEL_23;
  }
  v7 = v11[0][122];
  v8 = *(_DWORD *)(*(_QWORD *)&v7 + 152LL);
  if ( (v8 & 0x1000) != 0 )
  {
    GreDCSelectBrush(v11[0], *(_QWORD *)(*(_QWORD *)&v7 + 160LL));
    v5 = v11[0];
  }
  if ( (v8 & 0x2000) != 0 )
    GreDCSelectPen(v5, *(_QWORD *)(*(_QWORD *)&v5[122] + 168LL));
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v13, (struct XDCOBJ *)v11, 516);
  PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)&ppo, (DC **)v11, 1);
  if ( !v15 )
  {
    EngSetLastError(8u);
LABEL_11:
    XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)&ppo);
LABEL_23:
    DCOBJ::~DCOBJ((DCOBJ *)v11);
    return 0LL;
  }
  if ( !(unsigned int)EPATHOBJ::bMoveTo((EPATHOBJ *)&ppo, (struct EXFORMOBJ *)&v13, a2)
    || !(unsigned int)EPATHOBJ::bPolyBezierTo((EPATHOBJ *)&ppo, (struct EXFORMOBJ *)&v13, a2 + 1, a3 - 1) )
  {
    goto LABEL_11;
  }
  if ( (v11[0][31].x & 1) == 0
    && !(unsigned int)EPATHOBJ::bStrokeAndOrFill(&ppo, v11, (LINEATTRS *)&v11[0][26], &v13, 1u) )
  {
    v6 = 0;
  }
  XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)&ppo);
  if ( v11[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v11);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v12);
  return v6;
}
