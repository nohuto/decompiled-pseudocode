/*
 * XREFs of KiVerifyXcpt0 @ 0x140B5D340
 * Callers:
 *     <none>
 * Callees:
 *     KiVerifyXcptFilter @ 0x140B5D724 (KiVerifyXcptFilter.c)
 */

__int64 __fastcall KiVerifyXcpt0(__int64 a1)
{
  __int64 result; // rax

  if ( *(_DWORD *)(a1 + 8) == 1 )
  {
    ++**(_DWORD **)a1;
  }
  else
  {
    *(_DWORD *)(a1 + 12) = -1;
    *(_DWORD *)(a1 + 16) = 1;
  }
  result = *(int *)(a1 + 12);
  *(_QWORD *)(a1 + 24) += result;
  return result;
}
