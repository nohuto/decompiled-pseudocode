/*
 * XREFs of ?IsManagementWindow@ShellWindowManagement@@YA_NPEAUtagWND@@@Z @ 0x1C013D0F4
 * Callers:
 *     xxxFreeWindow @ 0x1C00E8F70 (xxxFreeWindow.c)
 * Callees:
 *     <none>
 */

bool __fastcall ShellWindowManagement::IsManagementWindow(ShellWindowManagement *this, struct tagWND *a2)
{
  return *(_QWORD *)(*((_QWORD *)this + 3) + 328LL) == (_QWORD)this;
}
