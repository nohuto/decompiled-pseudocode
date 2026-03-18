/*
 * XREFs of ?xxxEnableWindowGDIScaledDpiMessageX@@YA_NPEAUtagWND@@H@Z @ 0x1C0150274
 * Callers:
 *     NtUserEnableWindowGDIScaledDpiMessage @ 0x1C01501B0 (NtUserEnableWindowGDIScaledDpiMessage.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 */

char __fastcall xxxEnableWindowGDIScaledDpiMessageX(struct tagWND *a1, int a2)
{
  char v4; // di
  int v5; // ecx

  v4 = 0;
  if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) )
  {
    if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 456) )
    {
      if ( (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 456) + 8LL)
                      + 64LL) & 1) != 0 )
      {
        v5 = *(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL);
        if ( (v5 & 0xF) == 0 && (v5 & 0x40000000) != 0 )
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
