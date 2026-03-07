__int64 __fastcall PpmIdleInstallDefaultStates(__int64 a1, __int64 a2, int a3)
{
  *(_QWORD *)(a2 + 8) = a1 + 33600;
  return PpmInstallNewIdleStates(a1, a2, a3);
}
