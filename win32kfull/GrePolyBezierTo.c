/*
 * XREFs of GrePolyBezierTo @ 0x1C02AE610
 * Callers:
 *     <none>
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004FFBC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0050C40 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C0050C60 (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00CFF10 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1C014D87C (--1XEPATHOBJ@@QEAA@XZ.c)
 *     ?ptfxGetCurrent@EPATHOBJ@@QEBA?AU_POINTFIX@@XZ @ 0x1C014D962 (-ptfxGetCurrent@EPATHOBJ@@QEBA-AU_POINTFIX@@XZ.c)
 *     ?bPolyBezierTo@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@K@Z @ 0x1C014DF96 (-bPolyBezierTo@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@K@Z.c)
 *     ??0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C028711C (--0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEBU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C028848C (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEBU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 */

_BOOL8 __fastcall GrePolyBezierTo(HDC a1, struct _POINTL *a2, unsigned int a3)
{
  POINTL *v5; // rcx
  POINTL v6; // rdx
  int v7; // ebx
  BOOL v8; // ebx
  struct _POINTFIX Current; // rax
  POINTL *v10; // r9
  __int64 v11; // r8
  ULONG v13; // ecx
  POINTL *v14[2]; // [rsp+30h] [rbp-D0h] BYREF
  struct _XFORMOBJ v15; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v16; // [rsp+50h] [rbp-B0h] BYREF
  PATHOBJ ppo; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v18; // [rsp+68h] [rbp-98h]

  DCOBJ::DCOBJ((DCOBJ *)v14, a1);
  v5 = v14[0];
  if ( !v14[0] || (v14[0][4].y & 0x10000) != 0 )
  {
    v13 = 6;
    goto LABEL_20;
  }
  if ( a3 < 3 || a3 != 3 * (a3 / 3) )
  {
    v13 = 87;
LABEL_20:
    EngSetLastError(v13);
    goto LABEL_21;
  }
  v6 = v14[0][122];
  v7 = *(_DWORD *)(*(_QWORD *)&v6 + 152LL);
  if ( (v7 & 0x1000) != 0 )
  {
    GreDCSelectBrush(v14[0], *(_QWORD *)(*(_QWORD *)&v6 + 160LL));
    v5 = v14[0];
  }
  if ( (v7 & 0x2000) != 0 )
    GreDCSelectPen(v5, *(_QWORD *)(*(_QWORD *)&v5[122] + 168LL));
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v15, (struct XDCOBJ *)v14, 516);
  v8 = 1;
  PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)&ppo, (DC **)v14, 1);
  if ( !v18 )
  {
    EngSetLastError(8u);
LABEL_11:
    XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)&ppo);
LABEL_21:
    DCOBJ::~DCOBJ((DCOBJ *)v14);
    return 0LL;
  }
  if ( !(unsigned int)EPATHOBJ::bPolyBezierTo((EPATHOBJ *)&ppo, (struct EXFORMOBJ *)&v15, a2, a3) )
    goto LABEL_11;
  Current = EPATHOBJ::ptfxGetCurrent((EPATHOBJ *)&ppo, &v16);
  v10 = v14[0];
  v11 = a3 - 1;
  *(_DWORD *)(*(_QWORD *)&v14[0][122] + 152LL) &= 0xFFFFFCFF;
  *(_DWORD *)(*(_QWORD *)&v10[122] + 216LL) = a2[v11].x;
  *(_DWORD *)(*(_QWORD *)&v10[122] + 220LL) = a2[v11].y;
  *(_DWORD *)(*(_QWORD *)&v10[122] + 8LL) = *(_DWORD *)Current.x;
  *(_DWORD *)(*(_QWORD *)&v10[122] + 12LL) = *(_DWORD *)(*(_QWORD *)&Current + 4LL);
  if ( (v14[0][31].x & 1) == 0 )
    v8 = EPATHOBJ::bStrokeAndOrFill(&ppo, v14, (LINEATTRS *)&v14[0][26], &v15, 1u) != 0;
  XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)&ppo);
  if ( v14[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v14);
  return v8;
}
