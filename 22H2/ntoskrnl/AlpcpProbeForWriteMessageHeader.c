/*
 * XREFs of AlpcpProbeForWriteMessageHeader @ 0x14071BFD8
 * Callers:
 *     AlpcpProcessConnectionRequest @ 0x140715C44 (AlpcpProcessConnectionRequest.c)
 *     NtRequestWaitReplyPort @ 0x14071B560 (NtRequestWaitReplyPort.c)
 *     NtReplyWaitReceivePortEx @ 0x14071BAA0 (NtReplyWaitReceivePortEx.c)
 *     AlpcpReceiveLegacyMessage @ 0x14071BC00 (AlpcpReceiveLegacyMessage.c)
 *     NtReplyWaitReplyPort @ 0x1409787F0 (NtReplyWaitReplyPort.c)
 * Callees:
 *     ExRaiseDatatypeMisalignment @ 0x140A00C10 (ExRaiseDatatypeMisalignment.c)
 */

char __fastcall AlpcpProbeForWriteMessageHeader(unsigned __int64 a1, int a2)
{
  __int64 v3; // rcx
  char result; // al
  __int64 v5; // rcx

  if ( a2 >= 0 || (a2 & 0x40000000) != 0 )
  {
    if ( (a1 & 3) == 0 )
    {
      v3 = 0x7FFFFFFF0000LL;
      if ( a1 < 0x7FFFFFFF0000LL )
        v3 = a1;
      *(_BYTE *)v3 = *(_BYTE *)v3;
      result = *(_BYTE *)(v3 + 39);
      *(_BYTE *)(v3 + 39) = result;
      return result;
    }
LABEL_6:
    ExRaiseDatatypeMisalignment();
  }
  if ( (a1 & 3) != 0 )
    goto LABEL_6;
  v5 = 0x7FFFFFFF0000LL;
  if ( a1 < 0x7FFFFFFF0000LL )
    v5 = a1;
  *(_BYTE *)v5 = *(_BYTE *)v5;
  result = *(_BYTE *)(v5 + 23);
  *(_BYTE *)(v5 + 23) = result;
  return result;
}
