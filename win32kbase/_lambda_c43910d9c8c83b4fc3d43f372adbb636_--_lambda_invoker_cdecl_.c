/*
 * XREFs of _lambda_c43910d9c8c83b4fc3d43f372adbb636_::_lambda_invoker_cdecl_ @ 0x1C019A750
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall lambda_c43910d9c8c83b4fc3d43f372adbb636_::_lambda_invoker_cdecl_(void *a1, void *a2, _QWORD *a3)
{
  __int64 v3; // rdx
  unsigned __int64 v4; // r9

  v3 = (unsigned __int8)a2 & 7;
  if ( ((1 << v3) & (_DWORD)a3[4]) == 0 )
  {
    v4 = a3[3];
    if ( v4 < a3[1] )
      *(_DWORD *)(*a3 + 4 * v4) = *(_DWORD *)(a3[5] + 4 * v3);
    ++a3[3];
    *((_DWORD *)a3 + 8) |= 1 << v3;
  }
  ++a3[2];
}
