/*
 * XREFs of HvlHalStartVirtualProcessor @ 0x1405446F0
 * Callers:
 *     <none>
 * Callees:
 *     HvlpStartVirtualProcessor @ 0x140542424 (HvlpStartVirtualProcessor.c)
 *     VslStartSecureProcessor @ 0x1409430BC (VslStartSecureProcessor.c)
 */

__int64 __fastcall HvlHalStartVirtualProcessor(ULONG a1, _OWORD *a2)
{
  if ( VslVsmEnabled )
    return VslStartSecureProcessor();
  else
    return HvlpStartVirtualProcessor(a1, a2);
}
