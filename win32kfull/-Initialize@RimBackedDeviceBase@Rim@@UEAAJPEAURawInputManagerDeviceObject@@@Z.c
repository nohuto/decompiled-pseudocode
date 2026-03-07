__int64 __fastcall Rim::RimBackedDeviceBase::Initialize(
        Rim::RimBackedDeviceBase *this,
        struct RawInputManagerDeviceObject *a2)
{
  __int64 result; // rax

  result = RawInputManagerDeviceObjectReference(a2);
  if ( (int)result >= 0 )
    *((_QWORD *)this + 2) = a2;
  return result;
}
