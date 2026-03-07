bool __fastcall SGDHIDgpHidInput<CHidInput *>::operator!=(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  return *(_QWORD *)(SGDGetUserSessionState(a1, a2, a3, a4) + 16840) != *a2;
}
