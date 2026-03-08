/*
 * XREFs of KiCheckAndApplyCacheIsolation @ 0x140574B00
 * Callers:
 *     SwapContext @ 0x14041F970 (SwapContext.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiCheckAndApplyCacheIsolation(__int64 a1, __int64 a2)
{
  int v2; // r10d
  int v3; // r8d
  __int64 result; // rax

  v2 = *(_DWORD *)(*(_QWORD *)(a2 + 544) + 632LL) & 0x40;
  v3 = v2 != 0;
  result = (*(_DWORD *)(a1 + 236) >> 10) & 1;
  if ( v3 != (_DWORD)result )
  {
    result = 0LL;
    *(_DWORD *)(a1 + 236) = *(_DWORD *)(a1 + 236) & 0xFFFFFBFF | (v3 << 10);
    __writemsr(0xC8Fu, __PAIR64__(v2 != 0, 0));
  }
  return result;
}
