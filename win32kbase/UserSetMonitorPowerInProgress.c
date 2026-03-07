__int64 __fastcall UserSetMonitorPowerInProgress(__int64 a1)
{
  char v1; // bl
  __int64 result; // rax

  v1 = a1;
  result = SGDGetUserGdiSessionState(a1);
  *(_BYTE *)(result + 1) = v1;
  return result;
}
