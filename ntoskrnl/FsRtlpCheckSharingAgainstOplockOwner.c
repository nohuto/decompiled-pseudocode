/*
 * XREFs of FsRtlpCheckSharingAgainstOplockOwner @ 0x14093B324
 * Callers:
 *     FsRtlpOplockBreakByCacheFlags @ 0x14023BD20 (FsRtlpOplockBreakByCacheFlags.c)
 * Callees:
 *     IoCheckLinkShareAccess @ 0x1406B2FA0 (IoCheckLinkShareAccess.c)
 */

__int64 __fastcall FsRtlpCheckSharingAgainstOplockOwner(__int64 a1, _BYTE *a2, int a3, char a4)
{
  bool v5; // zf
  BOOL v6; // eax
  BOOL v7; // eax
  BOOL v8; // eax
  BOOL v9; // eax
  _DWORD v10[10]; // [rsp+30h] [rbp-28h] BYREF

  if ( **(_BYTE **)(a1 + 184) )
    return 3221225485LL;
  v5 = a2[75] == 0;
  v10[1] = a2[74] != 0;
  v6 = !v5;
  v10[0] = 1;
  v5 = a2[76] == 0;
  v10[2] = v6;
  v7 = !v5;
  v5 = a2[77] == 0;
  v10[3] = v7;
  v8 = !v5;
  v5 = a2[78] == 0;
  v10[4] = v8;
  v9 = !v5;
  v5 = a2[79] == 0;
  v10[5] = v9;
  v10[6] = !v5;
  return IoCheckLinkShareAccess(a3, a4, (__int64)a2, v10, 0LL, 2);
}
