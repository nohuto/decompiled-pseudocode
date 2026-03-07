__int64 __fastcall NtGdiEllipse(HDC a1, LONG a2, LONG a3, LONG a4, LONG a5)
{
  POINTL *v8; // rcx
  POINTL v9; // rdx
  LINEATTRS *v10; // rsi
  int v11; // ebx
  unsigned int v12; // edi
  unsigned int v14; // esi
  POINTL v15; // rbx
  POINTL *v16[2]; // [rsp+30h] [rbp-D0h] BYREF
  struct _XFORMOBJ v17[2]; // [rsp+40h] [rbp-C0h] BYREF
  struct _RECTL v18; // [rsp+50h] [rbp-B0h] BYREF
  _DWORD v19[20]; // [rsp+60h] [rbp-A0h] BYREF
  PATHOBJ ppo; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v21; // [rsp+B8h] [rbp-48h]

  DCOBJ::DCOBJ((DCOBJ *)v16, a1);
  if ( !v16[0] || (v16[0][4].y & 0x10000) != 0 )
  {
    EngSetLastError(6u);
    DCOBJ::~DCOBJ((DCOBJ *)v16);
    return 0LL;
  }
  else
  {
    v18.bottom = a5;
    v18.left = a2;
    v18.top = a3;
    v18.right = a4;
    EXFORMOBJ::vQuickInit((EXFORMOBJ *)v17, (struct XDCOBJ *)v16, 516);
    v8 = v16[0];
    v9 = v16[0][122];
    v10 = (LINEATTRS *)&v16[0][26];
    v11 = *(_DWORD *)(*(_QWORD *)&v9 + 152LL);
    if ( (v11 & 0x1000) != 0 )
    {
      GreDCSelectBrush(v16[0], *(_QWORD *)(*(_QWORD *)&v9 + 160LL));
      v8 = v16[0];
    }
    if ( (v11 & 0x2000) != 0 )
      GreDCSelectPen(v8, *(_QWORD *)(*(_QWORD *)&v8[122] + 168LL));
    v12 = 1;
    EBOX::EBOX((EBOX *)v19, (struct DCOBJ *)v16, &v18, v10, 1);
    if ( v19[0] )
      goto LABEL_17;
    PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)&ppo, (DC **)v16, 1);
    if ( !v21 )
    {
      EngSetLastError(8u);
LABEL_10:
      XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)&ppo);
      v12 = 0;
LABEL_17:
      DCOBJ::~DCOBJ((DCOBJ *)v16);
      return v12;
    }
    if ( !(unsigned int)bEllipse((struct EPATHOBJ *)&ppo, (struct EBOX *)v19) )
      goto LABEL_10;
    if ( (*(_DWORD *)(*(_QWORD *)&v17[0].ulReserved + 32LL) & 1) != 0 && ppo.cCurves == 5 )
      ppo.fl |= 2u;
    if ( (v16[0][31].x & 1) != 0 )
    {
      XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)&ppo);
      goto LABEL_17;
    }
    if ( v19[1] )
    {
      v15 = v16[0][17];
      v16[0][17] = v16[0][18];
      v16[0][39].y |= 1u;
      v14 = EPATHOBJ::bStrokeAndOrFill(&ppo, v16, 0LL, 0LL, 2u);
      v16[0][17] = v15;
      v16[0][39].y |= 1u;
    }
    else
    {
      v14 = EPATHOBJ::bStrokeAndOrFill(&ppo, v16, v10, v17, 3u);
    }
    XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)&ppo);
    if ( v16[0] )
      XDCOBJ::vUnlockFast((XDCOBJ *)v16);
    return v14;
  }
}
