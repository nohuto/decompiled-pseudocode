/*
 * XREFs of TpSetPoolMaxThreadsSoftLimit @ 0x1800819B0
 * Callers:
 *     TppPoolpReferenceGlobalPool @ 0x1800137E4 (TppPoolpReferenceGlobalPool.c)
 *     TpSetDefaultPoolMaxThreads @ 0x180111C30 (TpSetDefaultPoolMaxThreads.c)
 * Callees:
 *     NtSetInformationWorkerFactory @ 0x1800A08F0 (NtSetInformationWorkerFactory.c)
 *     TppRaiseInvalidParameter @ 0x18011235C (TppRaiseInvalidParameter.c)
 */

__int64 __fastcall TpSetPoolMaxThreadsSoftLimit(__int64 a1, _PEB_LDR_DATA *Ldr, __int64 a3, __int64 a4)
{
  int v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = (int)Ldr;
  if ( !a1 )
    return TppRaiseInvalidParameter(a1, Ldr, a3, a4);
  if ( (int)Ldr < 0 )
    return TppRaiseInvalidParameter(a1, Ldr, a3, a4);
  Ldr = NtCurrentPeb()->Ldr;
  if ( Ldr->ShutdownInProgress )
    return TppRaiseInvalidParameter(a1, Ldr, a3, a4);
  else
    return NtSetInformationWorkerFactory(*(_QWORD *)(a1 + 56), 14LL, &v5);
}
