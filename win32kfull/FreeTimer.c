/*
 * XREFs of FreeTimer @ 0x1C003A800
 * Callers:
 *     ?InitiateWin32kCleanup@@YAHXZ @ 0x1C0078068 (-InitiateWin32kCleanup@@YAHXZ.c)
 *     DestroyThreadsTimers @ 0x1C00C6480 (DestroyThreadsTimers.c)
 *     DestroyWindowsTimers @ 0x1C00DB1CC (DestroyWindowsTimers.c)
 *     FindTimer @ 0x1C00DEEDC (FindTimer.c)
 * Callees:
 *     ??0IdentifyPrimaryDestroyTarget@@QEAA@PEAX@Z @ 0x1C003AA08 (--0IdentifyPrimaryDestroyTarget@@QEAA@PEAX@Z.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C003C2A4 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C009DC7C (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ?DecTimerCount@@YAXPEAUtagTIMER@@@Z @ 0x1C00DDC4C (-DecTimerCount@@YAXPEAUtagTIMER@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall FreeTimer(void ***a1)
{
  char **v2; // rdx
  void **v3; // rcx
  char **v4; // rdx
  void **v5; // rax
  char v6; // [rsp+38h] [rbp+10h] BYREF
  char v7; // [rsp+40h] [rbp+18h] BYREF

  IdentifyPrimaryDestroyTarget::IdentifyPrimaryDestroyTarget((IdentifyPrimaryDestroyTarget *)&v6, a1);
  if ( (unsigned int)HMMarkObjectDestroy(a1) )
  {
    AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v7);
    if ( ((_DWORD)a1[6] & 1) != 0 )
      DecTimerCount((struct tagTIMER *)a1);
    v2 = (char **)a1[9];
    if ( v2[1] != (char *)(a1 + 9)
      || (v3 = a1[10], *v3 != a1 + 9)
      || (*v3 = v2, v2[1] = (char *)v3, v4 = (char **)a1[14], v4[1] != (char *)(a1 + 14))
      || (v5 = a1[15], *v5 != a1 + 14) )
    {
      __fastfail(3u);
    }
    *v5 = v4;
    v4[1] = (char *)v5;
    if ( !a1[11] )
      _bittestandreset(gTimerId, *((_DWORD *)a1 + 24) - 256);
    EtwTraceKillTimer(a1);
    HMAssignmentUnlock(a1 + 11);
    HMFreeObject(a1);
    AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v7);
  }
  if ( v6 )
    gphePrimaryDestroyTarget = 0LL;
}
