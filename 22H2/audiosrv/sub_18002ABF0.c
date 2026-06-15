/*
 * XREFs of sub_18002ABF0 @ 0x18002ABF0
 * Callers:
 *     sub_18002A978 @ 0x18002A978 (sub_18002A978.c)
 * Callees:
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     sub_18006BEC8 @ 0x18006BEC8 (sub_18006BEC8.c)
 *     sub_18006C044 @ 0x18006C044 (sub_18006C044.c)
 */

__int64 __fastcall sub_18002ABF0(DWORD SessionId)
{
  WCHAR v1; // di
  char v2; // bl
  unsigned int v5; // ebx
  _BYTE v6[4]; // [rsp+30h] [rbp-D0h] BYREF
  DWORD pBytesReturned; // [rsp+34h] [rbp-CCh] BYREF
  _BYTE v8[8]; // [rsp+38h] [rbp-C8h] BYREF
  LPWSTR ppBuffer; // [rsp+40h] [rbp-C0h] BYREF
  LPWSTR v10; // [rsp+48h] [rbp-B8h] BYREF
  _DWORD v11[576]; // [rsp+50h] [rbp-B0h] BYREF

  v1 = -1;
  v6[0] = 0;
  v2 = 0;
  if ( !(unsigned __int8)sub_18006BEC8() || !(unsigned __int8)sub_18006C044() )
    return 0;
  if ( SessionId == -1 )
    SessionId = NtCurrentPeb()->SessionId;
  if ( !(unsigned __int8)WinStationIsSessionRemoteable(0LL, SessionId, v6) )
    return (WCHAR)-1;
  if ( (unsigned int)RtlGetActiveConsoleId() != SessionId )
  {
LABEL_11:
    if ( (unsigned int)RtlGetCurrentServiceSessionId() == SessionId )
      return 0;
    if ( !v2 )
    {
      if ( !WTSQuerySessionInformationW(0LL, SessionId, WTSClientProtocolType, &ppBuffer, &pBytesReturned) )
        return (WCHAR)-1;
      v1 = *ppBuffer;
      WTSFreeMemory(ppBuffer);
    }
    if ( WTSQuerySessionInformationW(0LL, SessionId, WTSConnectState, &v10, &pBytesReturned) )
    {
      v5 = *(_DWORD *)v10;
      WTSFreeMemory(v10);
      if ( v5 <= 2 )
      {
        if ( !v1 )
          return v1;
        if ( (unsigned __int8)WinStationQueryInformationW(0LL, SessionId, 6LL, v11, 2296, v8) )
        {
          if ( (v11[0] & 0x100) == 0 )
            return v1;
          return 0;
        }
      }
    }
    return (WCHAR)-1;
  }
  if ( v6[0] )
  {
    v2 = 1;
    v1 = 2;
    goto LABEL_11;
  }
  return 0;
}
