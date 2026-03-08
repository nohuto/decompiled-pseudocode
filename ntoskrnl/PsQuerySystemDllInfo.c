/*
 * XREFs of PsQuerySystemDllInfo @ 0x14076D124
 * Callers:
 *     PspWow64PickBestNtdll @ 0x1402E1E64 (PspWow64PickBestNtdll.c)
 *     PsIsMachineSupportedNoWow @ 0x140707AAC (PsIsMachineSupportedNoWow.c)
 *     PsWow64IsMachineSupported @ 0x14076D0D0 (PsWow64IsMachineSupported.c)
 *     DbgkCreateThread @ 0x1407ED96C (DbgkCreateThread.c)
 *     DbgkSendSystemDllMessages @ 0x140933E74 (DbgkSendSystemDllMessages.c)
 *     ExpSystemErrorHandler2 @ 0x140AA7FE0 (ExpSystemErrorHandler2.c)
 *     PspInitializeSystemDlls @ 0x140B649D4 (PspInitializeSystemDlls.c)
 *     MmInitSystemDll @ 0x140B720A8 (MmInitSystemDll.c)
 * Callees:
 *     <none>
 */

_UNKNOWN **__fastcall PsQuerySystemDllInfo(int a1)
{
  _UNKNOWN **v1; // rax

  v1 = PspSystemDlls[a1];
  if ( v1 && v1[4] )
    return v1 + 1;
  else
    return 0LL;
}
