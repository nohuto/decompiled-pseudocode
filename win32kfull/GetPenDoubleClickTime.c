__int64 GetPenDoubleClickTime()
{
  __int64 v0; // rcx
  __int64 result; // rax

  if ( !gPenMonitor && !(unsigned int)LoadPointerDevicePenSettings() )
    return *(unsigned int *)(SGDGetUserSessionState(v0) + 14360);
  result = *((unsigned int *)off_1C0357038 + 11);
  if ( (_DWORD)result == -1 )
    return *((unsigned int *)off_1C0357038 + 10);
  return result;
}
