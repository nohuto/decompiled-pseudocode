/*
 * XREFs of HvlNotifyDebugDeviceAvailable @ 0x140542AC0
 * Callers:
 *     PopHiberCheckResume @ 0x140A9FD30 (PopHiberCheckResume.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1402D8270 (VslpEnterIumSecureMode.c)
 *     HvcallInitiateHypercall @ 0x1403C81E0 (HvcallInitiateHypercall.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     HvlpAcquireHypercallPage @ 0x14053E3C0 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x14053F010 (HvlpReleaseHypercallPage.c)
 */

__int64 HvlNotifyDebugDeviceAvailable()
{
  __int16 v0; // bx
  __int128 v2; // [rsp+20h] [rbp-B8h] BYREF
  __int64 v3; // [rsp+30h] [rbp-A8h]
  __int64 v4; // [rsp+38h] [rbp-A0h]
  _BYTE v5[112]; // [rsp+40h] [rbp-98h] BYREF
  __int64 v6; // [rsp+B0h] [rbp-28h] BYREF

  v3 = 0LL;
  LODWORD(v4) = 0;
  v2 = 0LL;
  HvlpAcquireHypercallPage((__int64)&v2, 1, (__int64)&v6, 8LL)->LowPart = 1;
  v0 = HvcallInitiateHypercall(135);
  HvlpReleaseHypercallPage((__int64)&v2);
  if ( v0 )
    return 3221225473LL;
  if ( VslVsmEnabled )
  {
    memset(v5, 0, 0x68uLL);
    VslpEnterIumSecureMode(2u, 266, 0, (__int64)v5);
  }
  return 0LL;
}
