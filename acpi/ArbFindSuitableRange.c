/*
 * XREFs of ArbFindSuitableRange @ 0x1C00A18C0
 * Callers:
 *     AcpiMemarbFindSuitableRange @ 0x1C0088FA0 (AcpiMemarbFindSuitableRange.c)
 *     IrqArbFindSuitableRange @ 0x1C009D270 (IrqArbFindSuitableRange.c)
 *     IrqArbpFindSuitableRangeMsi @ 0x1C009E028 (IrqArbpFindSuitableRangeMsi.c)
 * Callees:
 *     RtlFindRange_0 @ 0x1C0001AAF (RtlFindRange_0.c)
 *     _guard_dispatch_icall_nop @ 0x1C0001DE0 (_guard_dispatch_icall_nop.c)
 *     ArbShareDriverExclusive @ 0x1C00A293C (ArbShareDriverExclusive.c)
 */

char __fastcall ArbFindSuitableRange(__int64 a1, __int64 a2)
{
  ULONGLONG v2; // r10
  ULONGLONG v4; // r8
  __int64 v7; // r9
  int v8; // ecx
  int v9; // edx
  ULONG Flags; // r11d

  v2 = *(_QWORD *)(a2 + 16);
  v4 = *(_QWORD *)(a2 + 24);
  if ( v2 > v4 )
    return 0;
  v7 = *(_QWORD *)(a2 + 40);
  if ( !*(_QWORD *)(v7 + 16) )
  {
    *(_QWORD *)a2 = v2;
    *(_QWORD *)(a2 + 8) = v2;
    return 1;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(a2 + 32) + 40LL) & 0xFFFFFFFD) == 0 )
    *(_BYTE *)(a2 + 67) |= 1u;
  v8 = *(_DWORD *)(v7 + 36);
  v9 = (*(unsigned __int16 *)(a2 + 64) >> 2) & 2;
  Flags = v9 | 1;
  if ( (v8 & 1) == 0 )
    Flags = v9;
  if ( (v8 & 8) != 0 )
    *(_BYTE *)(a2 + 67) |= 0x40u;
  if ( RtlFindRange_0(
         *(PRTL_RANGE_LIST *)(a1 + 48),
         v2,
         v4,
         *(_QWORD *)(v7 + 16),
         *(_QWORD *)(v7 + 24),
         Flags,
         *(_BYTE *)(a2 + 67),
         *(PVOID *)(a1 + 328),
         *(PRTL_CONFLICT_RANGE_CALLBACK *)(a1 + 336),
         (PULONGLONG)a2) >= 0 )
  {
    *(_QWORD *)(a2 + 8) = *(_QWORD *)a2 - 1LL + *(_QWORD *)(*(_QWORD *)(a2 + 40) + 16LL);
    return 1;
  }
  if ( (unsigned __int8)ArbShareDriverExclusive(a1, a2) )
    return 1;
  return (*(__int64 (__fastcall **)(__int64, __int64))(a1 + 272))(a1, a2);
}
