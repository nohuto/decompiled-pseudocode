/*
 * XREFs of VerifierKeDelayExecutionThread @ 0x1409DBAB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     ViKeInjectStatusAlerted @ 0x1409DD068 (ViKeInjectStatusAlerted.c)
 */

__int64 __fastcall VerifierKeDelayExecutionThread(__int64 a1, char a2, __int64 a3)
{
  char v3; // si
  __int64 v6; // rdx
  __int64 v7; // rcx

  v3 = a1;
  LOBYTE(a1) = a2;
  if ( (unsigned int)ViKeInjectStatusAlerted(a1) )
    return 257LL;
  LOBYTE(v6) = a2;
  LOBYTE(v7) = v3;
  return ((__int64 (__fastcall *)(__int64, __int64, __int64))pXdvKeDelayExecutionThread)(v7, v6, a3);
}
