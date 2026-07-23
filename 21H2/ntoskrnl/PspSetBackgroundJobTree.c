/*
 * XREFs of PspSetBackgroundJobTree @ 0x14061B560
 * Callers:
 *     NtSetInformationJobObject @ 0x14067DE60 (NtSetInformationJobObject.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x140356140 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1403568F0 (ExAcquireResourceExclusiveLite.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x140681C50 (PspEnumJobsAndProcessesInJobHierarchy.c)
 */

__int64 __fastcall PspSetBackgroundJobTree(char *Object, char a2)
{
  struct _ERESOURCE *v2; // rdi
  int v4; // eax
  __int64 v6; // [rsp+48h] [rbp+10h] BYREF

  LOBYTE(v6) = a2;
  v2 = (struct _ERESOURCE *)(Object + 56);
  ExAcquireResourceExclusiveLite((PERESOURCE)(Object + 56), 1u);
  v4 = *((_DWORD *)Object + 330) & 0x400;
  if ( (_BYTE)v6 )
  {
    if ( !v4 )
      goto LABEL_3;
LABEL_11:
    ExReleaseResourceLite(v2);
    return 3221225485LL;
  }
  if ( !v4 )
    goto LABEL_11;
LABEL_3:
  if ( (_BYTE)v6 )
    _interlockedbittestandset((volatile signed __int32 *)Object + 330, 0xAu);
  else
    _interlockedbittestandreset((volatile signed __int32 *)Object + 330, 0xAu);
  PspEnumJobsAndProcessesInJobHierarchy(Object, (__int64)&v6, 5);
  ExReleaseResourceLite(v2);
  if ( !(_BYTE)v6 )
    PspEnumJobsAndProcessesInJobHierarchy(Object, 0LL, 0);
  return 0LL;
}
