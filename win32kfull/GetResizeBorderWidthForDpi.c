__int64 __fastcall GetResizeBorderWidthForDpi(unsigned int a1)
{
  __int64 ThreadWin32Thread; // rax
  unsigned int v3; // edx

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( *(_DWORD *)(ThreadWin32Thread + 632) > 0x9900u )
    v3 = 0;
  else
    v3 = *(_DWORD *)(ThreadWin32Thread + 648);
  return GetResizeBorderWidthForDpiWithAppCompat2(a1, v3);
}
