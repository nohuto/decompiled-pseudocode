__int64 __fastcall PpmIdleInitializeConcurrency(unsigned __int16 *a1, __int64 *a2, __int64 a3)
{
  int v6; // esi
  unsigned int GroupAffinity; // ebp
  __int64 Pool2; // rbx
  struct _GROUP_AFFINITY Affinity; // [rsp+20h] [rbp-58h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+30h] [rbp-48h] BYREF

  Affinity = 0LL;
  PreviousAffinity = 0LL;
  v6 = KeCountSetBitsAffinityEx(a1);
  GroupAffinity = KeFirstGroupAffinityEx((__int64)&Affinity, a1);
  if ( a3 && v6 == *(_DWORD *)(a3 + 8) )
  {
    Pool2 = a3;
  }
  else
  {
    KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
    Pool2 = ExAllocatePool2(64LL, (unsigned int)(8 * v6 + 336), 1884115024LL);
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
    if ( Pool2 )
    {
      *(_QWORD *)Pool2 = 0LL;
      *(_DWORD *)(Pool2 + 8) = v6;
      PpmQueryTime();
    }
    GroupAffinity = -1073741670;
  }
  *a2 = Pool2;
  return GroupAffinity;
}
