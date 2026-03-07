char __fastcall xxxEnableWindowGDIScaledDpiMessageX(struct tagWND *a1, int a2)
{
  char v4; // di
  __int64 v5; // rcx
  __int64 v6; // rcx
  int v7; // ecx

  v4 = 0;
  if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) )
  {
    if ( *((_QWORD *)PtiCurrentShared(v5) + 57) )
    {
      if ( (*(_DWORD *)(**(_QWORD **)(*((_QWORD *)PtiCurrentShared(v6) + 57) + 8LL) + 64LL) & 1) != 0 )
      {
        v7 = *(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL);
        if ( (v7 & 0xF) == 0 && (v7 & 0x40000000) != 0 )
        {
          if ( a2 )
            *((_DWORD *)a1 + 80) |= 0x100000u;
          else
            *((_DWORD *)a1 + 80) &= ~0x100000u;
          return 1;
        }
      }
    }
  }
  return v4;
}
