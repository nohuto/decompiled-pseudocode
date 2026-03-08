/*
 * XREFs of ?GetProcessor@CMouseSensor@@EEAAPEAVCBaseProcessor@@XZ @ 0x1C00A7250
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
    return (struct CBaseProcessor *)*((_QWORD *)this + 234);
}
