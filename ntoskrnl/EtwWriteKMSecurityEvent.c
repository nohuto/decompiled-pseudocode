/*
 * XREFs of EtwWriteKMSecurityEvent @ 0x140395834
 * Callers:
 *     AdtpWriteToEtwEx @ 0x14066D560 (AdtpWriteToEtwEx.c)
 *     AdtpWriteToEtw @ 0x14083D7F0 (AdtpWriteToEtw.c)
 * Callees:
 *     EtwpEventWriteFull @ 0x1402319C0 (EtwpEventWriteFull.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140267B30 (PsGetCurrentServerSiloGlobals.c)
 */

__int64 EtwWriteKMSecurityEvent()
{
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  unsigned int v1; // r8d
  __int64 v2; // r9
  __int64 v3; // r10

  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  return EtwpEventWriteFull(
           (__int64)&CurrentServerSiloGlobals[54].Flink[1].Blink,
           (unsigned __int8)CurrentServerSiloGlobals[54].Flink[254].Flink,
           0,
           0,
           v3,
           0,
           0,
           0LL,
           0LL,
           v1,
           v2,
           0LL,
           0LL,
           0LL,
           0,
           0LL,
           0LL);
}
