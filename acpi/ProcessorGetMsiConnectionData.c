/*
 * XREFs of ProcessorGetMsiConnectionData @ 0x1C009ACE4
 * Callers:
 *     MsiGetTargetInfo @ 0x1C00A0698 (MsiGetTargetInfo.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00019D0 (__security_check_cookie.c)
 *     ProcessorGetDestinationMode @ 0x1C009ABB8 (ProcessorGetDestinationMode.c)
 */

__int64 __fastcall ProcessorGetMsiConnectionData(__int64 a1)
{
  unsigned int v1; // ebx
  __int128 *v2; // r9
  __int128 v3; // xmm0
  int v4; // r10d
  __int64 v5; // r11
  int MessageRoutingInfo; // eax
  int v8; // [rsp+20h] [rbp-58h] BYREF
  __int128 v9; // [rsp+28h] [rbp-50h] BYREF
  __int128 v10; // [rsp+38h] [rbp-40h]
  __int128 v11; // [rsp+48h] [rbp-30h]
  int v12; // [rsp+58h] [rbp-20h]

  v12 = 0;
  v1 = 0;
  v8 = 0;
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  ProcessorGetDestinationMode(a1, &v8);
  v3 = *v2;
  DWORD2(v9) = v4;
  v10 = v3;
  LODWORD(v11) = v8;
  MessageRoutingInfo = HalGetMessageRoutingInfo(&v9, v5);
  if ( MessageRoutingInfo < 0 )
    return (unsigned int)MessageRoutingInfo;
  return v1;
}
