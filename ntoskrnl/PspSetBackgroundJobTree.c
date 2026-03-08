/*
 * XREFs of PspSetBackgroundJobTree @ 0x140796978
 * Callers:
 *     NtSetInformationJobObject @ 0x1406FC3C0 (NtSetInformationJobObject.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140258DC0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14025D520 (ExReleaseResourceLite.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x1406FB7C8 (PspEnumJobsAndProcessesInJobHierarchy.c)
 */

__int64 __fastcall PspSetBackgroundJobTree(char *Object, char a2)
{
  unsigned int v4; // ebx
  int v5; // eax
  char v7; // [rsp+40h] [rbp+8h] BYREF
  int v8; // [rsp+41h] [rbp+9h]

  v4 = 0;
  v8 = 0;
  ExAcquireResourceExclusiveLite((PERESOURCE)(Object + 56), 1u);
  v5 = *((_DWORD *)Object + 384) & 0x400;
  if ( !a2 )
  {
    if ( v5 )
    {
      _interlockedbittestandreset((volatile signed __int32 *)Object + 384, 0xAu);
      goto LABEL_4;
    }
LABEL_8:
    v4 = -1073741811;
    goto LABEL_5;
  }
  if ( v5 )
    goto LABEL_8;
  _interlockedbittestandset((volatile signed __int32 *)Object + 384, 0xAu);
LABEL_4:
  v7 = a2;
  PspEnumJobsAndProcessesInJobHierarchy(
    Object,
    (int)PspSetJobBackgroundCountCallback,
    0,
    (int)PspSetProcessBackgroundCountCallback,
    (__int64)&v7,
    5);
LABEL_5:
  ExReleaseResourceLite((PERESOURCE)(Object + 56));
  return v4;
}
