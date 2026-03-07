void __fastcall MiInitializeSections(__int64 a1)
{
  __int64 v2; // rcx
  char v3; // al

  v2 = a1 + 1584;
  *(_QWORD *)(v2 + 40) = v2 + 32;
  *(_QWORD *)(v2 + 32) = v2 + 32;
  *(_QWORD *)(v2 + 56) = v2 + 48;
  *(_QWORD *)(v2 + 48) = v2 + 48;
  *(_QWORD *)(v2 + 72) = v2 + 64;
  *(_QWORD *)(v2 + 64) = v2 + 64;
  KeInitializeSemaphore((PRKSEMAPHORE)v2, 0, 0x7FFFFFFF);
  *(_QWORD *)(a1 + 1672) = a1 + 1664;
  *(_QWORD *)(a1 + 1664) = a1 + 1664;
  *(_QWORD *)(a1 + 1776) = a1 + 1768;
  *(_QWORD *)(a1 + 1768) = a1 + 1768;
  *(_QWORD *)(a1 + 1792) = a1 + 1784;
  *(_QWORD *)(a1 + 1784) = a1 + 1784;
  KeInitializeEvent((PRKEVENT)(a1 + 1464), NotificationEvent, 0);
  *(_QWORD *)(a1 + 1808) = a1 + 1800;
  *(_QWORD *)(a1 + 1800) = a1 + 1800;
  KeInitializeEvent((PRKEVENT)(a1 + 1440), NotificationEvent, 0);
  KeInitializeEvent((PRKEVENT)(a1 + 1816), SynchronizationEvent, 0);
  KeInitializeTimerEx((PKTIMER)(a1 + 1680), SynchronizationTimer);
  KeInitializeEvent((PRKEVENT)(a1 + 2040), NotificationEvent, 0);
  InitializeSListHead((PSLIST_HEADER)(a1 + 2064));
  *(_QWORD *)(a1 + 1528) = 1LL;
  *(_QWORD *)(a1 + 1496) = 0LL;
  *(_QWORD *)(a1 + 1536) = 0LL;
  *(_DWORD *)(a1 + 1568) = 0;
  v3 = *(_BYTE *)(a1 + 1575) & 0xFD;
  *(_QWORD *)(a1 + 1520) = a1;
  *(_BYTE *)(a1 + 1572) = -1;
  *(_BYTE *)(a1 + 1575) = v3 | 4;
  KeInitializeEvent((PRKEVENT)(a1 + 1544), NotificationEvent, 0);
}
