/*
 * XREFs of IpmiHwInitializeContext @ 0x1406751C8
 * Callers:
 *     WheaSelLogInitialize @ 0x140B482FC (WheaSelLogInitialize.c)
 * Callees:
 *     IpmiHwContextInitialized @ 0x1406751AC (IpmiHwContextInitialized.c)
 *     IpmiHwKcsInit @ 0x1406752BC (IpmiHwKcsInit.c)
 *     IpmiHwpReadSpmiConfiguration @ 0x1406753FC (IpmiHwpReadSpmiConfiguration.c)
 *     IpmiLibReadSmbiosRecord38 @ 0x1406754B4 (IpmiLibReadSmbiosRecord38.c)
 *     IpmiLibpParseDeviceInfo @ 0x1406755F0 (IpmiLibpParseDeviceInfo.c)
 */

__int64 IpmiHwInitializeContext()
{
  __int128 *v0; // r8
  __int64 result; // rax
  __int64 v2; // rcx
  __int128 v3; // [rsp+20h] [rbp-28h] BYREF
  __int16 v4; // [rsp+30h] [rbp-18h]

  if ( IpmiHwContextInitialized((__int64)&WheaIpmiContext) )
    return 0LL;
  if ( v0 )
  {
    WheaIpmiContext = *v0;
    xmmword_140C2C7B0 = v0[1];
LABEL_8:
    dword_140C2C7F4 = 7;
    dword_140C2C7E4 = 5000000;
    dword_140C2C7F0 = 5000000;
    dword_140C2C7EC = 1000;
    dword_140C2C7E8 = 30;
    dword_140C2C7E0 = 2000000;
    goto LABEL_9;
  }
  if ( (int)IpmiHwpReadSpmiConfiguration() >= 0 )
    goto LABEL_8;
  v3 = 0LL;
  v4 = 0;
  if ( (int)IpmiLibReadSmbiosRecord38(&v3) >= 0 && (int)IpmiLibpParseDeviceInfo(v2, &v3) >= 0 )
    goto LABEL_8;
LABEL_9:
  if ( DWORD1(WheaIpmiContext) != 1 || IpmiHwContextInitialized((__int64)&WheaIpmiContext) && !BYTE8(xmmword_140C2C7B0) )
    return 3221225659LL;
  result = IpmiHwKcsInit();
  if ( (int)result >= 0 )
    byte_140C2C7F8 = 1;
  return result;
}
