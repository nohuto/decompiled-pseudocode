__int64 __fastcall NtGdiWidenPath(HDC a1)
{
  ULONG v1; // ecx
  __int64 v2; // rdx
  unsigned int v3; // eax
  ULONG v4; // ecx
  const struct _LINEATTRS *v5; // rbx
  DC *v7[2]; // [rsp+30h] [rbp-49h] BYREF
  struct _XFORMOBJ v8; // [rsp+40h] [rbp-39h] BYREF
  _BYTE v9[8]; // [rsp+50h] [rbp-29h] BYREF
  __int64 v10; // [rsp+58h] [rbp-21h]

  DCOBJ::DCOBJ((DCOBJ *)v7, a1);
  if ( !v7[0] )
  {
    v1 = 87;
LABEL_3:
    EngSetLastError(v1);
LABEL_24:
    DCOBJ::~DCOBJ((DCOBJ *)v7);
    return 0LL;
  }
  if ( !(unsigned int)DC::bInactive(v7[0]) )
  {
    v1 = 1003;
    goto LABEL_3;
  }
  XEPATHOBJ::XEPATHOBJ((XEPATHOBJ *)v9, v7);
  if ( !v10 )
    goto LABEL_22;
  if ( *((_WORD *)v7[0] + 6) > 1u )
  {
    v2 = *((_QWORD *)v7[0] + 6);
    if ( v2 )
      v3 = *(_DWORD *)(v2 + 40);
    else
      v3 = 0;
    TraceLoggingWriteUnsupportedGdiUsage(7, v3, *((unsigned __int16 *)v7[0] + 6), 0LL, 0LL);
    goto LABEL_12;
  }
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v8, (struct XDCOBJ *)v7, 516);
  v5 = (const struct _LINEATTRS *)((char *)v7[0] + 208);
  if ( (*((_DWORD *)v7[0] + 52) & 1) == 0 )
  {
    if ( (*(_DWORD *)(*((_QWORD *)v7[0] + 18) + 40LL) & 0x800) == 0 )
    {
LABEL_12:
      v4 = 1003;
LABEL_23:
      EngSetLastError(v4);
      XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)v9);
      goto LABEL_24;
    }
    v5 = (const struct _LINEATTRS *)&unk_1C032AB58;
  }
  if ( !(unsigned int)EPATHOBJ::bComputeWidenedBounds((EPATHOBJ *)v9, (struct EPATHOBJ *)v9, &v8, v5) )
  {
    v4 = 534;
    goto LABEL_23;
  }
  if ( !EPATHOBJ::bWiden((EPATHOBJ *)v9, (struct EPATHOBJ *)v9, &v8, v5) )
  {
LABEL_22:
    v4 = 8;
    goto LABEL_23;
  }
  EPATHOBJ::vReComputeBounds((EPATHOBJ *)v9);
  XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)v9);
  if ( v7[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v7);
  return 1LL;
}
