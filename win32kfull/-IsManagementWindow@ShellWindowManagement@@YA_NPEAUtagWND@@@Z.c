bool __fastcall ShellWindowManagement::IsManagementWindow(ShellWindowManagement *this, struct tagWND *a2)
{
  return *(_QWORD *)(*((_QWORD *)this + 3) + 320LL) == (_QWORD)this;
}
