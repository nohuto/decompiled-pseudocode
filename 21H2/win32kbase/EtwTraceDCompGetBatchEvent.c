/*
 * XREFs of EtwTraceDCompGetBatchEvent @ 0x1C007B040
 * Callers:
 *     ?RetrieveBatches@CConnection@DirectComposition@@AEAAJ_KPEAPEBUUCE_RDP_HEADER@@@Z @ 0x1C007AB48 (-RetrieveBatches@CConnection@DirectComposition@@AEAAJ_KPEAPEBUUCE_RDP_HEADER@@@Z.c)
 * Callees:
 *     McTemplateK0p_EtwWriteTransfer @ 0x1C01259C0 (McTemplateK0p_EtwWriteTransfer.c)
 */

__int64 __fastcall EtwTraceDCompGetBatchEvent(__int64 a1)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x200000) != 0 )
    return McTemplateK0p_EtwWriteTransfer(a1, &DCompGetBatchEvent, &W32kControlGuid, a1);
  return result;
}
