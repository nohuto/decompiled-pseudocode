/*
 * XREFs of ?Ensure@CIVSerializer@@IEAA_NK@Z @ 0x1C0233430
 * Callers:
 *     ?Serialize@CIVMouseSerializer@@QEAAJPEAPEAU_IVMouseInputData@@PEBUContainerMouseInputData@@_K_N@Z @ 0x1C02334BC (-Serialize@CIVMouseSerializer@@QEAAJPEAPEAU_IVMouseInputData@@PEBUContainerMouseInputData@@_K_N@.c)
 *     ?Serialize@CIVPnPCreateSerializer@@AEAAJPEAPEAU_IV_HIDP_LINK_COLLECTION_NODE@@PEBU_HIDP_LINK_COLLECTION_NODE@@K_K_N@Z @ 0x1C0233E0C (-Serialize@CIVPnPCreateSerializer@@AEAAJPEAPEAU_IV_HIDP_LINK_COLLECTION_NODE@@PEBU_HIDP_LINK_COL.c)
 *     ?Serialize@CIVPnPCreateSerializer@@AEAAJPEAPEAU_IV_HPD_CURSOR@@PEBUtagHPD_CURSOR@@K_K_N@Z @ 0x1C0233EF4 (-Serialize@CIVPnPCreateSerializer@@AEAAJPEAPEAU_IV_HPD_CURSOR@@PEBUtagHPD_CURSOR@@K_K_N@Z.c)
 *     ?Serialize@CIVSerializer@@IEAAJAEAU_UNICODE_STRING@@AEBU2@_N@Z @ 0x1C02340D0 (-Serialize@CIVSerializer@@IEAAJAEAU_UNICODE_STRING@@AEBU2@_N@Z.c)
 *     ?Serialize@CIVSerializer@@IEAAJPEAPEAXQEAX_K_N@Z @ 0x1C0234168 (-Serialize@CIVSerializer@@IEAAJPEAPEAXQEAX_K_N@Z.c)
 *     ?Serialize@CIVTouchSerializer@@QEAAJPEAPEAU_IVRIMPOINTERINFONODE@@PEBUtagRIMPOINTERINFONODE@@K_K_N@Z @ 0x1C02341DC (-Serialize@CIVTouchSerializer@@QEAAJPEAPEAU_IVRIMPOINTERINFONODE@@PEBUtagRIMPOINTERINFONODE@@K_K.c)
 *     ?Serialize@CIVTouchSerializer@@QEAAJPEAPEAU_IVRIMPOINTERRAWDATA@@PEBUCPointerRawData@@K_N@Z @ 0x1C02343BC (-Serialize@CIVTouchSerializer@@QEAAJPEAPEAU_IVRIMPOINTERRAWDATA@@PEBUCPointerRawData@@K_N@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CIVSerializer::Ensure(CIVSerializer *this, int a2)
{
  unsigned int v2; // eax
  unsigned int v3; // r8d

  v2 = *((_DWORD *)this + 3);
  v3 = v2 + a2;
  if ( v2 + a2 < v2 || v3 > *((_DWORD *)this + 9) )
    return 0;
  *((_DWORD *)this + 3) = v3;
  return 1;
}
