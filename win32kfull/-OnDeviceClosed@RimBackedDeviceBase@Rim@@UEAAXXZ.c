/*
 * XREFs of ?OnDeviceClosed@RimBackedDeviceBase@Rim@@UEAAXXZ @ 0x1C022AAD0
 * Callers:
 *     ?OnDeviceClosed@InkProcessor@@QEAAXPEAURawInputManagerDeviceObject@@@Z @ 0x1C0240F84 (-OnDeviceClosed@InkProcessor@@QEAAXPEAURawInputManagerDeviceObject@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall Rim::RimBackedDeviceBase::OnDeviceClosed(PVOID *this)
{
  if ( *((_BYTE *)this + 12) )
  {
    ObfDereferenceObject(this[3]);
    this[3] = 0LL;
    *((_BYTE *)this + 12) = 0;
  }
}
