/*
 * XREFs of ??_GFlipManagerTokenIFlipInfo@@QEAAPEAXI@Z @ 0x1C0075634
 * Callers:
 *     ??1FlipManagerTokenInitInfo@@QEAA@XZ @ 0x1C00755E4 (--1FlipManagerTokenInitInfo@@QEAA@XZ.c)
 *     ?Discard@CFlipManagerToken@@UEAAXXZ @ 0x1C0076200 (-Discard@CFlipManagerToken@@UEAAXXZ.c)
 *     ?FlipManagerCreateProducerTokenInitInfo@@YAJPEAX_N_KIPEAUFlipPropertyItem@@PEAUFlipManagerTokenInitInfo@@@Z @ 0x1C00811E8 (-FlipManagerCreateProducerTokenInitInfo@@YAJPEAX_N_KIPEAUFlipPropertyItem@@PEAUFlipManagerTokenI.c)
 *     ?PrepareIFlipInfo@CEndpointResourceStateManager@@QEAAJPEAVCFlipPropertySet@@IPEAVCFlipPresentUpdate@@PEAPEAUFlipManagerTokenIFlipInfo@@@Z @ 0x1C0085E84 (-PrepareIFlipInfo@CEndpointResourceStateManager@@QEAAJPEAVCFlipPropertySet@@IPEAVCFlipPresentUpd.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall FlipManagerTokenIFlipInfo::`scalar deleting destructor'(_QWORD *P)
{
  void *v2; // rcx

  v2 = (void *)P[12];
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  ExFreePoolWithTag(P, 0);
  return P;
}
