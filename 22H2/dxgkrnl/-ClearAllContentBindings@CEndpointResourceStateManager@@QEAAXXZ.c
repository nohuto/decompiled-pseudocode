/*
 * XREFs of ?ClearAllContentBindings@CEndpointResourceStateManager@@QEAAXXZ @ 0x1C0086274
 * Callers:
 *     ?ProcessDiscardedProducerPresentUpdate@CFlipManager@@QEAAXPEAVCFlipPresentUpdate@@@Z @ 0x1C0084CDC (-ProcessDiscardedProducerPresentUpdate@CFlipManager@@QEAAXPEAVCFlipPresentUpdate@@@Z.c)
 *     ?ProcessPendingProducerPresentUpdate@CFlipManager@@QEAAXPEAVCFlipPresentUpdate@@@Z @ 0x1C0084D44 (-ProcessPendingProducerPresentUpdate@CFlipManager@@QEAAXPEAVCFlipPresentUpdate@@@Z.c)
 * Callees:
 *     ?SetBoundBuffer@CContentResourceState@@QEAAXPEAVCPoolBufferResource@@@Z @ 0x1C0088958 (-SetBoundBuffer@CContentResourceState@@QEAAXPEAVCPoolBufferResource@@@Z.c)
 *     ?SetBoundPropertySet@CContentResourceState@@QEAAXPEAVCFlipPropertySet@@@Z @ 0x1C00889B0 (-SetBoundPropertySet@CContentResourceState@@QEAAXPEAVCFlipPropertySet@@@Z.c)
 */

void __fastcall CEndpointResourceStateManager::ClearAllContentBindings(CEndpointResourceStateManager *this)
{
  char *v1; // rsi
  _QWORD *i; // rdi

  v1 = (char *)this + 16;
  for ( i = (_QWORD *)*((_QWORD *)this + 2); i != (_QWORD *)v1; i = (_QWORD *)*i )
  {
    CContentResourceState::SetBoundBuffer(
      (CContentResourceState *)((unsigned __int64)(i - 1) & -(__int64)(i != 0LL)),
      0LL);
    CContentResourceState::SetBoundPropertySet(
      (CContentResourceState *)((unsigned __int64)(i - 1) & -(__int64)(i != 0LL)),
      0LL);
  }
}
