/*
 * XREFs of PsQuerySystemDllInfo @ 0x14064E8DC
 * Callers:
 *     PspWow64PickBestNtdll @ 0x1402CE2E4 (PspWow64PickBestNtdll.c)
 *     DbgkCreateThread @ 0x140647420 (DbgkCreateThread.c)
 *     PsWow64IsMachineSupported @ 0x14064E890 (PsWow64IsMachineSupported.c)
 *     DbgkSendSystemDllMessages @ 0x1408844DC (DbgkSendSystemDllMessages.c)
 *     ExpSystemErrorHandler2 @ 0x1409B3000 (ExpSystemErrorHandler2.c)
 *     PspInitializeSystemDlls @ 0x140A4B284 (PspInitializeSystemDlls.c)
 *     MmInitSystemDll @ 0x140A4B9EC (MmInitSystemDll.c)
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
