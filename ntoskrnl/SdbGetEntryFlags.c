/*
 * XREFs of SdbGetEntryFlags @ 0x14084BDEC
 * Callers:
 *     SdbpGetExeEntryFlags @ 0x14084BD1C (SdbpGetExeEntryFlags.c)
 *     SdbReadEntryInformation @ 0x140A4C714 (SdbReadEntryInformation.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     AslLogCallPrintf @ 0x14079CA00 (AslLogCallPrintf.c)
 *     SdbpQueryAppCompatFlagsByExeID @ 0x14084BE9C (SdbpQueryAppCompatFlagsByExeID.c)
 *     AslGuidToString @ 0x14084C0B4 (AslGuidToString.c)
 */

__int64 __fastcall SdbGetEntryFlags(__int64 a1, _DWORD *a2)
{
  __int64 v3; // rcx
  __int64 v4; // rcx
  _DWORD v6[4]; // [rsp+30h] [rbp-78h] BYREF
  _BYTE v7[80]; // [rsp+40h] [rbp-68h] BYREF

  *a2 = 0;
  if ( (int)AslGuidToString(v7, 39LL, a1) < 0 )
  {
    AslLogCallPrintf(1LL);
  }
  else
  {
    v6[0] = 0;
    if ( (int)SdbpQueryAppCompatFlagsByExeID(v3, v7, 1LL, v6) >= 0 )
      *a2 = v6[0];
    v6[0] = 0;
    if ( (int)SdbpQueryAppCompatFlagsByExeID(v4, v7, 0LL, v6) >= 0 )
      *a2 |= v6[0];
    *a2 &= 0xFFFu;
  }
  return 1LL;
}
