/*
 * XREFs of PsWow64GetProcessNtdllType @ 0x1406120AC
 * Callers:
 *     PspSetupUserProcessAddressSpace @ 0x140611BDC (PspSetupUserProcessAddressSpace.c)
 *     PspPrepareSystemDllInitBlock @ 0x140611E28 (PspPrepareSystemDllInitBlock.c)
 *     PspWow64InitThread @ 0x140679DC0 (PspWow64InitThread.c)
 *     PsThawProcess @ 0x1406857E4 (PsThawProcess.c)
 *     DbgkCreateThread @ 0x1406C01E0 (DbgkCreateThread.c)
 *     PsMapSystemDlls @ 0x1406FC94C (PsMapSystemDlls.c)
 *     PspAllocateProcess @ 0x140703F08 (PspAllocateProcess.c)
 *     DbgkSendSystemDllMessages @ 0x14088452C (DbgkSendSystemDllMessages.c)
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
