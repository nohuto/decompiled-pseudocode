bool __fastcall ShellWindowManagement::BehaviorEnabled(ShellWindowManagement *this, const struct tagDESKTOP *a2)
{
  char v2; // r8

  v2 = 0;
  if ( *((_QWORD *)this + 40) )
    return ((unsigned int)a2 & *((_DWORD *)this + 82) & 0x1FF) != 0;
  return v2;
}
