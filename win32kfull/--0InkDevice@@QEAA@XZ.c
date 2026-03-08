/*
 * XREFs of ??0InkDevice@@QEAA@XZ @ 0x1C0245D10
 * Callers:
 *     ?OnDeviceAttached@InkProcessor@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C0240D1C (-OnDeviceAttached@InkProcessor@@QEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 * Callees:
 *     <none>
 */

InkDevice *__fastcall InkDevice::InkDevice(InkDevice *this)
{
  __int64 v2; // rcx
  InkDevice *result; // rax

  *(_QWORD *)this = &Rim::RimBackedDeviceBase::`vftable';
  v2 = (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(SGDGetUserSessionState(this) + 16832));
  if ( !(_DWORD)v2 )
    LODWORD(v2) = _InterlockedIncrement((volatile signed __int32 *)(SGDGetUserSessionState(v2) + 16832));
  *((_DWORD *)this + 2) = v2;
  *((_BYTE *)this + 12) = 0;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 10) = "InkDevice";
  *((_QWORD *)this + 8) = (char *)this + 56;
  *((_QWORD *)this + 7) = (char *)this + 56;
  *(_QWORD *)this = &InkDevice::`vftable'{for `Rim::RimBackedDeviceBase'};
  *((_QWORD *)this + 4) = &InkDevice::`vftable'{for `InkFeedbackProviderBase'};
  *((_DWORD *)this + 18) = 0;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *(_OWORD *)((char *)this + 104) = 0LL;
  *(_OWORD *)((char *)this + 120) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  result = this;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  return result;
}
