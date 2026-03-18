/*
 * XREFs of ?RIMOnTTMDeviceSetInputMode@@YAJ_KW4_WIN32K_INPUT_MODE@@@Z @ 0x1C01B7EF0
 * Callers:
 *     <none>
 * Callees:
 *     RIMLockExclusive @ 0x1C00378D0 (RIMLockExclusive.c)
 *     RIMSetDeviceInputMode @ 0x1C00D2D38 (RIMSetDeviceInputMode.c)
 */

__int64 __fastcall RIMOnTTMDeviceSetInputMode(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbx
  unsigned int v5; // eax
  unsigned int v6; // edi

  v2 = *(_QWORD *)(a1 + 336);
  RIMLockExclusive(v2 + 104);
  RIMLockExclusive(v2 + 792);
  v5 = RIMSetDeviceInputMode((struct RIMDEV *)a1, a2);
  *(_QWORD *)(v2 + 800) = 0LL;
  v6 = v5;
  ExReleasePushLockExclusiveEx(v2 + 792, 0LL);
  KeLeaveCriticalRegion();
  *(_QWORD *)(v2 + 112) = 0LL;
  ExReleasePushLockExclusiveEx(v2 + 104, 0LL);
  KeLeaveCriticalRegion();
  return v6;
}
