/*
 * XREFs of ?IsManagementWindow@ShellWindowManagement@@YA_NPEAUtagWND@@@Z @ 0x1C012F174
 * Callers:
 *     xxxFreeWindow @ 0x1C0031C50 (xxxFreeWindow.c)
 * Callees:
 *     <none>
 */

bool __fastcall ShellWindowManagement::IsManagementWindow(ShellWindowManagement *this, struct tagWND *a2)
{
  return *(_QWORD *)(*((_QWORD *)this + 3) + 320LL) == (_QWORD)this;
}
