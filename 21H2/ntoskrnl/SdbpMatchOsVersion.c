/*
 * XREFs of SdbpMatchOsVersion @ 0x1408436C0
 * Callers:
 *     SdbpCheckForMatch @ 0x1408433DC (SdbpCheckForMatch.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     RtlGetVersion @ 0x1406C2630 (RtlGetVersion.c)
 *     SdbFindFirstTag @ 0x140792CCC (SdbFindFirstTag.c)
 *     SdbReadQWORDTag @ 0x140842904 (SdbReadQWORDTag.c)
 *     SdbpCheckUptoVersion @ 0x140842D54 (SdbpCheckUptoVersion.c)
 *     SdbpCheckFromVersion @ 0x140A1467C (SdbpCheckFromVersion.c)
 *     SdbpCheckVersion @ 0x140A146C0 (SdbpCheckVersion.c)
 */

_BOOL8 __fastcall SdbpMatchOsVersion(__int64 a1, unsigned int a2)
{
  BOOL v4; // ebx
  unsigned __int64 v5; // rsi
  unsigned int FirstTag; // eax
  unsigned int v7; // eax
  unsigned int v8; // eax
  __int64 QWORDTag; // rax
  __int64 v11; // rax
  unsigned __int64 v12; // rax
  struct _OSVERSIONINFOW VersionInformation; // [rsp+20h] [rbp-148h] BYREF

  v4 = 1;
  memset(&VersionInformation.dwMajorVersion, 0, 0x118uLL);
  VersionInformation.dwOSVersionInfoSize = 284;
  RtlGetVersion(&VersionInformation);
  v5 = (VersionInformation.dwBuildNumber | ((VersionInformation.dwMinorVersion | ((unsigned __int64)VersionInformation.dwMajorVersion << 16)) << 16)) << 16;
  FirstTag = SdbFindFirstTag(a1, a2, 20509);
  if ( FirstTag )
  {
    QWORDTag = SdbReadQWORDTag(a1, FirstTag, 0LL);
    v4 = SdbpCheckVersion(QWORDTag, v5) != 0;
  }
  v7 = SdbFindFirstTag(a1, a2, 20511);
  if ( v7 )
  {
    v11 = SdbReadQWORDTag(a1, v7, 0LL);
    v4 = v4 && (unsigned int)SdbpCheckFromVersion(v11, v5);
  }
  v8 = SdbFindFirstTag(a1, a2, 20510);
  if ( v8 )
  {
    v12 = SdbReadQWORDTag(a1, v8, 0LL);
    return v4 && SdbpCheckUptoVersion(v12, v5);
  }
  return v4;
}
