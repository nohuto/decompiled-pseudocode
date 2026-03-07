__int64 __fastcall NtGdiEndPath(HDC a1)
{
  ULONG v1; // ecx
  int v3; // eax
  _QWORD v4[3]; // [rsp+20h] [rbp-18h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v4, a1);
  if ( !v4[0] )
  {
    v1 = 6;
LABEL_3:
    EngSetLastError(v1);
    DCOBJ::~DCOBJ((DCOBJ *)v4);
    return 0LL;
  }
  v3 = *(_DWORD *)(v4[0] + 248LL);
  if ( (v3 & 1) == 0 )
  {
    v1 = 1003;
    goto LABEL_3;
  }
  *(_DWORD *)(v4[0] + 248LL) = v3 & 0xFFFFFFFE;
  if ( v4[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v4);
  return 1LL;
}
