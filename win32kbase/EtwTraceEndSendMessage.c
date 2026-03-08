/*
 * XREFs of EtwTraceEndSendMessage @ 0x1C00B9260
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCallbackCount@@YACXZ @ 0x1C00EDBA8 (-GetCallbackCount@@YACXZ.c)
 *     McTemplateK0cp_EtwWriteTransfer @ 0x1C00EE032 (McTemplateK0cp_EtwWriteTransfer.c)
 */

void __fastcall EtwTraceEndSendMessage(__int64 a1)
{
  __int64 v2; // r9
  __int64 v3; // rcx
  __int64 v4; // r8

  if ( (Microsoft_Windows_Win32kEnableBits & 0x800) != 0 )
  {
    LOBYTE(v2) = GetCallbackCount();
    McTemplateK0cp_EtwWriteTransfer(v3, &EndSendMessage, v4, v2, a1);
  }
}
