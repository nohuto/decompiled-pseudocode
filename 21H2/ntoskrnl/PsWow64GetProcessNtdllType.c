/*
 * XREFs of PsWow64GetProcessNtdllType @ 0x140611C4C
 * Callers:
 *     PspSetupUserProcessAddressSpace @ 0x14061177C (PspSetupUserProcessAddressSpace.c)
 *     PspPrepareSystemDllInitBlock @ 0x1406119C8 (PspPrepareSystemDllInitBlock.c)
 *     DbgkCreateThread @ 0x140647420 (DbgkCreateThread.c)
 *     PsThawProcess @ 0x14067D0F8 (PsThawProcess.c)
 *     PspWow64InitThread @ 0x1406959A0 (PspWow64InitThread.c)
 *     PspAllocateProcess @ 0x1406D6638 (PspAllocateProcess.c)
 *     PsMapSystemDlls @ 0x14071231C (PsMapSystemDlls.c)
 *     DbgkSendSystemDllMessages @ 0x1408844DC (DbgkSendSystemDllMessages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsWow64GetProcessNtdllType(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 1408);
  if ( result )
    return *(unsigned int *)(result + 12);
  return result;
}
