/*
 * XREFs of GrePolyPolylineInternal @ 0x1C0136510
 * Callers:
 *     GrePolyPolyline @ 0x1C01363F0 (GrePolyPolyline.c)
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

__int64 __fastcall GrePolyPolylineInternal(HDC a1, struct _POINTL *a2, int *a3, unsigned int a4, int a5)
{
  __int64 v6; // rsi
  unsigned int v8; // ebx
  POINTL *v9; // rcx
  POINTL v10; // rdx
  int v11; // edi
  int *v13; // r13
  __int64 v14; // rsi
  ULONG v15; // ecx
  struct _XFORMOBJ v17; // [rsp+30h] [rbp-D0h] BYREF
  POINTL *v18[2]; // [rsp+40h] [rbp-C0h] BYREF
  char v19[32]; // [rsp+50h] [rbp-B0h] BYREF
  PATHOBJ ppo; // [rsp+70h] [rbp-90h] BYREF
  __int64 v21; // [rsp+78h] [rbp-88h]

  v6 = a4;
  v8 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v18, a1);
  if ( !v18[0] || (v18[0][4].y & 0x10000) != 0 )
  {
    EngSetLastError(6u);
  }
  else
  {
    EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v17, (struct XDCOBJ *)v18, 516);
    v9 = v18[0];
    v10 = v18[0][122];
    v11 = *(_DWORD *)(*(_QWORD *)&v10 + 152LL);
    if ( (v11 & 0x1000) != 0 )
    {
      GreDCSelectBrush(v18[0], *(_QWORD *)(*(_QWORD *)&v10 + 160LL));
      v9 = v18[0];
    }
    if ( (v11 & 0x2000) != 0 )
      GreDCSelectPen(v9, *(_QWORD *)(*(_QWORD *)&v9[122] + 168LL));
    if ( (_DWORD)v6 )
    {
      PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)&ppo, (struct XDCOBJ *)v18, 1);
      if ( v21 )
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
          if ( !EPATHOBJ::bMoveTo((EPATHOBJ *)&ppo, (struct EXFORMOBJ *)&v17, a2)
            || !EPATHOBJ::bPolyLineTo((EPATHOBJ *)&ppo, (struct EXFORMOBJ *)&v17, a2 + 1, v14 - 1) )
          {
            goto LABEL_18;
          }
          ++a3;
          a2 += v14;
        }
        while ( a3 < v13 );
        if ( (v18[0][31].x & 1) != 0
          || (unsigned int)EPATHOBJ::bStrokeAndOrFill(&ppo, v18, (LINEATTRS *)&v18[0][26], &v17, 1u) )
        {
          v8 = 1;
        }
      }
      else
      {
        v15 = 8;
LABEL_21:
        EngSetLastError(v15);
      }
LABEL_18:
      XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)&ppo);
    }
    else
    {
      v8 = 1;
    }
  }
  MDCOBJ::~MDCOBJ((MDCOBJ *)v18);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v19);
  return v8;
}
