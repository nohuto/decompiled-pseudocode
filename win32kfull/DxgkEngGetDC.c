HDC __fastcall DxgkEngGetDC(__int64 a1, _QWORD *a2)
{
  HDC DC; // rax
  HDC v4; // rdi
  __int64 *v6[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( a2 )
    *a2 = 0LL;
  DC = (HDC)NtUserGetDC();
  v4 = DC;
  if ( !DC )
    return 0LL;
  if ( a2 )
  {
    MDCOBJA::MDCOBJA((MDCOBJA *)v6, DC);
    if ( v6[0] )
    {
      *a2 = GreCreateDisplayDC(v6[0][6], 0LL);
      XDCOBJ::vAltUnlockFast(v6);
    }
    if ( !*a2 )
    {
      UserReleaseDC(v4);
      return 0LL;
    }
  }
  return v4;
}
