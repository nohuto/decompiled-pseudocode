/*
 * XREFs of PsWow64GetProcessNtdllType @ 0x1406A16FC
 * Callers:
 *     PspWow64InitThread @ 0x1405F4EF0 (PspWow64InitThread.c)
 *     PsThawProcess @ 0x1406001EC (PsThawProcess.c)
 *     DbgkCreateThread @ 0x14063C210 (DbgkCreateThread.c)
 *     PspSetupUserProcessAddressSpace @ 0x1406A122C (PspSetupUserProcessAddressSpace.c)
 *     PspPrepareSystemDllInitBlock @ 0x1406A1478 (PspPrepareSystemDllInitBlock.c)
 *     PspAllocateProcess @ 0x1406AD918 (PspAllocateProcess.c)
 *     PsMapSystemDlls @ 0x1406C096C (PsMapSystemDlls.c)
 *     DbgkSendSystemDllMessages @ 0x14088463C (DbgkSendSystemDllMessages.c)
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
