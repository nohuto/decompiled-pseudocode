__int64 __fastcall NtGdiCloseFigure(HDC a1)
{
  ULONG v1; // ecx
  DC *v3[2]; // [rsp+20h] [rbp-39h] BYREF
  _BYTE v4[8]; // [rsp+30h] [rbp-29h] BYREF
  __int64 v5; // [rsp+38h] [rbp-21h]

  DCOBJ::DCOBJ((DCOBJ *)v3, a1);
  if ( !v3[0] )
  {
    v1 = 87;
LABEL_3:
    EngSetLastError(v1);
LABEL_12:
    DCOBJ::~DCOBJ((DCOBJ *)v3);
    return 0LL;
  }
  if ( (*((_DWORD *)v3[0] + 62) & 1) == 0 )
  {
    v1 = 1003;
    goto LABEL_3;
  }
  XEPATHOBJ::XEPATHOBJ((XEPATHOBJ *)v4, v3);
  if ( !v5 || !EPATHOBJ::bCloseFigure((EPATHOBJ *)v4) )
  {
    EngSetLastError(8u);
    XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)v4);
    goto LABEL_12;
  }
  XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)v4);
  if ( v3[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v3);
  return 1LL;
}
