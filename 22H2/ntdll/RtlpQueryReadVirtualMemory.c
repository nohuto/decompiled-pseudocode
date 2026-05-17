/*
 * XREFs of RtlpQueryReadVirtualMemory @ 0x1800D8E40
 * Callers:
 *     <none>
 * Callees:
 *     ZwReadVirtualMemory @ 0x18009DCC0 (ZwReadVirtualMemory.c)
 */

__int64 __fastcall RtlpQueryReadVirtualMemory(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _QWORD *a5)
{
  __int64 result; // rax

  result = ZwReadVirtualMemory();
  if ( (int)result >= 0 )
    return a4 != *a5 ? 0x8000000D : 0;
  *a5 = 0LL;
  return result;
}
