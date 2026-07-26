/*
 * XREFs of ??$WritePointerRelease@U_NDIS_PCW_DATA_BLOCK@@@mem@@YAXPEAPEAU_NDIS_PCW_DATA_BLOCK@@PEAU1@@Z @ 0x1C00090E0
 * Callers:
 *     ?ndisPcwGetMiniportDataBlockInternal@@YAPEAU_NDIS_PCW_DATA_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00FFEE4 (-ndisPcwGetMiniportDataBlockInternal@@YAPEAU_NDIS_PCW_DATA_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall mem::WritePointerRelease<_NDIS_PCW_DATA_BLOCK>(_QWORD *a1, __int64 a2)
{
  *a1 = a2;
}
