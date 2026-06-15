/*
 * XREFs of sub_18005FFB8 @ 0x18005FFB8
 * Callers:
 *     sub_18005FECC @ 0x18005FECC (sub_18005FECC.c)
 * Callees:
 *     sub_180008EAC @ 0x180008EAC (sub_180008EAC.c)
 *     sub_180060060 @ 0x180060060 (sub_180060060.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18005FFB8(__int64 a1, __int64 a2, _QWORD *a3, __int64 *a4)
{
  _QWORD *v8; // r14
  __int64 result; // rax
  __int64 v10; // rcx
  _QWORD *v11; // [rsp+28h] [rbp-20h]

  if ( *(_QWORD *)(a1 + 8) == 0x492492492492492LL )
    std::_Xlength_error("list<T> too long");
  v8 = *(_QWORD **)(a2 + 8);
  v11 = sub_180008EAC(0x38uLL);
  result = sub_180060060(v11 + 2, *a3);
  v10 = *a4;
  *a4 = 0LL;
  v11[6] = v10;
  *v11 = a2;
  v11[1] = v8;
  ++*(_QWORD *)(a1 + 8);
  *(_QWORD *)(a2 + 8) = v11;
  *v8 = v11;
  return result;
}
