/*
 * XREFs of HalpCreateErrorRecord @ 0x1405006E0
 * Callers:
 *     <none>
 * Callees:
 *     HalpCreateMachineCheckErrorRecord @ 0x140500730 (HalpCreateMachineCheckErrorRecord.c)
 *     HalpCreateNMIErrorRecord @ 0x1405044A4 (HalpCreateNMIErrorRecord.c)
 */

__int64 __fastcall HalpCreateErrorRecord(__int64 a1)
{
  int v1; // r10d
  int v2; // r10d

  v1 = *(_DWORD *)(a1 + 8);
  if ( !v1 )
    return HalpCreateMachineCheckErrorRecord(a1);
  v2 = v1 - 1;
  if ( !v2 )
    return HalpCreateMachineCheckErrorRecord(a1);
  if ( v2 == 2 )
    return HalpCreateNMIErrorRecord();
  return 3221225659LL;
}
