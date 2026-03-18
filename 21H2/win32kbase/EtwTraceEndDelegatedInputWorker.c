/*
 * XREFs of EtwTraceEndDelegatedInputWorker @ 0x1C00E5430
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCallbackCount@@YACXZ @ 0x1C014C390 (-GetCallbackCount@@YACXZ.c)
 *     McTemplateK0cpttttttpppqqq_EtwWriteTransfer @ 0x1C014F850 (McTemplateK0cpttttttpppqqq_EtwWriteTransfer.c)
 */

void __fastcall EtwTraceEndDelegatedInputWorker(char a1)
{
  int v2; // r9d
  int v3; // ecx
  int v4; // r8d

  if ( (Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
  {
    LOBYTE(v2) = GetCallbackCount();
    McTemplateK0cpttttttpppqqq_EtwWriteTransfer(v3, (unsigned int)&EndDelegatedInputWorker, v4, v2, a1);
  }
}
