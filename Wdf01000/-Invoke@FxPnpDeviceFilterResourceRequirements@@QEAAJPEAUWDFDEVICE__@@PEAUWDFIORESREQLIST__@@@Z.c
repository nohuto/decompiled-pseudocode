int (__fastcall *__fastcall FxPnpDeviceFilterResourceRequirements::Invoke(
        FxPnpDeviceFilterResourceRequirements *this,
        WDFDEVICE__ *Device,
        WDFIORESREQLIST__ *Collection))(WDFDEVICE__ *, WDFIORESREQLIST__ *)
{
  int (__fastcall *result)(WDFDEVICE__ *, WDFIORESREQLIST__ *); // rax

  result = this->m_Method;
  if ( this->m_Method )
    return (int (__fastcall *)(WDFDEVICE__ *, WDFIORESREQLIST__ *))((__int64 (__fastcall *)(WDFDEVICE__ *, WDFIORESREQLIST__ *))result)(
                                                                     Device,
                                                                     Collection);
  return result;
}
