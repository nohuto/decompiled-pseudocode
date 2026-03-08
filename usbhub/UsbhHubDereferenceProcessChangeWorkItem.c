/*
 * XREFs of UsbhHubDereferenceProcessChangeWorkItem @ 0x1C0033D10
 * Callers:
 *     Usbh_PCE_Close_Action @ 0x1C00357E8 (Usbh_PCE_Close_Action.c)
 * Callees:
 *     <none>
 */

LONG __fastcall UsbhHubDereferenceProcessChangeWorkItem(__int64 a1, __int64 a2)
{
  LONG result; // eax

  result = _InterlockedExchangeAdd((volatile signed __int32 *)(a2 + 2440), 0xFFFFFFFF);
  if ( result == 1 )
    return KeSetEvent((PRKEVENT)(a2 + 2416), 0, 0);
  return result;
}
