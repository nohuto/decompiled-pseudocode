char __fastcall lambda_a4faeffec317e94db02d9bdb76d95fff_::operator()(__int64 a1, __int64 a2, int a3, char a4)
{
  char v4; // di
  __int64 TopLevelWindow; // rax
  unsigned int v8; // r8d
  int v9; // ebx
  int v10; // ebx
  int v11; // ebx
  int v12; // ebx
  ShellWindowManagement *v14; // rcx
  unsigned int v15; // r8d
  bool v16; // al
  char v17; // r9

  v4 = 0;
  if ( a4 || *(char *)(*(_QWORD *)(a2 + 40) + 20LL) >= 0 )
  {
    TopLevelWindow = GetTopLevelWindow(a2);
    if ( TopLevelWindow )
    {
      v9 = a3 - 9;
      if ( v9 )
      {
        v10 = v9 - 1;
        if ( v10 )
        {
          v11 = v10 - 1;
          if ( v11 )
          {
            v12 = v11 - 1;
            if ( v12 )
            {
              if ( v12 != 3 )
                return v4;
            }
          }
        }
        if ( ShellWindowManagement::BehaviorEnabled(
               *(ShellWindowManagement **)(TopLevelWindow + 24),
               (const struct tagDESKTOP *)0x40,
               v8) )
        {
          v16 = ShellWindowManagement::BehaviorEnabled(v14, (const struct tagDESKTOP *)8, v15);
          v17 = 1;
          if ( !v16 )
            return v17;
        }
      }
      else if ( (*(_BYTE *)(*(_QWORD *)(TopLevelWindow + 40) + 30LL) & 1) != 0
             && ShellWindowManagement::BehaviorEnabled(
                  *(ShellWindowManagement **)(TopLevelWindow + 24),
                  (const struct tagDESKTOP *)0x80,
                  v8) )
      {
        return v17;
      }
      return a4;
    }
  }
  return 0;
}
