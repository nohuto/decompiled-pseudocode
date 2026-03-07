__int64 PsGetCurrentProcessSessionId()
{
  unsigned int SessionId; // ecx
  __int64 result; // rax

  SessionId = MmGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
  result = 0LL;
  if ( SessionId != -1 )
    return SessionId;
  return result;
}
