/*
 * XREFs of MiValidateZeroBits @ 0x1407D4DF0
 * Callers:
 *     MiAllocateVirtualMemoryPrepare @ 0x1407C4C00 (MiAllocateVirtualMemoryPrepare.c)
 *     NtMapViewOfSection @ 0x1407D4B90 (NtMapViewOfSection.c)
 *     NtCreateEnclave @ 0x140A3BE40 (NtCreateEnclave.c)
 * Callees:
 *     RtlFindMostSignificantBit @ 0x1402EA370 (RtlFindMostSignificantBit.c)
 */

ULONGLONG __fastcall MiValidateZeroBits(ULONGLONG *a1)
{
  ULONGLONG result; // rax
  unsigned __int64 v3; // rax

  result = *a1;
  if ( *a1 )
  {
    if ( result < 0x20 )
      v3 = result + 32;
    else
      v3 = 63 - RtlFindMostSignificantBit(*a1);
    *a1 = v3;
    return v3 > 0x35 ? 0xC000000D : 0;
  }
  return result;
}
