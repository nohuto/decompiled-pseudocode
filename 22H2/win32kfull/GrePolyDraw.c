/*
 * XREFs of GrePolyDraw @ 0x1C029FF08
 * Callers:
 *     NtGdiPolyDraw @ 0x1C02AF4D0 (NtGdiPolyDraw.c)
 * Callees:
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C00B2890 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00B2938 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00FD8F4 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ??0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C0144B70 (--0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ?ptfxGetCurrent@EPATHOBJ@@QEBA?AU_POINTFIX@@XZ @ 0x1C0145870 (-ptfxGetCurrent@EPATHOBJ@@QEBA-AU_POINTFIX@@XZ.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C01468E4 (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     ??1PATHSTACKOBJ@@QEAA@XZ @ 0x1C016AEC4 (--1PATHSTACKOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GrePolyDraw(HDC a1, struct _POINTL *a2, char *a3, unsigned int a4)
{
  __int64 v4; // r15
  POINTL *v7; // rcx
  unsigned int v8; // esi
  POINTL v9; // rdx
  int v10; // edi
  unsigned int v11; // edi
  ULONG v12; // ecx
  char *v13; // r15
  char v14; // al
  signed __int64 v15; // r13
  struct _POINTFIX Current; // rax
  POINTL *v17; // rdx
  char *v19; // [rsp+50h] [rbp-358h]
  struct _XFORMOBJ v20; // [rsp+58h] [rbp-350h] BYREF
  POINTL *v21[6]; // [rsp+68h] [rbp-340h] BYREF
  __int64 v22; // [rsp+98h] [rbp-310h] BYREF
  PATHOBJ ppo; // [rsp+A0h] [rbp-308h] BYREF
  __int64 v24; // [rsp+A8h] [rbp-300h]

  v4 = a4;
  DCOBJ::DCOBJ((DCOBJ *)v21, a1);
  v7 = v21[0];
  v8 = 0;
  if ( !v21[0] || (v21[0][4].y & 0x10000) != 0 )
  {
    EngSetLastError(6u);
    DCOBJ::~DCOBJ((DCOBJ *)v21);
    return 0LL;
  }
  v9 = v21[0][122];
  v10 = *(_DWORD *)(*(_QWORD *)&v9 + 152LL);
  if ( (v10 & 0x1000) != 0 )
  {
    GreDCSelectBrush(v21[0], *(_QWORD *)(*(_QWORD *)&v9 + 160LL));
    v7 = v21[0];
  }
  if ( (v10 & 0x2000) != 0 )
    GreDCSelectPen(v7, *(_QWORD *)(*(_QWORD *)&v7[122] + 168LL));
  if ( !(_DWORD)v4 )
  {
    v11 = 1;
LABEL_44:
    DCOBJ::~DCOBJ((DCOBJ *)v21);
    return v11;
  }
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v20, (struct XDCOBJ *)v21, 516);
  PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)&ppo, (DC **)v21, 1);
  if ( !v24 )
  {
    v12 = 8;
LABEL_11:
    EngSetLastError(v12);
LABEL_43:
    PATHSTACKOBJ::~PATHSTACKOBJ((PATHSTACKOBJ *)&ppo);
    v11 = 0;
    goto LABEL_44;
  }
  v13 = &a3[v4];
  while ( a3 < v13 )
  {
    v19 = a3;
    v14 = *a3++;
    switch ( v14 )
    {
      case 2:
        while ( a3 < v13 )
        {
          if ( *a3 != 2 )
          {
            if ( a3 < v13 && (*a3 & 0xFE) == 2 )
              ++a3;
            break;
          }
          ++a3;
        }
LABEL_38:
        if ( !EPATHOBJ::bPolyLineTo((EPATHOBJ *)&ppo, (struct EXFORMOBJ *)&v20, a2, (_DWORD)a3 - (_DWORD)v19) )
          goto LABEL_43;
        a2 += a3 - v19;
        if ( (*(a3 - 1) & 1) != 0 )
          EPATHOBJ::bCloseFigure((EPATHOBJ *)&ppo);
        break;
      case 3:
        goto LABEL_38;
      case 4:
        while ( a3 < v13 )
        {
          if ( *a3 != 4 )
          {
            if ( a3 < v13 && (*a3 & 0xFE) == 4 )
              ++a3;
            break;
          }
          ++a3;
        }
        v15 = a3 - v19;
        if ( a3 - v19 != 3 * ((a3 - v19) / 3uLL) )
        {
LABEL_27:
          v12 = 87;
          goto LABEL_11;
        }
        if ( !EPATHOBJ::bPolyBezierTo((EPATHOBJ *)&ppo, (struct EXFORMOBJ *)&v20, a2, v15) )
          goto LABEL_43;
        a2 += v15;
        if ( (*(a3 - 1) & 1) != 0 )
          EPATHOBJ::bCloseFigure((EPATHOBJ *)&ppo);
        break;
      case 6:
        if ( !EPATHOBJ::bMoveTo((EPATHOBJ *)&ppo, (struct EXFORMOBJ *)&v20, a2) )
          goto LABEL_43;
        ++a2;
        break;
      default:
        goto LABEL_27;
    }
  }
  Current = EPATHOBJ::ptfxGetCurrent((EPATHOBJ *)&ppo, &v22);
  v17 = v21[0];
  *(_DWORD *)(*(_QWORD *)&v21[0][122] + 152LL) &= 0xFFFFFCFF;
  *(_DWORD *)(*(_QWORD *)&v17[122] + 216LL) = a2[-1].x;
  *(_DWORD *)(*(_QWORD *)&v17[122] + 220LL) = a2[-1].y;
  *(_DWORD *)(*(_QWORD *)&v17[122] + 8LL) = *(_DWORD *)Current.x;
  *(_DWORD *)(*(_QWORD *)&v17[122] + 12LL) = *(_DWORD *)(*(_QWORD *)&Current + 4LL);
  if ( (v21[0][31].x & 1) != 0
    || (unsigned int)EPATHOBJ::bStrokeAndOrFill(&ppo, v21, (LINEATTRS *)&v21[0][26], &v20, 1u) )
  {
    v8 = 1;
  }
  PATHSTACKOBJ::~PATHSTACKOBJ((PATHSTACKOBJ *)&ppo);
  DCOBJ::~DCOBJ((DCOBJ *)v21);
  return v8;
}
