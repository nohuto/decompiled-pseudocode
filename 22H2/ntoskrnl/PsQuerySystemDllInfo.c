/*
 * XREFs of PsQuerySystemDllInfo @ 0x1406C769C
 * Callers:
 *     PspWow64PickBestNtdll @ 0x1403276E4 (PspWow64PickBestNtdll.c)
 *     DbgkCreateThread @ 0x1406C01E0 (DbgkCreateThread.c)
 *     PsWow64IsMachineSupported @ 0x1406C7650 (PsWow64IsMachineSupported.c)
 *     DbgkSendSystemDllMessages @ 0x14088452C (DbgkSendSystemDllMessages.c)
 *     ExpSystemErrorHandler2 @ 0x1409B3140 (ExpSystemErrorHandler2.c)
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
