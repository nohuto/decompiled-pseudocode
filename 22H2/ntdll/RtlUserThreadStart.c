/*
 * XREFs of RtlUserThreadStart @ 0x18004CC70
 * Callers:
 *     <none>
 * Callees:
 *     RtlExitUserThread @ 0x18004EC30 (RtlExitUserThread.c)
 *     NtQueryInformationProcess @ 0x18009D800 (NtQueryInformationProcess.c)
 *     ZwTerminateProcess @ 0x18009DA60 (ZwTerminateProcess.c)
 *     _guard_dispatch_icall_nop @ 0x1800A1000 (_guard_dispatch_icall_nop.c)
 *     RtlUnhandledExceptionFilter2 @ 0x180100800 (RtlUnhandledExceptionFilter2.c)
 *     RtlRaiseStatus @ 0x180102540 (RtlRaiseStatus.c)
 */

__int64 __fastcall RtlUserThreadStart(__int64 (__fastcall *a1)(__int64), __int64 a2)
{
  unsigned int v3; // eax

  if ( !Kernel32ThreadInitThunkFunction )
  {
    v3 = a1(a2);
    RtlExitUserThread(v3);
  }
  return Kernel32ThreadInitThunkFunction(0LL, a1, a2, a1);
}
