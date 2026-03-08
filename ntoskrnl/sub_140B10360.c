/*
 * XREFs of sub_140B10360 @ 0x140B10360
 * Callers:
 *     <none>
 * Callees:
 *     $$ba @ 0x140B0E898 ($$ba.c)
 */

__int64 __fastcall sub_140B10360(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  if ( !*(_DWORD *)(a3 + 2296) )
  {
    *(_QWORD *)(a3 + 2312) = 0LL;
    *(_QWORD *)(a3 + 2328) = a1;
    *(_QWORD *)(a3 + 2304) = a3 - 0x5C5FC0A76E374B18LL;
    *(_QWORD *)(a3 + 2320) = 272LL;
    *(_DWORD *)(a3 + 2296) = 1;
    return __ba(a3, 0LL);
  }
  return result;
}
