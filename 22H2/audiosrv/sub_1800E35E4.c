/*
 * XREFs of sub_1800E35E4 @ 0x1800E35E4
 * Callers:
 *     sub_180023540 @ 0x180023540 (sub_180023540.c)
 * Callees:
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 */

__int64 __fastcall sub_1800E35E4(__int64 a1, char a2)
{
  unsigned int v2; // r10d
  __int64 v5; // rax
  unsigned int v6; // ecx
  __int64 v7; // rdx
  __int64 v8; // r8
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  v2 = 0;
  if ( !**(_DWORD **)a1 )
    return 0LL;
  while ( 1 )
  {
    v5 = *(_QWORD *)(a1 + 8);
    v6 = *(_DWORD *)(*(_QWORD *)v5 + 96LL);
    if ( v6 > 0x1F )
      break;
    *(_DWORD *)(*(_QWORD *)v5 + 80LL) |= 1 << v6;
    *(_DWORD *)(**(_QWORD **)(a1 + 8) + 92LL) |= 1 << *(_DWORD *)(**(_QWORD **)(a1 + 8) + 96LL);
    if ( a2 )
      *(_DWORD *)(**(_QWORD **)(a1 + 8) + 88LL) = *(_DWORD *)(**(_QWORD **)(a1 + 8) + 96LL);
    v7 = v2++;
    v8 = **(_QWORD **)(a1 + 8);
    *(_OWORD *)(v8 + 16LL * (unsigned int)(*(_DWORD *)(v8 + 96))++ + 200) = *(_OWORD *)(**(_QWORD **)(a1 + 16) + 16 * v7);
    if ( v2 >= **(_DWORD **)a1 )
      return 0LL;
  }
  sub_18004BD84(
    (int)retaddr,
    1902,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
    -2005139341);
  return 2289827955LL;
}
