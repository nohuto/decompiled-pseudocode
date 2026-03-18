/*
 * XREFs of VerifierKeDelayExecutionThread @ 0x140A95DA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     ViKeInjectStatusAlerted @ 0x140A7F778 (ViKeInjectStatusAlerted.c)
 */

__int64 __fastcall VerifierKeDelayExecutionThread(char a1, char a2, __int64 a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx

  if ( ViKeInjectStatusAlerted(a2) )
    return 257LL;
  LOBYTE(v6) = a2;
  LOBYTE(v7) = a1;
  return ((__int64 (__fastcall *)(__int64, __int64, __int64))pXdvKeDelayExecutionThread)(v7, v6, a3);
}
