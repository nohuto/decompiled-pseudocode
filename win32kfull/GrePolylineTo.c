_BOOL8 __fastcall GrePolylineTo(HDC a1, struct _POINTL *a2, unsigned int a3)
{
  POINTL *v5; // rcx
  POINTL v6; // rdx
  int v7; // ebx
  BOOL v8; // ebx
  struct _POINTFIX Current; // rax
  POINTL *v11; // r9
  __int64 v12; // r8
  POINTL *v13[2]; // [rsp+30h] [rbp-D0h] BYREF
  struct _XFORMOBJ v14; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v15; // [rsp+50h] [rbp-B0h] BYREF
  PATHOBJ ppo; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v17; // [rsp+68h] [rbp-98h]

  DCOBJ::DCOBJ((DCOBJ *)v13, a1);
  v5 = v13[0];
  if ( v13[0] && (v13[0][4].y & 0x10000) == 0 )
  {
    v6 = v13[0][122];
    v7 = *(_DWORD *)(*(_QWORD *)&v6 + 152LL);
    if ( (v7 & 0x1000) != 0 )
    {
      GreDCSelectBrush(v13[0], *(_QWORD *)(*(_QWORD *)&v6 + 160LL));
      v5 = v13[0];
    }
    if ( (v7 & 0x2000) != 0 )
      GreDCSelectPen(v5, *(_QWORD *)(*(_QWORD *)&v5[122] + 168LL));
    if ( a3 )
    {
      EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v14, (struct XDCOBJ *)v13, 516);
      v8 = 1;
      PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)&ppo, (DC **)v13, 1);
      if ( v17 )
      {
        if ( (unsigned int)EPATHOBJ::bPolyLineTo((EPATHOBJ *)&ppo, (struct EXFORMOBJ *)&v14, a2, a3) )
        {
          Current = EPATHOBJ::ptfxGetCurrent((EPATHOBJ *)&ppo, &v15);
          v11 = v13[0];
          v12 = a3 - 1;
          *(_DWORD *)(*(_QWORD *)&v13[0][122] + 152LL) &= 0xFFFFFCFF;
          *(_DWORD *)(*(_QWORD *)&v11[122] + 216LL) = a2[v12].x;
          *(_DWORD *)(*(_QWORD *)&v11[122] + 220LL) = a2[v12].y;
          *(_DWORD *)(*(_QWORD *)&v11[122] + 8LL) = *(_DWORD *)Current.x;
          *(_DWORD *)(*(_QWORD *)&v11[122] + 12LL) = *(_DWORD *)(*(_QWORD *)&Current + 4LL);
          if ( (v13[0][31].x & 1) == 0 )
            v8 = EPATHOBJ::bStrokeAndOrFill(&ppo, v13, (LINEATTRS *)&v13[0][26], &v14, 1u) != 0;
          XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)&ppo);
          if ( v13[0] )
            XDCOBJ::vUnlockFast((XDCOBJ *)v13);
          return v8;
        }
      }
      else
      {
        EngSetLastError(8u);
      }
      XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)&ppo);
      v8 = 0;
    }
    else
    {
      v8 = 1;
    }
    DCOBJ::~DCOBJ((DCOBJ *)v13);
    return v8;
  }
  EngSetLastError(6u);
  DCOBJ::~DCOBJ((DCOBJ *)v13);
  return 0LL;
}
