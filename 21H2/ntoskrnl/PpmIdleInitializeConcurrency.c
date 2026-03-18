/*
 * XREFs of PpmIdleInitializeConcurrency @ 0x140849A30
 * Callers:
 *     PpmParkRegisterParking @ 0x1403CE6F8 (PpmParkRegisterParking.c)
 * Callees:
 *     KeCountSetBitsAffinityEx @ 0x1402FFAC0 (KeCountSetBitsAffinityEx.c)
 *     KeRevertToUserGroupAffinityThread @ 0x14035BE00 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x14035BFE0 (KeSetSystemGroupAffinityThread.c)
 *     KeFirstGroupAffinityEx @ 0x14035C9C0 (KeFirstGroupAffinityEx.c)
 *     PpmQueryTime @ 0x1403CF338 (PpmQueryTime.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall PpmIdleInitializeConcurrency(_WORD *a1, __int64 *a2, __int64 *a3)
{
  int v6; // edi
  unsigned int GroupAffinity; // ebp
  __int64 Pool2; // rbx
  struct _GROUP_AFFINITY Affinity; // [rsp+20h] [rbp-58h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+30h] [rbp-48h] BYREF

  Affinity = 0LL;
  PreviousAffinity = 0LL;
  v6 = KeCountSetBitsAffinityEx(a1);
  GroupAffinity = KeFirstGroupAffinityEx((__int64)&Affinity, a1);
  if ( a3 && (Pool2 = *a3) != 0 && v6 == *(_DWORD *)(Pool2 + 8) )
  {
    *a3 = 0LL;
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
