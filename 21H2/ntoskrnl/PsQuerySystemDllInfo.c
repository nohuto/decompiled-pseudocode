/*
 * XREFs of PsQuerySystemDllInfo @ 0x1406436FC
 * Callers:
 *     PspWow64PickBestNtdll @ 0x14024C7E4 (PspWow64PickBestNtdll.c)
 *     DbgkCreateThread @ 0x14063C210 (DbgkCreateThread.c)
 *     PsWow64IsMachineSupported @ 0x1406436B0 (PsWow64IsMachineSupported.c)
 *     DbgkSendSystemDllMessages @ 0x14088463C (DbgkSendSystemDllMessages.c)
 *     ExpSystemErrorHandler2 @ 0x1409B3F30 (ExpSystemErrorHandler2.c)
 *     PspInitializeSystemDlls @ 0x140A4C284 (PspInitializeSystemDlls.c)
 *     MmInitSystemDll @ 0x140A4C9EC (MmInitSystemDll.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsQuerySystemDllInfo(int a1)
{
  __int64 v1; // rax

  v1 = (__int64)*(&PspSystemDlls + a1);
  if ( v1 && *(_QWORD *)(v1 + 40) )
    return v1 + 16;
  else
    return 0LL;
}
