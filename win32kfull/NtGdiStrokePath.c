__int64 __fastcall NtGdiStrokePath(HDC a1)
{
  __int64 v1; // r8
  ULONG v2; // ecx
  __int64 v3; // rdx
  DC *v4; // rcx
  unsigned int v5; // eax
  DC *v6; // rcx
  unsigned int v7; // ebx
  DC *v9[2]; // [rsp+30h] [rbp-49h] BYREF
  struct _XFORMOBJ v10; // [rsp+40h] [rbp-39h] BYREF
  PATHOBJ ppo; // [rsp+50h] [rbp-29h] BYREF
  __int64 v12; // [rsp+58h] [rbp-21h]

  DCOBJ::DCOBJ((DCOBJ *)v9, a1);
  if ( !v9[0] || (*((_DWORD *)v9[0] + 9) & 0x10000) != 0 )
  {
    v2 = 87;
    goto LABEL_13;
  }
  if ( !(unsigned int)DC::bInactive(v9[0]) )
  {
    v2 = 1003;
LABEL_13:
    EngSetLastError(v2);
    goto LABEL_14;
  }
  v3 = *(_QWORD *)(v1 + 976);
  if ( (*(_DWORD *)(v3 + 152) & 0x2000) != 0 )
    GreDCSelectPen(v1, *(_QWORD *)(v3 + 168));
  XEPATHOBJ::XEPATHOBJ((XEPATHOBJ *)&ppo, v9);
  if ( !v12 )
  {
    EngSetLastError(8u);
    v4 = v9[0];
    *((_DWORD *)v9[0] + 62) &= ~1u;
    DC::hpath(v4, 0LL);
    XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)&ppo);
LABEL_14:
    DCOBJ::~DCOBJ((DCOBJ *)v9);
    return 0LL;
  }
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v10, (struct XDCOBJ *)v9, 516);
  v5 = EPATHOBJ::bStrokeAndOrFill(&ppo, (POINTL **)v9, (LINEATTRS *)((char *)v9[0] + 208), &v10, 1u);
  v6 = v9[0];
  v7 = v5;
  *((_DWORD *)v9[0] + 62) &= ~1u;
  DC::hpath(v6, 0LL);
  XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)&ppo);
  if ( v9[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v9);
  return v7;
}
