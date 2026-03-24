/*
 * XREFs of ??0CDisplayManager@@QEAA@XZ @ 0x1800DF714
 * Callers:
 *     _dynamic_initializer_for__g_DisplayManager__ @ 0x1800035F0 (_dynamic_initializer_for__g_DisplayManager__.c)
 * Callees:
 *     <none>
 */

CDisplayManager *__fastcall CDisplayManager::CDisplayManager(CDisplayManager *this)
{
  CDisplayManager *result; // rax

  InitializeCriticalSection(&g_DisplayManager);
  result = (CDisplayManager *)&g_DisplayManager;
  qword_18034B5C8 = 0LL;
  hObject = 0LL;
  dword_18034B5D8 = 0;
  unk_18034B5DC = 0;
  return result;
}
