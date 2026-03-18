/*
 * XREFs of ?GetProcessor@CMouseSensor@@EEAAPEAVCBaseProcessor@@XZ @ 0x1C0093850
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct CBaseProcessor *__fastcall CMouseSensor::GetProcessor(CMouseSensor *this)
{
  if ( gbInMitRitHandOff )
    return 0LL;
  else
    return (struct CBaseProcessor *)*((_QWORD *)this + 223);
}
