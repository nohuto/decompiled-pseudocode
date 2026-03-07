__int64 __fastcall GrePolyBezierInternal(HDC a1, struct _POINTL *a2, unsigned int a3)
{
  POINTL *v5; // rcx
  unsigned int v6; // ebx
  POINTL v7; // rdx
  int v8; // esi
  ULONG v10; // ecx
  POINTL *v11[2]; // [rsp+30h] [rbp-D0h] BYREF
  struct _XFORMOBJ v12; // [rsp+40h] [rbp-C0h] BYREF
  PATHOBJ ppo; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v14; // [rsp+58h] [rbp-A8h]

  DCOBJ::DCOBJ((DCOBJ *)v11, a1);
  v5 = v11[0];
  if ( !v11[0] || (v11[0][4].y & 0x10000) != 0 )
  {
    v10 = 6;
    goto LABEL_22;
  }
  if ( a3 < 4 || (v6 = 1, a3 % 3 != 1) )
  {
    v10 = 87;
LABEL_22:
    EngSetLastError(v10);
    goto LABEL_23;
  }
  v7 = v11[0][122];
  v8 = *(_DWORD *)(*(_QWORD *)&v7 + 152LL);
  if ( (v8 & 0x1000) != 0 )
  {
    GreDCSelectBrush(v11[0], *(_QWORD *)(*(_QWORD *)&v7 + 160LL));
    v5 = v11[0];
  }
  if ( (v8 & 0x2000) != 0 )
    GreDCSelectPen(v5, *(_QWORD *)(*(_QWORD *)&v5[122] + 168LL));
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v12, (struct XDCOBJ *)v11, 516);
  PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)&ppo, (DC **)v11, 1);
  if ( !v14 )
  {
    EngSetLastError(8u);
LABEL_11:
    XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)&ppo);
LABEL_23:
    DCOBJ::~DCOBJ((DCOBJ *)v11);
    return 0LL;
  }
  if ( !(unsigned int)EPATHOBJ::bMoveTo((EPATHOBJ *)&ppo, (struct EXFORMOBJ *)&v12, a2)
    || !(unsigned int)EPATHOBJ::bPolyBezierTo((EPATHOBJ *)&ppo, (struct EXFORMOBJ *)&v12, a2 + 1, a3 - 1) )
  {
    goto LABEL_11;
  }
  if ( (v11[0][31].x & 1) == 0
    && !(unsigned int)EPATHOBJ::bStrokeAndOrFill(&ppo, v11, (LINEATTRS *)&v11[0][26], &v12, 1u) )
  {
    v6 = 0;
  }
  XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)&ppo);
  if ( v11[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v11);
  return v6;
}
