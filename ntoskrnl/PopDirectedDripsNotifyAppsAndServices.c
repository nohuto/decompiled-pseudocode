/*
 * XREFs of PopDirectedDripsNotifyAppsAndServices @ 0x1409809F4
 * Callers:
 *     PopDirectedDripsEngage @ 0x140584A94 (PopDirectedDripsEngage.c)
 *     PopDirectedDripsNotify @ 0x140872AF4 (PopDirectedDripsNotify.c)
 * Callees:
 *     MiLockPagableImageSection @ 0x1402252E0 (MiLockPagableImageSection.c)
 *     MmUnlockPagableImageSection @ 0x140225D90 (MmUnlockPagableImageSection.c)
 *     PoBlockConsoleSwitch @ 0x14067F698 (PoBlockConsoleSwitch.c)
 *     PopDispatchStateCallout @ 0x14067F6E8 (PopDispatchStateCallout.c)
 *     PopDirectedDripsSendSuspendResumeNotification @ 0x140980CF0 (PopDirectedDripsSendSuspendResumeNotification.c)
 *     PopDiagTraceDirectedDripsNotifyAppsAndServices @ 0x14098B778 (PopDiagTraceDirectedDripsNotifyAppsAndServices.c)
 */

__int64 __fastcall PopDirectedDripsNotifyAppsAndServices(__int64 a1, _DWORD *a2, char a3)
{
  __int64 v6; // r14
  __int64 v7; // rdx
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rcx
  int v15; // [rsp+50h] [rbp+18h] BYREF

  _InterlockedOr((volatile signed __int32 *)a1, 0);
  v6 = MEMORY[0xFFFFF78000000008];
  if ( a3 )
  {
    MiLockPagableImageSection((ULONG_PTR)ExPageLockHandle, 1uLL);
    a2[12] = *a2;
    a2[10] = 2;
    a2[11] = 5;
    a2[14] = 21;
    v8 = PoBlockConsoleSwitch((__int64)(a2 + 9), v7);
    LOBYTE(v9) = 1;
    a2[8] = v8;
    LOBYTE(v10) = 1;
    PopDirectedDripsSendSuspendResumeNotification(v10, v9);
    LOBYTE(v11) = 1;
    PopDirectedDripsSendSuspendResumeNotification(0LL, v11);
    _InterlockedOr((volatile signed __int32 *)a1, 8u);
    *(_DWORD *)(a1 + 116) = 0;
  }
  else
  {
    PopDirectedDripsSendSuspendResumeNotification(0LL, 0LL);
    LOBYTE(v12) = 1;
    PopDirectedDripsSendSuspendResumeNotification(v12, 0LL);
    v15 = a2[8];
    a2[13] = 7;
    PopDispatchStateCallout(a2 + 9, (__int64)&v15);
    MmUnlockPagableImageSection(ExPageLockHandle);
    _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFFF7);
  }
  v13 = MEMORY[0xFFFFF78000000008] - v6;
  LOBYTE(v13) = a3;
  return PopDiagTraceDirectedDripsNotifyAppsAndServices(
           v13,
           (MEMORY[0xFFFFF78000000008] - v6) / 0x2710uLL,
           (MEMORY[0xFFFFF78000000008] - v6) / 0x2710uLL);
}
