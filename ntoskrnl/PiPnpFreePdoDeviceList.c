/*
 * XREFs of PiPnpFreePdoDeviceList @ 0x1407856D8
 * Callers:
 *     PnpGetSystemPdoList @ 0x140785460 (PnpGetSystemPdoList.c)
 *     PnpFreeSystemPdoList @ 0x1407856C0 (PnpFreeSystemPdoList.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall PiPnpFreePdoDeviceList(PVOID *P)
{
  unsigned int i; // ebx

  if ( P )
  {
    for ( i = 0; i < *(_DWORD *)P; ++i )
      ObfDereferenceObject(P[i + 1]);
    ExFreePoolWithTag(P, 0);
  }
}
