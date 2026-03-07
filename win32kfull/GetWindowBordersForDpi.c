__int64 __fastcall GetWindowBordersForDpi(int a1, int a2, __int64 a3, __int64 a4, int a5)
{
  __int64 ThreadWin32Thread; // rax
  int v8; // r8d
  int v9; // eax

  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  if ( *(_DWORD *)(ThreadWin32Thread + 632) > 0x9900u )
    v9 = 0;
  else
    v9 = *(_DWORD *)(ThreadWin32Thread + 648);
  return GetWindowBordersForDpiWithCompatFlags2(a1, a2, v8, 0, a5, v9);
}
