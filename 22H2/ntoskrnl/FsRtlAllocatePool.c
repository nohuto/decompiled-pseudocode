/*
 * XREFs of FsRtlAllocatePool @ 0x14053DBF0
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x1403215D0 (RtlRaiseStatus.c)
 *     ExAllocatePoolWithTag @ 0x140AAFC80 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall FsRtlAllocatePool(POOL_TYPE a1, unsigned int a2)
{
  PVOID result; // rax

  result = ExAllocatePoolWithTag(a1, a2, 0x74725346u);
  if ( !result )
    RtlRaiseStatus(-1073741670);
  return result;
}
