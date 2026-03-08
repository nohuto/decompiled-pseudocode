/*
 * XREFs of NVMeGetHealthInfoLog @ 0x1C001E084
 * Callers:
 *     NVMeControllerInitPart3 @ 0x1C000DCDC (NVMeControllerInitPart3.c)
 * Callees:
 *     ProcessCommand @ 0x1C0001E60 (ProcessCommand.c)
 *     memcmp @ 0x1C0004070 (memcmp.c)
 *     memset @ 0x1C0004580 (memset.c)
 *     LocalCommandReuse @ 0x1C000C15C (LocalCommandReuse.c)
 *     NVMeAllocateDmaBuffer @ 0x1C000C1C0 (NVMeAllocateDmaBuffer.c)
 *     NVMeFreeDmaBuffer @ 0x1C000EE04 (NVMeFreeDmaBuffer.c)
 *     BuildGetLogPageCommand @ 0x1C0010E14 (BuildGetLogPageCommand.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C0025560 (WaitForCommandCompleteWithCustomTimeout.c)
 */

int __fastcall NVMeGetHealthInfoLog(__int64 a1)
{
  _UNKNOWN **v1; // rax
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h] BYREF

  v1 = &retaddr;
  if ( !*(_BYTE *)(a1 + 20) )
    LODWORD(v1) = NVMeAllocateDmaBuffer(a1, 0x200u);
  return (int)v1;
}
