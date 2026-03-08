/*
 * XREFs of NtGdiRoundRect @ 0x1C02AFD00
 * Callers:
 *     <none>
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004FFBC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0050C40 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C0050C60 (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00CFF10 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1C014D87C (--1XEPATHOBJ@@QEAA@XZ.c)
 *     ??0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C028711C (--0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEBU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C028848C (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEBU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     NtGdiRectangle @ 0x1C02AFBE0 (NtGdiRectangle.c)
 *     ??0EBOX@@QEAA@AEAVDCOBJ@@AEAU_RECTL@@PEAU_LINEATTRS@@H@Z @ 0x1C02C7828 (--0EBOX@@QEAA@AEAVDCOBJ@@AEAU_RECTL@@PEAU_LINEATTRS@@H@Z.c)
 *     ?bRoundRect@@YAHAEAVEPATHOBJ@@AEAVEBOX@@JJ@Z @ 0x1C02C85D4 (-bRoundRect@@YAHAEAVEPATHOBJ@@AEAVEBOX@@JJ@Z.c)
 */

__int64 __fastcall NtGdiRoundRect(Gre::Base *a1, LONG a2, LONG a3, LONG a4, LONG a5, int a6, int a7)
{
  POINTL *v10; // rcx
  POINTL v11; // rdx
  int v12; // ebx
  unsigned int v13; // edi
  unsigned int v14; // esi
  POINTL v15; // rbx
  POINTL *v17[2]; // [rsp+30h] [rbp-D0h] BYREF
  struct _XFORMOBJ v18; // [rsp+40h] [rbp-C0h] BYREF
  struct _RECTL v19; // [rsp+50h] [rbp-B0h] BYREF
  _DWORD v20[20]; // [rsp+60h] [rbp-A0h] BYREF
  PATHOBJ ppo; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v22; // [rsp+B8h] [rbp-48h]

  if ( !a6 || !a7 )
    return NtGdiRectangle(a1, a2, a3, a4, a5);
  DCOBJ::DCOBJ((DCOBJ *)v17, (HDC)a1);
  v10 = v17[0];
  if ( !v17[0] || (v17[0][4].y & 0x10000) != 0 )
  {
    EngSetLastError(6u);
    goto LABEL_23;
  }
  v11 = v17[0][122];
  v12 = *(_DWORD *)(*(_QWORD *)&v11 + 152LL);
  if ( (v12 & 0x1000) != 0 )
  {
    GreDCSelectBrush(v17[0], *(_QWORD *)(*(_QWORD *)&v11 + 160LL));
    v10 = v17[0];
  }
  if ( (v12 & 0x2000) != 0 )
    GreDCSelectPen(v10, *(_QWORD *)(*(_QWORD *)&v10[122] + 168LL));
  v19.bottom = a5;
  v19.left = a2;
  v19.top = a3;
  v19.right = a4;
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v18, (struct XDCOBJ *)v17, 516);
  v13 = 1;
  EBOX::EBOX((EBOX *)v20, (struct DCOBJ *)v17, &v19, (struct _LINEATTRS *)&v17[0][26], 1);
  if ( v20[0] )
    goto LABEL_24;
  PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)&ppo, (DC **)v17, 1);
  if ( !v22 )
  {
    EngSetLastError(8u);
LABEL_12:
    XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)&ppo);
LABEL_23:
    v13 = 0;
    goto LABEL_24;
  }
  if ( !(unsigned int)bRoundRect((struct EPATHOBJ *)&ppo, (struct EBOX *)v20, a6, a7) )
    goto LABEL_12;
  if ( (v17[0][31].x & 1) != 0 )
  {
    XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)&ppo);
LABEL_24:
    DCOBJ::~DCOBJ((DCOBJ *)v17);
    return v13;
  }
  if ( v20[1] )
  {
    v15 = v17[0][17];
    v17[0][17] = v17[0][18];
    v17[0][39].y |= 1u;
    v14 = EPATHOBJ::bStrokeAndOrFill(&ppo, v17, 0LL, 0LL, 2u);
    v17[0][17] = v15;
    v17[0][39].y |= 1u;
  }
  else
  {
    v14 = EPATHOBJ::bStrokeAndOrFill(&ppo, v17, (LINEATTRS *)&v17[0][26], &v18, 3u);
  }
  XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)&ppo);
  if ( v17[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v17);
  return v14;
}
