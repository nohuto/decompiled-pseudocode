/*
 * XREFs of sub_180024840 @ 0x180024840
 * Callers:
 *     <none>
 * Callees:
 *     sub_18006AEB0 @ 0x18006AEB0 (sub_18006AEB0.c)
 */

__int64 __fastcall sub_180024840(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rax
  int v5; // r8d
  int v6; // r9d
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 result; // rax

  sub_18006AEB0();
  v4 = (_QWORD *)(a1 + 4600);
  v5 = *(_DWORD *)(a1 + 4556);
  v6 = *(_DWORD *)(a1 + 4552);
  v7 = *(_QWORD *)(a1 + 4568) >> 20;
  v8 = *(_QWORD *)(a1 + 4584) >> 20;
  if ( *(_QWORD *)(a1 + 4624) >= 8uLL )
    v4 = (_QWORD *)*v4;
  *(_QWORD *)(a2 + 80) = v4;
  *(_QWORD *)(a2 + 88) = v7;
  *(_DWORD *)(a2 + 96) = v5;
  *(_DWORD *)(a2 + 100) = v6;
  *(_QWORD *)(a2 + 104) = v8;
  result = *(unsigned int *)(a1 + 4632);
  *(_DWORD *)(a2 + 112) = result;
  return result;
}
