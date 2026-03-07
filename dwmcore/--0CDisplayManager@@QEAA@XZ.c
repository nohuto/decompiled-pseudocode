CDisplayManager *__fastcall CDisplayManager::CDisplayManager(CDisplayManager *this)
{
  CDisplayManager *result; // rax

  InitializeCriticalSection(&g_DisplayManager);
  result = (CDisplayManager *)&g_DisplayManager;
  qword_1803E7098 = 0LL;
  qword_1803E70A0 = 0LL;
  dword_1803E70A8 = 0;
  unk_1803E70AC = 0;
  return result;
}
