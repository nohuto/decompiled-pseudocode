/*
 * XREFs of HalpCmciSetProcessorConfig @ 0x14037CC58
 * Callers:
 *     HalpCmciInitProcessor @ 0x14037CD68 (HalpCmciInitProcessor.c)
 *     HalpDisableCmciOnProcessor @ 0x140503E10 (HalpDisableCmciOnProcessor.c)
 * Callees:
 *     HalpGetCpuVendor @ 0x14037D1B4 (HalpGetCpuVendor.c)
 *     HalpCmciSetProcessorConfigIntel @ 0x14037D2B8 (HalpCmciSetProcessorConfigIntel.c)
 *     HalpCmciSetProcessorConfigAMD @ 0x140503AC8 (HalpCmciSetProcessorConfigAMD.c)
 */

__int64 __fastcall HalpCmciSetProcessorConfig(__int64 a1, char a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v7; // rdx

  result = HalpGetCpuVendor();
  if ( (_BYTE)result == 2 )
  {
    LOBYTE(v7) = a2;
    return HalpCmciSetProcessorConfigIntel(a1, v7, a3);
  }
  else if ( (_BYTE)result == 1 )
  {
    LOBYTE(v7) = a2;
    return HalpCmciSetProcessorConfigAMD(a1, v7, a3);
  }
  return result;
}
