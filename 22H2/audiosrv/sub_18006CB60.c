/*
 * XREFs of sub_18006CB60 @ 0x18006CB60
 * Callers:
 *     <none>
 * Callees:
 *     sub_18006CC20 @ 0x18006CC20 (sub_18006CC20.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

BOOLEAN sub_18006CB60()
{
  BOOLEAN (*RtlDllShutdownInProgress)(void); // rax
  char v1; // bl
  HMODULE v2; // rax

  RtlDllShutdownInProgress = (BOOLEAN (*)(void))qword_18019E3E0;
  v1 = 0;
  if ( qword_18019E3E0 )
    return RtlDllShutdownInProgress();
  v2 = (HMODULE)sub_18006CC20();
  RtlDllShutdownInProgress = (BOOLEAN (*)(void))GetProcAddress(v2, "RtlDllShutdownInProgress");
  qword_18019E3E0 = (__int64)RtlDllShutdownInProgress;
  if ( RtlDllShutdownInProgress )
    return RtlDllShutdownInProgress();
  return v1;
}
