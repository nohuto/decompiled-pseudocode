/*
 * XREFs of PsWow64GetProcessNtdllType @ 0x140707820
 * Callers:
 *     PsThawMultiProcess @ 0x1402FFE80 (PsThawMultiProcess.c)
 *     PspSetupUserProcessAddressSpace @ 0x14070733C (PspSetupUserProcessAddressSpace.c)
 *     PspPrepareSystemDllInitBlock @ 0x1407075A8 (PspPrepareSystemDllInitBlock.c)
 *     PspAllocateProcess @ 0x140707E10 (PspAllocateProcess.c)
 *     PsMapSystemDlls @ 0x1407279B4 (PsMapSystemDlls.c)
 *     PspWow64InitThread @ 0x14077BCB4 (PspWow64InitThread.c)
 *     DbgkCreateThread @ 0x1407ED96C (DbgkCreateThread.c)
 *     DbgkSendSystemDllMessages @ 0x140933E74 (DbgkSendSystemDllMessages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsWow64GetProcessNtdllType(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 1408);
  if ( result )
    return *(unsigned int *)(result + 8);
  return result;
}
