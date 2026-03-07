CInputGlobals *__fastcall CInputGlobals::CInputGlobals(CInputGlobals *this)
{
  *((_QWORD *)this + 2) = 0LL;
  *(_OWORD *)((char *)this + 24) = 0LL;
  *(_OWORD *)((char *)this + 40) = 0LL;
  *(_OWORD *)((char *)this + 56) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_DWORD *)this + 26) = 0;
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_DWORD *)this + 20) = 0;
  *((_QWORD *)this + 11) = 0LL;
  *((_WORD *)this + 42) = 0;
  *((_WORD *)this + 48) = 0;
  *((_BYTE *)this + 98) = 0;
  *((_DWORD *)this + 25) = 30;
  if ( qword_1C02D7F30 && (int)qword_1C02D7F30() >= 0 )
    CInputGlobals::UpdateWakeOnInputDeviceTypesFromRegistry(this);
  if ( qword_1C02D7F40 && (int)qword_1C02D7F40() >= 0 )
    *((_DWORD *)this + 26) = ApiSetGetUndimSourceInputTypeMask();
  return this;
}
