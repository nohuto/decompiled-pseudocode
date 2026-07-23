/*
 * XREFs of sub_140A11EF0 @ 0x140A11EF0
 * Callers:
 *     <none>
 * Callees:
 *     $$b8 @ 0x140A103CC ($$b8.c)
 */

__int64 __fastcall sub_140A11EF0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  if ( !*(_DWORD *)(a3 + 2296) )
  {
    *(_QWORD *)(a3 + 2312) = 0LL;
    *(_QWORD *)(a3 + 2328) = a1;
    *(_QWORD *)(a3 + 2304) = a3 - 0x5C5FC0A76E374B18LL;
    *(_QWORD *)(a3 + 2320) = 272LL;
    *(_DWORD *)(a3 + 2296) = 1;
    return __b8(a3, 0LL);
  }
  return result;
}
