/*
 * XREFs of ?FindInkDeviceByRimDeviceObject@InkProcessor@@AEBAPEAVInkDevice@@PEBURawInputManagerDeviceObject@@@Z @ 0x1C024C754
 * Callers:
 *     ?OnDeviceClosed@InkProcessor@@QEAAXPEAURawInputManagerDeviceObject@@@Z @ 0x1C024CA44 (-OnDeviceClosed@InkProcessor@@QEAAXPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?OnDeviceOpened@InkProcessor@@QEAAXPEAURawInputManagerDeviceObject@@@Z @ 0x1C024CB60 (-OnDeviceOpened@InkProcessor@@QEAAXPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?OnDeviceRemoved@InkProcessor@@QEAAXPEAURawInputManagerDeviceObject@@@Z @ 0x1C024CC7C (-OnDeviceRemoved@InkProcessor@@QEAAXPEAURawInputManagerDeviceObject@@@Z.c)
 * Callees:
 *     <none>
 */

struct InkDevice *__fastcall InkProcessor::FindInkDeviceByRimDeviceObject(
        InkProcessor *this,
        const struct RawInputManagerDeviceObject *a2)
{
  char *v2; // r8
  _QWORD *i; // rcx

  v2 = (char *)this + 16;
  for ( i = (_QWORD *)*((_QWORD *)this + 2); ; i = (_QWORD *)*i )
  {
    if ( i == (_QWORD *)v2 )
      return 0LL;
    if ( (const struct RawInputManagerDeviceObject *)*(i - 9) == a2 )
      break;
  }
  return (struct InkDevice *)(i - 11);
}
