/*
 * XREFs of ?Initialize@RimBackedDeviceBase@Rim@@UEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C022AA90
 * Callers:
 *     ?Initialize@InkDevice@@UEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C0246650 (-Initialize@InkDevice@@UEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 * Callees:
 *     <none>
 */

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
