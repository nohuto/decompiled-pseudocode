struct tagHOTKEY *__fastcall HKGetHashHead(__int64 a1)
{
  return *(struct tagHOTKEY **)(SGDGetUserSessionState(a1) + 8 * (a1 & 0x7F) + 12736);
}
