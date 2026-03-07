char __fastcall MouseAccelerationEnabled(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return *(_BYTE *)(*(_QWORD *)(SGDGetUserSessionState(a1, a2, a3, a4) + 16008) + 112LL);
}
