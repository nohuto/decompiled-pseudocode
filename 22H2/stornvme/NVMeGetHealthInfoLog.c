/*
 * XREFs of NVMeGetHealthInfoLog @ 0x1C001E0F4
 * Callers:
 *     NVMeControllerInitPart3 @ 0x1C000DD8C (NVMeControllerInitPart3.c)
 * Callees:
 *     ProcessCommand @ 0x1C0002360 (ProcessCommand.c)
 *     memcmp @ 0x1C0004650 (memcmp.c)
 *     memset @ 0x1C0004B80 (memset.c)
 *     LocalCommandReuse @ 0x1C000C21C (LocalCommandReuse.c)
 *     NVMeAllocateDmaBuffer @ 0x1C000C26C (NVMeAllocateDmaBuffer.c)
 *     NVMeFreeDmaBuffer @ 0x1C000EEA4 (NVMeFreeDmaBuffer.c)
 *     BuildGetLogPageCommand @ 0x1C0010E84 (BuildGetLogPageCommand.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C0025504 (WaitForCommandCompleteWithCustomTimeout.c)
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
