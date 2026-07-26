/*
 * XREFs of ?ndisValidatePDConfigBuffer@@YAEKPEBU_NDIS_PD_CONFIG@@@Z @ 0x1C001E654
 * Callers:
 *     ?ndisMIndicatePDConfigChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEBXKE@Z @ 0x1C001E3DC (-ndisMIndicatePDConfigChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEBXKE@Z.c)
 * Callees:
 *     ?ndisValidatePDCapsBuffer@@YAEKPEBU_NDIS_PD_CAPABILITIES@@@Z @ 0x1C001E7E8 (-ndisValidatePDCapsBuffer@@YAEKPEBU_NDIS_PD_CAPABILITIES@@@Z.c)
 *     ?ndisValidateTrailingElementSpace@@YAEKPEBU_NDIS_OBJECT_HEADER@@KKK@Z @ 0x1C001E974 (-ndisValidateTrailingElementSpace@@YAEKPEBU_NDIS_OBJECT_HEADER@@KKK@Z.c)
 */

unsigned __int8 __fastcall ndisValidatePDConfigBuffer(unsigned int a1, const struct _NDIS_PD_CONFIG *a2)
{
  char v3; // bl
  unsigned int CapabilitiesSize; // ebp
  __int64 v5; // rdx
  __int64 v6; // r8

  if ( a1 < 0x18 || a2->Header.Size < 0x14u || a2->Header.Type != 0x80 || a2->Header.Revision != 1 )
    return 0;
  v3 = 0;
  if ( (a2->Flags & 0xFFFFFFFE) == 0 && (!a2->Enabled || a2->CapabilitiesSize) )
  {
    CapabilitiesSize = a2->CapabilitiesSize;
    if ( ndisValidateTrailingElementSpace(a1, &a2->Header, a2->CapabilitiesOffset, 1u, CapabilitiesSize)
      && (!CapabilitiesSize || ndisValidatePDCapsBuffer(a1 - v6, (const struct _NDIS_PD_CAPABILITIES *)(v6 + v5))) )
    {
      return 1;
    }
  }
  return v3;
}
