/*
 * XREFs of LdrpCallTlsInitializers @ 0x180019A78
 * Callers:
 *     LdrShutdownThread @ 0x180017450 (LdrShutdownThread.c)
 *     LdrpInitializeThread @ 0x180017738 (LdrpInitializeThread.c)
 *     LdrShutdownProcess @ 0x18005EFA0 (LdrShutdownProcess.c)
 *     LdrpProcessDetachNode @ 0x18006B9D4 (LdrpProcessDetachNode.c)
 *     LdrpInitializeNode @ 0x18006D124 (LdrpInitializeNode.c)
 *     LdrpInitializeProcess @ 0x1800D1D50 (LdrpInitializeProcess.c)
 * Callees:
 *     LdrpCallInitRoutine @ 0x1800199BC (LdrpCallInitRoutine.c)
 *     LdrpFindTlsEntry @ 0x180019B60 (LdrpFindTlsEntry.c)
 *     RtlAcquireSRWLockShared @ 0x180021760 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x180021920 (RtlReleaseSRWLockShared.c)
 *     LdrpLogDbgPrint @ 0x1800CDB18 (LdrpLogDbgPrint.c)
 *     RtlReportException @ 0x1800DC930 (RtlReportException.c)
 */

void __fastcall LdrpCallTlsInitializers(unsigned int a1, __int64 a2)
{
  __int64 TlsEntry; // rbx
  __int64 (__fastcall **v5)(__int64, _QWORD, __int64); // rbx
  __int64 (__fastcall *v6)(__int64, _QWORD, __int64); // rdi

  RtlAcquireSRWLockShared(&LdrpTlsLock);
  TlsEntry = LdrpFindTlsEntry(a2);
  RtlReleaseSRWLockShared(&LdrpTlsLock);
  if ( TlsEntry )
  {
    v5 = *(__int64 (__fastcall ***)(__int64, _QWORD, __int64))(TlsEntry + 40);
    if ( v5 )
    {
      while ( 1 )
      {
        v6 = *v5;
        if ( !*v5 )
          break;
        ++v5;
        if ( (LdrpDebugFlags & 5) != 0 )
          LdrpLogDbgPrint(
            (unsigned int)"minkernel\\ntdll\\ldrtls.c",
            1060,
            (unsigned int)"LdrpCallTlsInitializers",
            2,
            (__int64)"Calling TLS callback %p for DLL \"%wZ\" at %p\n",
            v6,
            a2 + 72,
            *(_QWORD *)(a2 + 48));
        LdrpCallInitRoutine(v6, *(_QWORD *)(a2 + 48), a1, 0LL);
      }
    }
  }
}
