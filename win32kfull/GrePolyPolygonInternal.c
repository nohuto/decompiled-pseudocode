/*
 * XREFs of GrePolyPolygonInternal @ 0x1C02AE970
 * Callers:
 *     GrePolyPolygon @ 0x1C02AE850 (GrePolyPolygon.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004FFBC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C0050C60 (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00CFF10 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1C014D87C (--1XEPATHOBJ@@QEAA@XZ.c)
 *     ??0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C028711C (--0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEBU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C028848C (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEBU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 */

__int64 __fastcall GrePolyPolygonInternal(HDC a1, __int64 a2, __int64 a3, int a4, int a5)
{
  unsigned int v8; // ebx
  POINTL *v9; // rcx
  POINTL v10; // rdx
  int v11; // edi
  POINTL *v13[2]; // [rsp+30h] [rbp-D0h] BYREF
  struct _XFORMOBJ v14; // [rsp+40h] [rbp-C0h] BYREF
  PATHOBJ ppo; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v16; // [rsp+58h] [rbp-A8h]

  v8 = 1;
  DCOBJ::DCOBJ((DCOBJ *)v13, a1);
  v9 = v13[0];
  if ( !v13[0] || (v13[0][4].y & 0x10000) != 0 )
  {
    EngSetLastError(6u);
    v8 = 0;
    goto LABEL_17;
  }
  v10 = v13[0][122];
  v11 = *(_DWORD *)(*(_QWORD *)&v10 + 152LL);
  if ( (v11 & 0x1000) != 0 )
  {
    GreDCSelectBrush(v13[0], *(_QWORD *)(*(_QWORD *)&v10 + 160LL));
    v9 = v13[0];
  }
  if ( (v11 & 0x2000) != 0 )
  {
    GreDCSelectPen(v9, *(_QWORD *)(*(_QWORD *)&v9[122] + 168LL));
    v9 = v13[0];
  }
  if ( a4 )
  {
    EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v14, (struct XDCOBJ *)v13, 516);
    PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)&ppo, (DC **)v13, 1);
    if ( v16 )
    {
      v8 = bPolyPolygon(&ppo, &v14, a2, a3, a4, a5);
      if ( !v8 )
      {
LABEL_15:
        XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)&ppo);
LABEL_17:
        v9 = v13[0];
        goto LABEL_18;
      }
      ppo.fl |= 0x4000u;
      if ( (v13[0][31].x & 1) != 0
        || (unsigned int)EPATHOBJ::bStrokeAndOrFill(&ppo, v13, (LINEATTRS *)&v13[0][26], &v14, 3u) )
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
LABEL_18:
  if ( v9 )
    XDCOBJ::vUnlockFast((XDCOBJ *)v13);
  return v8;
}
