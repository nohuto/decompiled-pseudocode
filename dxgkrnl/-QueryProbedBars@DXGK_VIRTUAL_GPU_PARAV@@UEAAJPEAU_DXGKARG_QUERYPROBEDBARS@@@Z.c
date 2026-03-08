/*
 * XREFs of ?QueryProbedBars@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAU_DXGKARG_QUERYPROBEDBARS@@@Z @ 0x1C01E0430
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGK_VIRTUAL_GPU_PARAV::QueryProbedBars(
        DXGK_VIRTUAL_GPU_PARAV *this,
        struct _DXGKARG_QUERYPROBEDBARS *a2)
{
  PULONG BaseRegisterValues; // rax

  BaseRegisterValues = a2->BaseRegisterValues;
  *(_OWORD *)BaseRegisterValues = 0LL;
  *((_QWORD *)BaseRegisterValues + 2) = 0LL;
  return 0LL;
}
