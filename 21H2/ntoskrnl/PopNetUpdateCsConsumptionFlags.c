/*
 * XREFs of PopNetUpdateCsConsumptionFlags @ 0x1407CD6B8
 * Callers:
 *     PopNetEvaluationWorkerCallback @ 0x1403CB7C0 (PopNetEvaluationWorkerCallback.c)
 *     PopPdcCsDeviceNotification @ 0x1408EFF84 (PopPdcCsDeviceNotification.c)
 * Callees:
 *     <none>
 */

bool PopNetUpdateCsConsumptionFlags()
{
  bool result; // al

  if ( qword_140C4FF48 )
  {
    if ( (byte_140C50001 & 1) == 0 )
    {
      result = PopNetCompliantNicCount != 0;
      byte_140C50001 = (PopNetCompliantNicCount != 0) | byte_140C50001 & 0xFE;
    }
  }
  return result;
}
