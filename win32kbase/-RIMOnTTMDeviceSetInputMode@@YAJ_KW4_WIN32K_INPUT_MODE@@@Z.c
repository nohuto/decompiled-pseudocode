__int64 __fastcall RIMOnTTMDeviceSetInputMode(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbx
  unsigned int v5; // eax
  unsigned int v6; // edi

  v2 = *(_QWORD *)(a1 + 336);
  RIMLockExclusive(v2 + 104);
  RIMLockExclusive(v2 + 760);
  v5 = RIMSetDeviceInputMode((struct RIMDEV *)a1, a2);
  *(_QWORD *)(v2 + 768) = 0LL;
  v6 = v5;
  ExReleasePushLockExclusiveEx(v2 + 760, 0LL);
  KeLeaveCriticalRegion();
  *(_QWORD *)(v2 + 112) = 0LL;
  ExReleasePushLockExclusiveEx(v2 + 104, 0LL);
  KeLeaveCriticalRegion();
  return v6;
}
