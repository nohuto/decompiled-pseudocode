/*
 * XREFs of UsbhFindListPdo @ 0x1C0037880
 * Callers:
 *     Usbh_PdoRemove_PdoEvent @ 0x1C003B22C (Usbh_PdoRemove_PdoEvent.c)
 *     Usbh_PdoSurpriseRemove_PdoEvent @ 0x1C003B488 (Usbh_PdoSurpriseRemove_PdoEvent.c)
 * Callees:
 *     PdoExt @ 0x1C000A1D0 (PdoExt.c)
 *     Log @ 0x1C000F210 (Log.c)
 */

char __fastcall UsbhFindListPdo(__int64 a1, __int64 a2, _QWORD *a3)
{
  _QWORD *i; // r10
  _QWORD *v7; // r10
  __int64 v8; // r9

  PdoExt(a2);
  for ( i = (_QWORD *)*a3; ; i = (_QWORD *)*v7 )
  {
    if ( i == a3 )
      return 0;
    Log(a1, 4, 1685219121, (__int64)(i - 165), 0LL);
    if ( a2 == *(_QWORD *)(v8 + 840) )
      break;
  }
  return 1;
}
