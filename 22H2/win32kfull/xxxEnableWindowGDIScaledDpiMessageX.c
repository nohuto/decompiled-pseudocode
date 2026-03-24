/*
 * XREFs of xxxEnableWindowGDIScaledDpiMessageX @ 0x1C01601F4
 * Callers:
 *     NtUserEnableWindowGDIScaledDpiMessage @ 0x1C0160130 (NtUserEnableWindowGDIScaledDpiMessage.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall xxxEnableWindowGDIScaledDpiMessageX(__int64 a1, int a2)
{
  unsigned int v4; // edi
  __int64 v5; // rcx

  v4 = 0;
  if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) )
  {
    if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 456) )
    {
      if ( (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 456) + 8LL)
                      + 64LL) & 1) != 0 )
      {
        v5 = *(_QWORD *)(a1 + 40);
        if ( (*(_DWORD *)(v5 + 288) & 0x4000000F) == 0x40000000 )
        {
          v4 = 1;
          *(_DWORD *)(v5 + 232) ^= (*(_DWORD *)(v5 + 232) ^ (a2 << 29)) & 0x20000000;
        }
      }
    }
  }
  return v4;
}
