/*
 * XREFs of NtGdiRoundRect @ 0x1C029F530
 * Callers:
 *     <none>
 * Callees:
 *     ?bRoundRect@@YAHAEAVEPATHOBJ@@AEAVEBOX@@JJ@Z @ 0x1C0015C48 (-bRoundRect@@YAHAEAVEPATHOBJ@@AEAVEBOX@@JJ@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0041DDC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00E47F8 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C0134298 (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     NtGdiRectangle @ 0x1C0136B50 (NtGdiRectangle.c)
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1C0137840 (--1XEPATHOBJ@@QEAA@XZ.c)
 *     ??0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C0137C34 (--0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C015D384 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C015DA34 (--1MDCOBJ@@QEAA@XZ.c)
 *     ??0EBOX@@QEAA@AEAVDCOBJ@@AEAU_RECTL@@PEAU_LINEATTRS@@H@Z @ 0x1C02AEC68 (--0EBOX@@QEAA@AEAVDCOBJ@@AEAU_RECTL@@PEAU_LINEATTRS@@H@Z.c)
 */

__int64 __fastcall NtGdiRoundRect(HDC a1, __int64 a2, __int64 a3, __int64 a4, LONG a5, int a6, int a7)
{
  LONG v7; // r12d
  LONG v8; // r15d
  LONG v9; // edi
  POINTL *v10; // rcx
  POINTL v11; // rdx
  int v12; // ebx
  unsigned int v13; // edi
  unsigned int v14; // ecx
  POINTL v15; // rbx
  POINTL *v17[2]; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v18[32]; // [rsp+40h] [rbp-C0h] BYREF
  struct _XFORMOBJ v19; // [rsp+60h] [rbp-A0h] BYREF
  struct _RECTL v20; // [rsp+70h] [rbp-90h] BYREF
  _DWORD v21[20]; // [rsp+80h] [rbp-80h] BYREF
  PATHOBJ ppo; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v23; // [rsp+D8h] [rbp-28h]

  v7 = a4;
  v8 = a3;
  v9 = a2;
  if ( a6 && a7 )
  {
    DCOBJ::DCOBJ((DCOBJ *)v17, a1);
    v10 = v17[0];
    if ( !v17[0] || (v17[0][4].y & 0x10000) != 0 )
    {
      EngSetLastError(6u);
      v13 = 0;
      goto LABEL_21;
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
    v20.left = v9;
    v20.top = v8;
    v20.right = v7;
    EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v19, (struct XDCOBJ *)v17, 516);
    v13 = 1;
    EBOX::EBOX((EBOX *)v21, (struct DCOBJ *)v17, &v20, (struct _LINEATTRS *)&v17[0][26], 1);
    if ( v21[0] )
      goto LABEL_21;
    PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)&ppo, (DC **)v17, 1);
    if ( v23 )
    {
      if ( (unsigned int)bRoundRect((struct EPATHOBJ *)&ppo, (struct EBOX *)v21) )
      {
        if ( (v17[0][31].x & 1) == 0 )
        {
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
          v13 = v14;
        }
        goto LABEL_19;
      }
    }
    else
    {
      EngSetLastError(8u);
    }
    v13 = 0;
LABEL_19:
    XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)&ppo);
LABEL_21:
    MDCOBJ::~MDCOBJ((MDCOBJ *)v17);
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v18);
    return v13;
  }
  return NtGdiRectangle(a1, a2, a3, a4, a5);
}
