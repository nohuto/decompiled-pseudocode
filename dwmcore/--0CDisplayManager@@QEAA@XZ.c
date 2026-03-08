/*
 * XREFs of ??0CDisplayManager@@QEAA@XZ @ 0x180103898
 * Callers:
 *     _dynamic_initializer_for__g_DisplayManager__ @ 0x180003DA0 (_dynamic_initializer_for__g_DisplayManager__.c)
 * Callees:
 *     <none>
 */

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
