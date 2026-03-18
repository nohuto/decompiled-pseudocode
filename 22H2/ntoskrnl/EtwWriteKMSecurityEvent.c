/*
 * XREFs of EtwWriteKMSecurityEvent @ 0x140399294
 * Callers:
 *     AdtpWriteToEtwEx @ 0x14066FBB0 (AdtpWriteToEtwEx.c)
 *     AdtpWriteToEtw @ 0x14083EAE0 (AdtpWriteToEtw.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14022D390 (PsGetCurrentServerSiloGlobals.c)
 *     EtwpEventWriteFull @ 0x140258450 (EtwpEventWriteFull.c)
 */

__int64 EtwWriteKMSecurityEvent()
{
  _QWORD *CurrentServerSiloGlobals; // rax
  unsigned int v1; // r8d
  __int64 v2; // r9
  __int64 v3; // r10

  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  return EtwpEventWriteFull(
           (_QWORD *)(CurrentServerSiloGlobals[108] + 24LL),
           *(_BYTE *)(CurrentServerSiloGlobals[108] + 4064LL),
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
