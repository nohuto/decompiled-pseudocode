/*
 * XREFs of PsQuerySystemDllInfo @ 0x1406AD624
 * Callers:
 *     PspWow64PickBestNtdll @ 0x1402361E4 (PspWow64PickBestNtdll.c)
 *     PsWow64IsMachineSupported @ 0x1406AD5D0 (PsWow64IsMachineSupported.c)
 *     DbgkCreateThread @ 0x140702604 (DbgkCreateThread.c)
 *     PsIsMachineSupportedNoWow @ 0x1407111FC (PsIsMachineSupportedNoWow.c)
 *     DbgkSendSystemDllMessages @ 0x140927394 (DbgkSendSystemDllMessages.c)
 *     ExpSystemErrorHandler2 @ 0x140A6CC50 (ExpSystemErrorHandler2.c)
 *     PspInitializeSystemDlls @ 0x140B24D94 (PspInitializeSystemDlls.c)
 *     MmInitSystemDll @ 0x140B30EE0 (MmInitSystemDll.c)
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
