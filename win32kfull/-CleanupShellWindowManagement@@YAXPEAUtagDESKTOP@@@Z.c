void __fastcall CleanupShellWindowManagement(struct tagDESKTOP *this)
{
  struct tagWND *v2; // r8
  struct tagDESKTOP *v3; // rdi
  __int64 v4; // rcx
  struct tagDESKTOP *v5; // rsi
  struct tagDESKTOP **v6; // rax

  if ( *((_QWORD *)this + 35) )
  {
    *((_QWORD *)this + 35) = 0LL;
    HMAssignmentUnlock((char *)this + 288);
    HMAssignmentUnlock((char *)this + 296);
    v3 = (struct tagDESKTOP *)*((_QWORD *)this + 38);
    if ( v3 )
    {
      while ( v3 != (struct tagDESKTOP *)((char *)this + 304) )
      {
        v4 = *(_QWORD *)v3;
        v5 = v3;
        v3 = (struct tagDESKTOP *)v4;
        if ( *(struct tagDESKTOP **)(v4 + 8) != v5 || (v6 = (struct tagDESKTOP **)*((_QWORD *)v5 + 1), *v6 != v5) )
          __fastfail(3u);
        *v6 = (struct tagDESKTOP *)v4;
        *(_QWORD *)(v4 + 8) = v6;
        HMAssignmentUnlock((char *)v5 + 16);
        Win32FreePool(v5);
      }
    }
    ShellWindowManagement::SetWindow(this, 0LL, v2);
  }
}
