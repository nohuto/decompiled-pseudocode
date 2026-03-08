/*
 * XREFs of ExpVerifyWindowsOsOptions @ 0x1409FB97C
 * Callers:
 *     NtEnumerateBootEntries @ 0x14083E4F0 (NtEnumerateBootEntries.c)
 *     ExpSetBootEntry @ 0x1409FA390 (ExpSetBootEntry.c)
 * Callees:
 *     ExpSafeWcslen @ 0x14083EB44 (ExpSafeWcslen.c)
 *     ExpVerifyFilePath @ 0x14083EE50 (ExpVerifyFilePath.c)
 */

__int64 __fastcall ExpVerifyWindowsOsOptions(__int64 a1, unsigned int a2)
{
  unsigned __int64 v2; // rdx
  _DWORD *v3; // r8
  unsigned int v4; // r9d
  __int64 v5; // r10
  unsigned int v6; // eax
  __int64 v7; // rcx
  _DWORD *v8; // rcx

  v5 = (unsigned int)ExpSafeWcslen((_WORD *)(a1 + 20), a1 + a2);
  v6 = v3[3];
  if ( v6 < 0x14 )
    return 3221225485LL;
  if ( v6 > v4 )
    return 3221225485LL;
  if ( v3[2] != 1 )
    return 3221225485LL;
  v7 = (unsigned int)v3[4];
  if ( (v7 & 3) != 0 )
    return 3221225485LL;
  if ( (unsigned int)v7 >= v4 )
    return 3221225485LL;
  if ( (_DWORD)v5 == -1 )
    return 3221225485LL;
  v8 = (_DWORD *)((char *)v3 + v7);
  if ( (_DWORD *)((char *)v3 + 2 * v5 + 22) > v8 )
    return 3221225485LL;
  else
    return ExpVerifyFilePath(v8, v2);
}
