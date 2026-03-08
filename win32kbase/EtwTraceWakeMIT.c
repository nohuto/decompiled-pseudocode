/*
 * XREFs of EtwTraceWakeMIT @ 0x1C00BEA10
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCallbackCount@@YACXZ @ 0x1C00EDBA8 (-GetCallbackCount@@YACXZ.c)
 *     McTemplateK0cd_EtwWriteTransfer @ 0x1C00EDF1C (McTemplateK0cd_EtwWriteTransfer.c)
 */

void __fastcall EtwTraceWakeMIT(int a1)
{
  __int64 v2; // r9
  __int64 v3; // rcx
  __int64 v4; // r8

  if ( (Microsoft_Windows_Win32kEnableBits & 0x20000000) != 0 )
  {
    LOBYTE(v2) = GetCallbackCount();
    McTemplateK0cd_EtwWriteTransfer(v3, &EtwWakeMIT, v4, v2, a1);
  }
}
