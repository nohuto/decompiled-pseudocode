char VslGetSecurePciEnabled()
{
  _DWORD v1[28]; // [rsp+20h] [rbp-88h] BYREF

  memset(v1, 0, 0x68uLL);
  if ( HvlQueryVsmConnection(0LL) && (v1[4] = 1, (int)VslpEnterIumSecureMode(2u, 263, 0, (__int64)v1) >= 0) )
    return v1[4] & 1;
  else
    return 0;
}
