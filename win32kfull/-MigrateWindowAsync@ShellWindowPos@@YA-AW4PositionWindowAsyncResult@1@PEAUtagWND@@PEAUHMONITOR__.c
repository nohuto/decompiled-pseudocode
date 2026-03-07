__int64 __fastcall ShellWindowPos::MigrateWindowAsync(struct tagTHREADINFO **a1, __int64 a2, int a3)
{
  __int64 v6; // rax
  void *v7; // rbx

  v6 = Win32AllocPoolZInit(16LL, 1836543317LL);
  v7 = (void *)v6;
  if ( !v6 )
    return 1LL;
  *(_QWORD *)v6 = a2;
  *(_DWORD *)(v6 + 8) = a3;
  if ( !PostEventMessageWindow(a1, 0x1Bu, 1uLL, v6) )
  {
    Win32FreePool(v7);
    return 1LL;
  }
  return 0LL;
}
