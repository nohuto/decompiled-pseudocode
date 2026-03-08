/*
 * XREFs of DxgkWriteDiagEntry @ 0x1C01BA750
 * Callers:
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x1C000A280 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     _lambda_ac7822d55a092b4fdea37af52b75bf92_::operator() @ 0x1C0162008 (_lambda_ac7822d55a092b4fdea37af52b75bf92_--operator().c)
 * Callees:
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x1C01BA77C (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 */

__int64 __fastcall DxgkWriteDiagEntry(struct _DXGK_DIAG_HEADER *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int CurrentProcessSessionId; // eax

  CurrentProcessSessionId = PsGetCurrentProcessSessionId(a1, a2, a3, a4);
  return DxgkWriteDiagEntry(a1, CurrentProcessSessionId);
}
