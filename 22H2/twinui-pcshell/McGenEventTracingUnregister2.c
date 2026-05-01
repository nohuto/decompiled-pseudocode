/*
 * XREFs of McGenEventTracingUnregister2 @ 0x18014E394
 * Callers:
 *     AutoUnregisterMicrosoft_Windows_Deplorch @ 0x18014E010 (AutoUnregisterMicrosoft_Windows_Deplorch.c)
 * Callees:
 *     memset_0 @ 0x180090958 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

__int64 McGenEventTracingUnregister2()
{
  ULONG v0; // ebx

  if ( !McGenTracingSupportInit || !Microsoft_Windows_Deplorch_Context )
    return 0LL;
  if ( McGenPreVista )
  {
    v0 = UnregisterTraceGuids(Microsoft_Windows_Deplorch_Context);
    dword_180647950 = 0;
    byte_180647958 = 0;
    qword_180647938 = 0LL;
    if ( word_18064795A )
      memset_0(off_180647960, 0, 4LL * (((unsigned __int16)word_18064795A - 1) / 32 + 1));
  }
  else
  {
    v0 = ((__int64 (*)(void))PfnEventUnregister)();
  }
  Microsoft_Windows_Deplorch_Context = 0LL;
  return v0;
}
