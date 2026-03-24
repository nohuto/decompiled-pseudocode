/*
 * XREFs of ?GetDispatchersName@CMouseSensor@@EEAAXPEAW4DispatcherHandleName@CRIMBase@@PEAI@Z @ 0x1C00B8400
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CMouseSensor::GetDispatchersName(
        CMouseSensor *this,
        enum CRIMBase::DispatcherHandleName *a2,
        unsigned int *a3)
{
  *a3 = 8;
  *(_OWORD *)a2 = *(_OWORD *)&CMouseSensor::dispatcherObjects;
  *((_OWORD *)a2 + 1) = xmmword_1C020F638;
}
