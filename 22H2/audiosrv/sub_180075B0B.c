/*
 * XREFs of sub_180075B0B @ 0x180075B0B
 * Callers:
 *     <none>
 * Callees:
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 */

__int64 __fastcall sub_180075B0B(__int64 a1, __int64 a2)
{
  int v2; // r9d

  v2 = **(_DWORD **)(a2 + 168);
  *(_DWORD *)(a2 + 176) = v2;
  if ( v2 < 0 )
    sub_18004BD84(*(_QWORD *)(a2 + 344), 73, (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\adgprocess.cpp", v2);
  return 0LL;
}
