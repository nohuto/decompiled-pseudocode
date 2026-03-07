void __fastcall GreWatchVisRgnChange(HDC a1, int a2)
{
  __int64 *v3; // rax
  __int64 *v4[3]; // [rsp+20h] [rbp-18h] BYREF

  MDCOBJA::MDCOBJA((MDCOBJA *)v4, a1);
  v3 = v4[0];
  if ( v4[0] )
  {
    if ( a2 )
      *((_DWORD *)v4[0] + 9) |= 0x20000u;
    else
      *((_DWORD *)v4[0] + 9) &= ~0x20000u;
    if ( v3 )
      XDCOBJ::vAltUnlockFast(v4);
  }
}
