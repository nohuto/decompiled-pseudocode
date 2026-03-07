void __fastcall PspSetIoPriorityLimitJobTree(char *Object, int a2)
{
  __int64 v4; // [rsp+48h] [rbp+10h] BYREF

  LODWORD(v4) = 0;
  ExAcquireResourceExclusiveLite((PERESOURCE)(Object + 56), 1u);
  if ( a2 != *((_DWORD *)Object + 268) )
  {
    *((_DWORD *)Object + 268) = a2;
    PspEnumJobsAndProcessesInJobHierarchy(
      Object,
      (int)PspSetJobIoPriorityLimitPreCallback,
      0,
      (int)PspSetProcessIoPriorityLimitCallback,
      (__int64)&v4,
      5);
  }
  ExReleaseResourceLite((PERESOURCE)(Object + 56));
}
