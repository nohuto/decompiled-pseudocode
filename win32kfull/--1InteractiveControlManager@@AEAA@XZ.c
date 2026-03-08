/*
 * XREFs of ??1InteractiveControlManager@@AEAA@XZ @ 0x1C00F39E0
 * Callers:
 *     ?InitiateWin32kCleanup@@YAHXZ @ 0x1C0078068 (-InitiateWin32kCleanup@@YAHXZ.c)
 * Callees:
 *     ?Deinitialize@InteractiveControlManager@@AEAAXXZ @ 0x1C00F3A3C (-Deinitialize@InteractiveControlManager@@AEAAXXZ.c)
 */

void __fastcall InteractiveControlManager::~InteractiveControlManager(InteractiveControlManager *this)
{
  REGHANDLE v1; // rcx
  REGHANDLE v2; // rcx

  InteractiveControlManager::Deinitialize(this);
  v1 = qword_1C0357170;
  qword_1C0357170 = 0LL;
  dword_1C0357150 = 0;
  EtwUnregister(v1);
  v2 = qword_1C0357138;
  qword_1C0357138 = 0LL;
  dword_1C0357118 = 0;
  EtwUnregister(v2);
}
