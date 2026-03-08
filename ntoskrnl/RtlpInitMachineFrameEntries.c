/*
 * XREFs of RtlpInitMachineFrameEntries @ 0x140B704B8
 * Callers:
 *     RtlInitializeHistoryTable @ 0x140B687EC (RtlInitializeHistoryTable.c)
 *     RtlInitKernelModeSpecialMachineFrameEntries @ 0x140B939CC (RtlInitKernelModeSpecialMachineFrameEntries.c)
 * Callees:
 *     RtlLookupFunctionEntry @ 0x140281130 (RtlLookupFunctionEntry.c)
 */

void __fastcall RtlpInitMachineFrameEntries(unsigned __int64 *a1, unsigned int a2)
{
  __int64 v3; // rdi
  unsigned int *v4; // rax
  __int64 v5; // [rsp+40h] [rbp+18h] BYREF

  if ( a2 )
  {
    v5 = 0LL;
    v3 = a2;
    do
    {
      v4 = RtlLookupFunctionEntry(*a1, &v5, 0LL);
      *a1++ = v5 + v4[2];
      --v3;
    }
    while ( v3 );
  }
}
