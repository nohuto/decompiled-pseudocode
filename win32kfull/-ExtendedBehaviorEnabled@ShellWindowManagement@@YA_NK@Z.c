char __fastcall ShellWindowManagement::ExtendedBehaviorEnabled(ShellWindowManagement *this)
{
  int v1; // ebx
  struct tagTHREADINFO *v2; // rax
  char v3; // dl
  __int64 v4; // r8

  v1 = (int)this;
  v2 = PtiCurrentShared((__int64)this);
  v3 = 0;
  v4 = *((_QWORD *)v2 + 57);
  if ( v4 )
    return (v1 & *(_DWORD *)(v4 + 328) & 0xFF000000) != 0;
  return v3;
}
