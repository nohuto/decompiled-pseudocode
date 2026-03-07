bool IsCurrentConsoleSession(void)
{
  DXGGLOBAL *Global; // rax
  struct DXGSESSIONMGR *SessionMgr; // rbx

  Global = DXGGLOBAL::GetGlobal();
  SessionMgr = DXGGLOBAL::GetSessionMgr(Global);
  return (unsigned int)PsGetCurrentProcessSessionId() == *((_DWORD *)SessionMgr + 36);
}
