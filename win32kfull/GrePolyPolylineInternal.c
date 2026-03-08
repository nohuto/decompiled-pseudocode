/*
 * XREFs of GrePolyPolylineInternal @ 0x1C02AEC60
 * Callers:
 *     GrePolyPolyline @ 0x1C02AEB40 (GrePolyPolyline.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004FFBC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0050C40 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C0050C60 (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00CFF10 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1C014D87C (--1XEPATHOBJ@@QEAA@XZ.c)
 *     ?bMoveTo@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@@Z @ 0x1C014D8B8 (-bMoveTo@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@@Z.c)
 *     ?bPolyLineTo@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@K@Z @ 0x1C014DA72 (-bPolyLineTo@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@K@Z.c)
 *     ??0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C028711C (--0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEBU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C028848C (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEBU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 */

__int64 __fastcall GrePolyPolylineInternal(HDC a1, struct _POINTL *a2, int *a3, unsigned int a4, int a5)
{
  __int64 v6; // rdi
  unsigned int v8; // ebx
  POINTL *v9; // rax
  POINTL v10; // rdx
  int v11; // ebx
  int *v13; // r12
  __int64 v14; // rdi
  ULONG v15; // ecx
  POINTL *v17[2]; // [rsp+30h] [rbp-D0h] BYREF
  struct _XFORMOBJ v18; // [rsp+40h] [rbp-C0h] BYREF
  PATHOBJ ppo; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v20; // [rsp+58h] [rbp-A8h]

  v6 = a4;
  v8 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v17, a1);
  if ( !v17[0] || (v17[0][4].y & 0x10000) != 0 )
  {
    EngSetLastError(6u);
LABEL_24:
    v9 = v17[0];
LABEL_25:
    if ( v9 )
      XDCOBJ::vUnlockFast((XDCOBJ *)v17);
    return v8;
  }
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v18, (struct XDCOBJ *)v17, 516);
  v9 = v17[0];
  v10 = v17[0][122];
  v11 = *(_DWORD *)(*(_QWORD *)&v10 + 152LL);
  if ( (v11 & 0x1000) != 0 )
  {
    GreDCSelectBrush(v17[0], *(_QWORD *)(*(_QWORD *)&v10 + 160LL));
    v9 = v17[0];
  }
  if ( (v11 & 0x2000) != 0 )
  {
    GreDCSelectPen(v9, *(_QWORD *)(*(_QWORD *)&v9[122] + 168LL));
    v9 = v17[0];
  }
  v8 = 1;
  if ( !(_DWORD)v6 )
    goto LABEL_25;
  PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)&ppo, (DC **)v17, 1);
  if ( v20 )
  {
    v13 = &a3[v6];
    do
    {
      v14 = *a3;
      a5 -= v14;
      if ( a5 < 0 || (int)v14 < 2 )
      {
        v15 = 87;
        goto LABEL_21;
      }
      if ( !(unsigned int)EPATHOBJ::bMoveTo((EPATHOBJ *)&ppo, (struct EXFORMOBJ *)&v18, a2)
        || !(unsigned int)EPATHOBJ::bPolyLineTo((EPATHOBJ *)&ppo, (struct EXFORMOBJ *)&v18, a2 + 1, (int)v14 - 1) )
      {
        goto LABEL_22;
      }
      ++a3;
      a2 += v14;
    }
    while ( a3 < v13 );
    if ( (v17[0][31].x & 1) == 0
      && !(unsigned int)EPATHOBJ::bStrokeAndOrFill(&ppo, v17, (LINEATTRS *)&v17[0][26], &v18, 1u) )
    {
      v8 = 0;
    }
    XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)&ppo);
    goto LABEL_24;
  }
  v15 = 8;
LABEL_21:
  EngSetLastError(v15);
LABEL_22:
  XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)&ppo);
  DCOBJ::~DCOBJ((DCOBJ *)v17);
  return 0LL;
}
