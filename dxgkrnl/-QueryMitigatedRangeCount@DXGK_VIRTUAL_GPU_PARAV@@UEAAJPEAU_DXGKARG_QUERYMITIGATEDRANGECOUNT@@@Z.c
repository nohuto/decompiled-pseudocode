/*
 * XREFs of ?QueryMitigatedRangeCount@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAU_DXGKARG_QUERYMITIGATEDRANGECOUNT@@@Z @ 0x1C01E0410
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGK_VIRTUAL_GPU_PARAV::QueryMitigatedRangeCount(
        DXGK_VIRTUAL_GPU_PARAV *this,
        struct _DXGKARG_QUERYMITIGATEDRANGECOUNT *a2)
{
  __int64 result; // rax

  result = 0LL;
  *(_OWORD *)a2->RangeCount = 0LL;
  *(_QWORD *)&a2->RangeCount[4] = 0LL;
  return result;
}
