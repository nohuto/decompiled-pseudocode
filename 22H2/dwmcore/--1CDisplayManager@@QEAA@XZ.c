/*
 * XREFs of ??1CDisplayManager@@QEAA@XZ @ 0x18010ECF4
 * Callers:
 *     _dynamic_atexit_destructor_for__g_DisplayManager__ @ 0x180124640 (_dynamic_atexit_destructor_for__g_DisplayManager__.c)
 * Callees:
 *     <none>
 */

void __fastcall CDisplayManager::~CDisplayManager(struct _RTL_CRITICAL_SECTION *this)
{
  char *v2; // rcx

  v2 = *(char **)&this[1].LockCount;
  if ( (unsigned __int64)(v2 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v2);
  DeleteCriticalSection(this);
}
