/*
 * XREFs of GrePolyPolygonInternal @ 0x1C0137A70
 * Callers:
 *     GrePolyPolygon @ 0x1C0137950 (GrePolyPolygon.c)
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

__int64 __fastcall GrePolyPolygonInternal(HDC a1, __int64 a2, __int64 a3, int a4, int a5)
{
  unsigned int v8; // ebx
  POINTL *v9; // rcx
  POINTL v10; // rdx
  int v11; // edi
  struct _XFORMOBJ v13; // [rsp+30h] [rbp-D0h] BYREF
  POINTL *v14[2]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v15[32]; // [rsp+50h] [rbp-B0h] BYREF
  PATHOBJ ppo; // [rsp+70h] [rbp-90h] BYREF
  __int64 v17; // [rsp+78h] [rbp-88h]

  v8 = 1;
  DCOBJ::DCOBJ((DCOBJ *)v14, a1);
  v9 = v14[0];
  if ( !v14[0] || (v14[0][4].y & 0x10000) != 0 )
  {
    EngSetLastError(6u);
    v8 = 0;
    goto LABEL_17;
  }
  v10 = v14[0][122];
  v11 = *(_DWORD *)(*(_QWORD *)&v10 + 152LL);
  if ( (v11 & 0x1000) != 0 )
  {
    GreDCSelectBrush(v14[0], *(_QWORD *)(*(_QWORD *)&v10 + 160LL));
    v9 = v14[0];
  }
  if ( (v11 & 0x2000) != 0 )
    GreDCSelectPen(v9, *(_QWORD *)(*(_QWORD *)&v9[122] + 168LL));
  if ( a4 )
  {
    EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v13, (struct XDCOBJ *)v14, 516);
    PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)&ppo, (struct XDCOBJ *)v14, 1);
    if ( v17 )
    {
      v8 = bPolyPolygon(&ppo, &v13, a2, a3, a4, a5);
      if ( !v8 )
      {
LABEL_15:
        XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)&ppo);
        goto LABEL_17;
      }
      ppo.fl |= 0x4000u;
      if ( (v14[0][31].x & 1) != 0
        || (unsigned int)EPATHOBJ::bStrokeAndOrFill(&ppo, v14, (LINEATTRS *)&v14[0][26], &v13, 3u) )
      {
        v8 = 1;
        goto LABEL_15;
      }
    }
    else
    {
      EngSetLastError(8u);
    }
    v8 = 0;
    goto LABEL_15;
  }
LABEL_17:
  MDCOBJ::~MDCOBJ((MDCOBJ *)v14);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v15);
  return v8;
}
