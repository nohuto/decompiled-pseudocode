/*
 * XREFs of EtwTraceEndAppMessageProcessing @ 0x1C007F8D0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C002E580 (W32GetThreadWin32Thread.c)
 *     McTemplateK0cd_EtwWriteTransfer @ 0x1C0124630 (McTemplateK0cd_EtwWriteTransfer.c)
 */

void __fastcall EtwTraceEndAppMessageProcessing(int a1)
{
  __int64 v2; // r9
  __int64 v3; // rcx
  __int64 v4; // r8

  if ( (Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
  {
    LOBYTE(v2) = *(_BYTE *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 1248);
    McTemplateK0cd_EtwWriteTransfer(v3, &EndAppMessageProcessing, v4, v2, a1);
  }
}
