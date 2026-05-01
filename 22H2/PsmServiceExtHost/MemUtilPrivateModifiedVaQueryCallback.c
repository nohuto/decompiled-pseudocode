/*
 * XREFs of MemUtilPrivateModifiedVaQueryCallback @ 0x180086890
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MemUtilPrivateModifiedVaQueryCallback(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r8
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 8);
  result = v2 & 0x8000001;
  if ( result == 0x8000000 && (v2 & 0xC00000) == 0x400000 )
    *a2 += 4096LL;
  return result;
}
