/*
 * XREFs of ?GetInterfaceFromNumber@FxUsbDevice@@IEAAPEAVFxUsbInterface@@E@Z @ 0x1C005D5C4
 * Callers:
 *     ?SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z @ 0x1C005DC2C (-SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z.c)
 * Callees:
 *     <none>
 */

FxUsbInterface *__fastcall FxUsbDevice::GetInterfaceFromNumber(FxUsbDevice *this, unsigned __int8 InterfaceNumber)
{
  __int64 v2; // r8
  FxUsbInterface *result; // rax

  v2 = 0LL;
  if ( !this->m_NumInterfaces )
    return 0LL;
  while ( 1 )
  {
    result = this->m_Interfaces[v2];
    if ( result->m_InterfaceNumber == InterfaceNumber )
      break;
    v2 = (unsigned int)(v2 + 1);
    if ( (unsigned int)v2 >= this->m_NumInterfaces )
      return 0LL;
  }
  return result;
}
