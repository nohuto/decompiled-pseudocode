/*
 * XREFs of ?SetConstructionStatus@VIDPN_MGR@@UEAAXW4ConstructionStatusType@FallibleConstruction@@@Z @ 0x1C0019D70
 * Callers:
 *     ?SetConstructionStatus@VIDPN_MGR@@WEI@EAAXW4ConstructionStatusType@FallibleConstruction@@@Z @ 0x1C0027CC0 (-SetConstructionStatus@VIDPN_MGR@@WEI@EAAXW4ConstructionStatusType@FallibleConstruction@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDPN_MGR::SetConstructionStatus(__int64 a1, int a2)
{
  *(_DWORD *)(a1 + 88) = a2;
}
