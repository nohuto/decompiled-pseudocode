/*
 * XREFs of EtwTraceWakeDIT @ 0x1C009C120
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C002E580 (W32GetThreadWin32Thread.c)
 *     McTemplateK0cd_EtwWriteTransfer @ 0x1C0124630 (McTemplateK0cd_EtwWriteTransfer.c)
 */

void __fastcall EtwTraceWakeDIT(int a1)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9

  if ( (Microsoft_Windows_Win32kEnableBits & 0x20000000) != 0 )
  {
    if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) )
      LOBYTE(v4) = *(_BYTE *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 1248);
    else
      LOBYTE(v4) = -1;
    McTemplateK0cd_EtwWriteTransfer(v2, &EtwWakeDIT, v3, v4, a1);
  }
}
