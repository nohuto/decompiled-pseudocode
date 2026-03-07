void __fastcall PspSetPagePriorityLimitJobTree(char *Object, int a2)
{
  ExAcquireResourceExclusiveLite((PERESOURCE)(Object + 56), 1u);
  if ( a2 != *((_DWORD *)Object + 270) )
  {
    *((_DWORD *)Object + 270) = a2;
    PspEnumJobsAndProcessesInJobHierarchy(Object, (int)PspSetJobPagePriorityLimitPreCallback, 0, 0, 0LL, 5);
  }
  ExReleaseResourceLite((PERESOURCE)(Object + 56));
}
