BOOL __fastcall GetProcessAndSessionId(DWORD *a1, DWORD *a2)
{
  DWORD CurrentProcessId; // eax
  BOOL result; // eax
  signed int LastError; // eax
  void *retaddr; // [rsp+28h] [rbp+0h]

  CurrentProcessId = GetCurrentProcessId();
  *a1 = CurrentProcessId;
  result = ProcessIdToSessionId(CurrentProcessId, a2);
  if ( !result )
  {
    LastError = GetLastError();
    if ( LastError > 0 )
      LastError = (unsigned __int16)LastError | 0x80070000;
    if ( LastError >= 0 )
      LastError = -2003304445;
    ModuleFailFastForHRESULT((unsigned int)LastError, retaddr);
  }
  return result;
}
