/*
 * XREFs of FsRtlAllocatePoolWithTag @ 0x1404EFE30
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x1402F1CB0 (RtlRaiseStatus.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall FsRtlAllocatePoolWithTag(POOL_TYPE a1, unsigned int a2, ULONG a3)
{
  PVOID result; // rax

  result = ExAllocatePoolWithTag(a1, a2, a3);
  if ( !result )
    RtlRaiseStatus(-1073741670);
  return result;
}
