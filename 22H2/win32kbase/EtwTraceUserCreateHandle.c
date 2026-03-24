/*
 * XREFs of EtwTraceUserCreateHandle @ 0x1C006B21C
 * Callers:
 *     HMAllocObject @ 0x1C0034080 (HMAllocObject.c)
 *     HMCreateHandleForObject @ 0x1C006B090 (HMCreateHandleForObject.c)
 * Callees:
 *     McTemplateK0pqqq_EtwWriteTransfer @ 0x1C01262A8 (McTemplateK0pqqq_EtwWriteTransfer.c)
 */

__int64 __fastcall EtwTraceUserCreateHandle(int a1, char a2, int a3)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x20000000000LL) != 0 )
    return McTemplateK0pqqq_EtwWriteTransfer(a1, (unsigned int)&UserCreateHandle, a3, a1, a2);
  return result;
}
