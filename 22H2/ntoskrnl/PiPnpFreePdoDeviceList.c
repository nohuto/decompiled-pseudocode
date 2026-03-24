/*
 * XREFs of PiPnpFreePdoDeviceList @ 0x14069B4F8
 * Callers:
 *     PnpGetSystemPdoList @ 0x14069B440 (PnpGetSystemPdoList.c)
 *     PnpFreeSystemPdoList @ 0x14069B4E0 (PnpFreeSystemPdoList.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

void __fastcall PiPnpFreePdoDeviceList(PADAPTER_OBJECT *P)
{
  unsigned int i; // ebx

  if ( P )
  {
    for ( i = 0; i < *(_DWORD *)P; ++i )
      HalPutDmaAdapter(P[i + 1]);
    ExFreePoolWithTag(P, 0);
  }
}
