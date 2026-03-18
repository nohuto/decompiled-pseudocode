/*
 * XREFs of ?GrePolyBezierInternal@@YAHPEAUHDC__@@PEAUtagPOINT@@K@Z @ 0x1C029E444
 * Callers:
 *     GrePolyBezier @ 0x1C029ED10 (GrePolyBezier.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0041DDC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00E47F8 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C0134298 (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1C0137840 (--1XEPATHOBJ@@QEAA@XZ.c)
 *     ??0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C0137C34 (--0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C015D384 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C015DA34 (--1MDCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GrePolyBezierInternal(HDC a1, struct _POINTL *a2, unsigned int a3)
{
  POINTL *v5; // rcx
  unsigned int v6; // ebx
  POINTL v7; // rdx
  int v8; // esi
  ULONG v9; // ecx
  struct _XFORMOBJ v11; // [rsp+30h] [rbp-D0h] BYREF
  POINTL *v12[2]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v13[32]; // [rsp+50h] [rbp-B0h] BYREF
  PATHOBJ ppo; // [rsp+70h] [rbp-90h] BYREF
  __int64 v15; // [rsp+78h] [rbp-88h]

  DCOBJ::DCOBJ((DCOBJ *)v12, a1);
  v5 = v12[0];
  v6 = 0;
  if ( !v12[0] || (v12[0][4].y & 0x10000) != 0 )
  {
    v9 = 6;
    goto LABEL_19;
  }
  if ( a3 < 4 || a3 % 3 != 1 )
  {
    v9 = 87;
LABEL_19:
    EngSetLastError(v9);
    goto LABEL_20;
  }
  v7 = v12[0][122];
  v8 = *(_DWORD *)(*(_QWORD *)&v7 + 152LL);
  if ( (v8 & 0x1000) != 0 )
  {
    GreDCSelectBrush(v12[0], *(_QWORD *)(*(_QWORD *)&v7 + 160LL));
    v5 = v12[0];
  }
  if ( (v8 & 0x2000) != 0 )
    GreDCSelectPen(v5, *(_QWORD *)(*(_QWORD *)&v5[122] + 168LL));
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v11, (struct XDCOBJ *)v12, 516);
  PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)&ppo, (DC **)v12, 1);
  if ( v15 )
  {
    if ( EPATHOBJ::bMoveTo((EPATHOBJ *)&ppo, (struct EXFORMOBJ *)&v11, a2)
      && EPATHOBJ::bPolyBezierTo((EPATHOBJ *)&ppo, (struct EXFORMOBJ *)&v11, a2 + 1, a3 - 1)
      && ((v12[0][31].x & 1) != 0
       || (unsigned int)EPATHOBJ::bStrokeAndOrFill(&ppo, v12, (LINEATTRS *)&v12[0][26], &v11, 1u)) )
    {
      v6 = 1;
    }
  }
  else
  {
    EngSetLastError(8u);
  }
  XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)&ppo);
LABEL_20:
  MDCOBJ::~MDCOBJ((MDCOBJ *)v12);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v13);
  return v6;
}
