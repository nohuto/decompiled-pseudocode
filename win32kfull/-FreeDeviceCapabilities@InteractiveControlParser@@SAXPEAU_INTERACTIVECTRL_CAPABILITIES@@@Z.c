/*
 * XREFs of ?FreeDeviceCapabilities@InteractiveControlParser@@SAXPEAU_INTERACTIVECTRL_CAPABILITIES@@@Z @ 0x1C024D8C8
 * Callers:
 *     ?Deinitialize@InteractiveControlDevice@@QEAAXXZ @ 0x1C0247EA8 (-Deinitialize@InteractiveControlDevice@@QEAAXXZ.c)
 *     ?BuildDeviceCapabilities@InteractiveControlParser@@SAJPEAU_HIDP_PREPARSED_DATA@@PEAVInteractiveControlDevice@@@Z @ 0x1C024D274 (-BuildDeviceCapabilities@InteractiveControlParser@@SAJPEAU_HIDP_PREPARSED_DATA@@PEAVInteractiveC.c)
 * Callees:
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 *     ?FreeComponentInformation@InteractiveControlParser@@CAXPEAU_INTERACTIVECTRL_CAPABILITIES@@@Z @ 0x1C024D858 (-FreeComponentInformation@InteractiveControlParser@@CAXPEAU_INTERACTIVECTRL_CAPABILITIES@@@Z.c)
 */

void __fastcall InteractiveControlParser::FreeDeviceCapabilities(struct _INTERACTIVECTRL_CAPABILITIES *a1)
{
  __int64 v2; // rcx

  if ( a1 )
  {
    InteractiveControlParser::FreeComponentInformation(a1);
    v2 = *((_QWORD *)a1 + 21);
    if ( v2 )
      RawInputManagerDeviceObjectDereference(v2);
    memset_0(a1, 0, 0xB8uLL);
  }
}
