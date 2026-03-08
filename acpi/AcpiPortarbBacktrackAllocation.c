/*
 * XREFs of AcpiPortarbBacktrackAllocation @ 0x1C008C1C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlDeleteRange_0 @ 0x1C0001A9D (RtlDeleteRange_0.c)
 *     AcpiArblibGetNextAlias @ 0x1C007D0A4 (AcpiArblibGetNextAlias.c)
 */

NTSTATUS __fastcall AcpiPortarbBacktrackAllocation(__int64 a1, ULONGLONG *a2)
{
  __int64 v2; // rdi
  int v5; // ebp
  char NextAlias; // al
  __int64 v7; // r9
  void *v8; // r9
  struct _RTL_RANGE_LIST *v9; // rcx
  ULONGLONG Start; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a2;
  Start = *a2;
  v5 = *(_DWORD *)(a2[5] + 36);
  while ( 1 )
  {
    NextAlias = AcpiArblibGetNextAlias(v5, v2, &Start);
    v8 = *(void **)(v7 + 32);
    v9 = *(struct _RTL_RANGE_LIST **)(a1 + 48);
    if ( !NextAlias )
      break;
    v2 = Start;
    RtlDeleteRange(v9, Start, *(_QWORD *)(a2[5] + 16) + Start - 1, v8);
  }
  return RtlDeleteRange_0(v9, *a2, a2[1], v8);
}
