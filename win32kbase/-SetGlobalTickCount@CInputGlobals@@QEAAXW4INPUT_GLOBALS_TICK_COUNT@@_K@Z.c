void __fastcall CInputGlobals::SetGlobalTickCount(__int64 a1, int a2, __int64 a3)
{
  __int64 v4; // rbx

  v4 = a2;
  RIMLockExclusive(a1);
  *(_QWORD *)(a1 + 8 * v4 + 24) = a3;
  *(_QWORD *)(a1 + 8) = 0LL;
  ExReleasePushLockExclusiveEx(a1, 0LL);
  KeLeaveCriticalRegion();
}
