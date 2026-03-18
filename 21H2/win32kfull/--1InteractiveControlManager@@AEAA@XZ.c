/*
 * XREFs of ??1InteractiveControlManager@@AEAA@XZ @ 0x1C011EF48
 * Callers:
 *     ?InitiateWin32kCleanup@@YAHXZ @ 0x1C00F099C (-InitiateWin32kCleanup@@YAHXZ.c)
 * Callees:
 *     ?Deinitialize@InteractiveControlManager@@AEAAXXZ @ 0x1C011EFA4 (-Deinitialize@InteractiveControlManager@@AEAAXXZ.c)
 */

void __fastcall InteractiveControlManager::~InteractiveControlManager(InteractiveControlManager *this)
{
  REGHANDLE v1; // rcx
  REGHANDLE v2; // rcx

  InteractiveControlManager::Deinitialize(this);
  v1 = qword_1C03262E0;
  qword_1C03262E0 = 0LL;
  dword_1C03262C0 = 0;
  EtwUnregister(v1);
  v2 = qword_1C03262A8;
  qword_1C03262A8 = 0LL;
  dword_1C0326288 = 0;
  EtwUnregister(v2);
}
