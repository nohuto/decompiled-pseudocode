/*
 * XREFs of EtwTraceEndRetrieveSendMessage @ 0x1C0082840
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C002F9F0 (W32GetThreadWin32Thread.c)
 *     McTemplateK0cp_EtwWriteTransfer @ 0x1C0124AB0 (McTemplateK0cp_EtwWriteTransfer.c)
 */

void __fastcall EtwTraceEndRetrieveSendMessage(__int64 a1)
{
  __int64 v2; // r9
  __int64 v3; // rcx
  __int64 v4; // r8

  if ( (Microsoft_Windows_Win32kEnableBits & 0x800) != 0 )
  {
    LOBYTE(v2) = *(_BYTE *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 1248);
    McTemplateK0cp_EtwWriteTransfer(v3, &EndRetrieveSendMessage, v4, v2, a1);
  }
}
