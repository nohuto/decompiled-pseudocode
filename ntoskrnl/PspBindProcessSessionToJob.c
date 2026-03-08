/*
 * XREFs of PspBindProcessSessionToJob @ 0x140700678
 * Callers:
 *     NtSetInformationJobObject @ 0x1406FC3C0 (NtSetInformationJobObject.c)
 *     PspEstablishJobHierarchy @ 0x1407001E0 (PspEstablishJobHierarchy.c)
 * Callees:
 *     MmGetSessionId @ 0x140299600 (MmGetSessionId.c)
 *     PspConvertJobToMixed @ 0x1409AF1C4 (PspConvertJobToMixed.c)
 */

__int64 __fastcall PspBindProcessSessionToJob(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  signed __int32 SessionId; // r9d
  int v4; // r10d
  signed __int32 v5; // eax

  SessionId = MmGetSessionId(a2);
  if ( v4 == SessionId )
    return 0LL;
  if ( v4 == -1
    && ((v5 = _InterlockedCompareExchange((volatile signed __int32 *)(v2 + 576), SessionId, -1), v5 == -1)
     || v5 == SessionId) )
  {
    return 0LL;
  }
  else
  {
    return PspConvertJobToMixed(v2, 0LL);
  }
}
