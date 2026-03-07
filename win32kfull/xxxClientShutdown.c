__int64 __fastcall xxxClientShutdown(__int64 a1, unsigned __int64 a2)
{
  unsigned int v2; // ebx
  struct tagBWL *v4; // rax
  struct tagBWL *v5; // rdi

  v2 = 2;
  v4 = BuildHwndList(
         *(ShellWindowManagement **)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 456LL) + 8LL) + 24LL)
                                   + 112LL),
         2,
         *(_QWORD *)(a1 + 16),
         1);
  v5 = v4;
  if ( !v4 )
    return 1LL;
  if ( (a2 & 2) != 0 )
    v2 = xxxClientShutdown2(v4, 0x11u, a2);
  else
    xxxClientShutdown2(v4, 0x16u, a2);
  FreeHwndList(v5);
  return v2;
}
