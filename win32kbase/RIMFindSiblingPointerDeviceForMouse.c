/*
 * XREFs of RIMFindSiblingPointerDeviceForMouse @ 0x1C01ADF44
 * Callers:
 *     RIMVirtCreateDev @ 0x1C019DFF8 (RIMVirtCreateDev.c)
 *     RIMApplyPTPConfigRemedyWorker @ 0x1C01E1F68 (RIMApplyPTPConfigRemedyWorker.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C00399D0 (RIMLockExclusive.c)
 *     RIMFindSiblingPointerDeviceForMouseWorker @ 0x1C00CD1C8 (RIMFindSiblingPointerDeviceForMouseWorker.c)
 */

__int64 __fastcall RIMFindSiblingPointerDeviceForMouse(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // rdi
  __int64 v6; // rbx
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // eax

  v4 = a2;
  v6 = SGDGetUserSessionState(a1, a2, a3, a4);
  RIMLockExclusive(v6 + 240);
  v9 = RIMFindSiblingPointerDeviceForMouseWorker(a1, v4, v7, v8);
  *(_QWORD *)(v6 + 248) = 0LL;
  LODWORD(v4) = v9;
  ExReleasePushLockExclusiveEx(v6 + 240, 0LL);
  KeLeaveCriticalRegion();
  return (unsigned int)v4;
}
