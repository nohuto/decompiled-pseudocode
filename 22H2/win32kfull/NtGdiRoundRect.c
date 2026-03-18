/*
 * XREFs of NtGdiRoundRect @ 0x1C02AD7B0
 * Callers:
 *     <none>
 * Callees:
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0099E60 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C011B310 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C011BFF0 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C011C01C (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013E000 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1C015A6C4 (--1XEPATHOBJ@@QEAA@XZ.c)
 *     ??0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C0284824 (--0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEBU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C0285B9C (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEBU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     NtGdiRectangle @ 0x1C02AD690 (NtGdiRectangle.c)
 *     ??0EBOX@@QEAA@AEAVDCOBJ@@AEAU_RECTL@@PEAU_LINEATTRS@@H@Z @ 0x1C02C5058 (--0EBOX@@QEAA@AEAVDCOBJ@@AEAU_RECTL@@PEAU_LINEATTRS@@H@Z.c)
 *     ?bRoundRect@@YAHAEAVEPATHOBJ@@AEAVEBOX@@JJ@Z @ 0x1C02C5E04 (-bRoundRect@@YAHAEAVEPATHOBJ@@AEAVEBOX@@JJ@Z.c)
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
  _BYTE v18[32]; // [rsp+40h] [rbp-C0h] BYREF
  struct _XFORMOBJ v19; // [rsp+60h] [rbp-A0h] BYREF
  struct _RECTL v20; // [rsp+70h] [rbp-90h] BYREF
  _DWORD v21[20]; // [rsp+80h] [rbp-80h] BYREF
  PATHOBJ ppo; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v23; // [rsp+D8h] [rbp-28h]

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
  v20.bottom = a5;
  v20.left = a2;
  v20.top = a3;
  v20.right = a4;
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v19, (struct XDCOBJ *)v17, 516);
  v13 = 1;
  EBOX::EBOX((EBOX *)v21, (struct DCOBJ *)v17, &v20, (struct _LINEATTRS *)&v17[0][26], 1);
  if ( v21[0] )
    goto LABEL_24;
  PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)&ppo, (DC **)v17, 1);
  if ( !v23 )
  {
    EngSetLastError(8u);
LABEL_12:
    XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)&ppo);
LABEL_23:
    v13 = 0;
    goto LABEL_24;
  }
  if ( !(unsigned int)bRoundRect((struct EPATHOBJ *)&ppo, (struct EBOX *)v21, a6, a7) )
    goto LABEL_12;
  if ( (v17[0][31].x & 1) != 0 )
  {
    XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)&ppo);
LABEL_24:
    DCOBJ::~DCOBJ((DCOBJ *)v17);
    return v13;
  }
  if ( v21[1] )
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
    v14 = EPATHOBJ::bStrokeAndOrFill(&ppo, v17, (LINEATTRS *)&v17[0][26], &v19, 3u);
  }
  XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)&ppo);
  if ( v17[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v17);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v18);
  return v14;
}
