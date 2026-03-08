/*
 * XREFs of ?GetDispatchersName@CMouseSensor@@EEAAXPEAW4DispatcherHandleName@CRIMBase@@PEAI@Z @ 0x1C00D3E90
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
  *a3 = 10;
  *(_OWORD *)a2 = *(_OWORD *)&CMouseSensor::dispatcherObjects;
  *((_OWORD *)a2 + 1) = xmmword_1C0288D48;
  *((_QWORD *)a2 + 4) = 0x110000000ELL;
}
