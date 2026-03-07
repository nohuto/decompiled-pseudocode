__int64 __fastcall NtGdiFillPath(HDC a1)
{
  __int64 v1; // rcx
  unsigned int v2; // eax
  ULONG v3; // ecx
  __int64 v5; // r8
  __int64 v6; // rdx
  DC *v7; // rcx
  unsigned int v8; // eax
  DC *v9; // rcx
  unsigned int v10; // ebx
  DC *v11[2]; // [rsp+30h] [rbp-39h] BYREF
  PATHOBJ ppo; // [rsp+40h] [rbp-29h] BYREF
  __int64 v13; // [rsp+48h] [rbp-21h]

  DCOBJ::DCOBJ((DCOBJ *)v11, a1);
  if ( !v11[0] )
    goto LABEL_7;
  if ( *((_WORD *)v11[0] + 6) != 1 )
  {
    v1 = *((_QWORD *)v11[0] + 6);
    if ( v1 )
      v2 = *(_DWORD *)(v1 + 40);
    else
      v2 = 0;
    TraceLoggingWriteUnsupportedGdiUsage(18, v2, *((unsigned __int16 *)v11[0] + 6), 0LL, 0LL);
    goto LABEL_7;
  }
  if ( (*((_DWORD *)v11[0] + 9) & 0x10000) != 0 )
  {
LABEL_7:
    v3 = 87;
LABEL_8:
    EngSetLastError(v3);
LABEL_9:
    DCOBJ::~DCOBJ((DCOBJ *)v11);
    return 0LL;
  }
  if ( !(unsigned int)DC::bInactive(v11[0]) )
  {
    v3 = 1003;
    goto LABEL_8;
  }
  v6 = *(_QWORD *)(v5 + 976);
  if ( (*(_DWORD *)(v6 + 152) & 0x1000) != 0 )
    GreDCSelectBrush(v5, *(_QWORD *)(v6 + 160));
  XEPATHOBJ::XEPATHOBJ((XEPATHOBJ *)&ppo, v11);
  if ( !v13 )
  {
    EngSetLastError(8u);
    v7 = v11[0];
    *((_DWORD *)v11[0] + 62) &= ~1u;
    DC::hpath(v7, 0LL);
    XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)&ppo);
    goto LABEL_9;
  }
  EPATHOBJ::vCloseAllFigures((EPATHOBJ *)&ppo);
  v8 = EPATHOBJ::bStrokeAndOrFill(&ppo, (POINTL **)v11, 0LL, 0LL, 2u);
  v9 = v11[0];
  v10 = v8;
  *((_DWORD *)v11[0] + 62) &= ~1u;
  DC::hpath(v9, 0LL);
  XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)&ppo);
  if ( v11[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v11);
  return v10;
}
