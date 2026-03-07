const struct tagHIDDESC *__fastcall Rim::RimBackedDeviceBase::GetHidDesc(Rim::RimBackedDeviceBase *this)
{
  const struct tagHIDDESC *result; // rax

  result = (const struct tagHIDDESC *)*((_QWORD *)this + 2);
  if ( result )
    return (const struct tagHIDDESC *)*((_QWORD *)result + 66);
  return result;
}
