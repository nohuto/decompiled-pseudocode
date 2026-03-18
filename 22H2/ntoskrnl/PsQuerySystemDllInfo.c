/*
 * XREFs of PsQuerySystemDllInfo @ 0x14076F6C4
 * Callers:
 *     PspWow64PickBestNtdll @ 0x14036ACD4 (PspWow64PickBestNtdll.c)
 *     PsIsMachineSupportedNoWow @ 0x1406B7C88 (PsIsMachineSupportedNoWow.c)
 *     PsWow64IsMachineSupported @ 0x14076F670 (PsWow64IsMachineSupported.c)
 *     DbgkCreateThread @ 0x14077012C (DbgkCreateThread.c)
 *     DbgkSendSystemDllMessages @ 0x140936E84 (DbgkSendSystemDllMessages.c)
 *     ExpSystemErrorHandler2 @ 0x140AAB210 (ExpSystemErrorHandler2.c)
 *     PspInitializeSystemDlls @ 0x140B686FC (PspInitializeSystemDlls.c)
 *     MmInitSystemDll @ 0x140B76620 (MmInitSystemDll.c)
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
