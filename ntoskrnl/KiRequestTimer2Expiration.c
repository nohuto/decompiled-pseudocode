/*
 * XREFs of KiRequestTimer2Expiration @ 0x1402B78B8
 * Callers:
 *     KeSetTimer2 @ 0x14024EB20 (KeSetTimer2.c)
 *     KiAdjustTimer2DueTimes @ 0x14039680C (KiAdjustTimer2DueTimes.c)
 * Callees:
 *     KiSetDpcRequestFlag @ 0x1402B791C (KiSetDpcRequestFlag.c)
 *     KiSendSoftwareInterrupt @ 0x1402B7A00 (KiSendSoftwareInterrupt.c)
 *     KiRequestSoftwareInterrupt @ 0x1402B7A24 (KiRequestSoftwareInterrupt.c)
 */

__int64 KiRequestTimer2Expiration()
{
  unsigned int v0; // edi
  struct _KPRCB *v1; // rbx
  __int64 result; // rax
  __int64 v3; // rdx

  v0 = KiClockTimerOwner;
  v1 = (struct _KPRCB *)KiProcessorBlock[(unsigned int)KiClockTimerOwner];
  result = KiSetDpcRequestFlag(&v1->13244, 8LL);
  if ( (result & 0xA9) == 0 )
  {
    LOBYTE(v3) = 2;
    if ( KeGetCurrentPrcb() == v1 )
      return KiRequestSoftwareInterrupt(v1, v3);
    else
      return KiSendSoftwareInterrupt(v0, v3);
  }
  return result;
}
