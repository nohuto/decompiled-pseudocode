void __fastcall CKeyboardSensor::GetDispatchersName(
        CKeyboardSensor *this,
        enum CRIMBase::DispatcherHandleName *a2,
        unsigned int *a3)
{
  *a3 = 7;
  *(_OWORD *)a2 = xmmword_1C028A1C0;
  *((_QWORD *)a2 + 2) = 0xA00000009LL;
  *((_DWORD *)a2 + 6) = 12;
}
