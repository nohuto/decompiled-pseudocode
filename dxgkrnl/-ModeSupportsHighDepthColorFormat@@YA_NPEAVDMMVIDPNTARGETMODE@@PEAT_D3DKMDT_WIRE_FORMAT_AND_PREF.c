/*
 * XREFs of ?ModeSupportsHighDepthColorFormat@@YA_NPEAVDMMVIDPNTARGETMODE@@PEAT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@@Z @ 0x1C03B94F8
 * Callers:
 *     ?BmlPickColorSpaceAndWireFormat@@YAJPEBUBML_VIDPN_PATH_ORDER@@W4DXGK_DIAG_CCD_BML_ORIGIN@@PEAVDMMVIDPN@@@Z @ 0x1C016D868 (-BmlPickColorSpaceAndWireFormat@@YAJPEBUBML_VIDPN_PATH_ORDER@@W4DXGK_DIAG_CCD_BML_ORIGIN@@PEAVDM.c)
 * Callees:
 *     <none>
 */

bool __fastcall ModeSupportsHighDepthColorFormat(
        struct DMMVIDPNTARGETMODE *a1,
        union _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE *a2)
{
  unsigned int v2; // eax

  v2 = *((_DWORD *)a1 + 32);
  return ((v2 >> 2) & 0xC) != 0
      || ((v2 >> 2) & 2) != 0 && (a2->Value & 8) != 0
      || (v2 & 0xC00) != 0
      || (v2 & 0x200) != 0 && (a2->Value & 0x200) != 0
      || ((v2 | (v2 >> 6)) & 0x30000) != 0;
}
