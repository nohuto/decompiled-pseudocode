/*
 * XREFs of PpmIdleInitializeConcurrency @ 0x1408258E4
 * Callers:
 *     PpmParkRegisterParking @ 0x14038D880 (PpmParkRegisterParking.c)
 * Callees:
 *     KeCountSetBitsAffinityEx @ 0x140237550 (KeCountSetBitsAffinityEx.c)
 *     KeRevertToUserGroupAffinityThread @ 0x1402AA110 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x1402ABED0 (KeSetSystemGroupAffinityThread.c)
 *     KeFirstGroupAffinityEx @ 0x1402AEC40 (KeFirstGroupAffinityEx.c)
 *     PpmQueryTime @ 0x14038D868 (PpmQueryTime.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

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
