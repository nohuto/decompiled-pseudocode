/*
 * XREFs of DxgkWriteDiagEntry @ 0x1C017CDA0
 * Callers:
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x1C0002F24 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     _lambda_4c48f59c4c84661c362f6a1166e0c309_::operator() @ 0x1C0167008 (_lambda_4c48f59c4c84661c362f6a1166e0c309_--operator().c)
 * Callees:
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x1C017CDCC (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 */

__int64 __fastcall DxgkWriteDiagEntry(struct _DXGK_DIAG_HEADER *a1)
{
  unsigned int CurrentProcessSessionId; // eax

  CurrentProcessSessionId = PsGetCurrentProcessSessionId(a1);
  return DxgkWriteDiagEntry(a1, CurrentProcessSessionId);
}
