/*
 * XREFs of ?Remove@CContentResourceState@@UEAAXXZ @ 0x1C0087D30
 * Callers:
 *     <none>
 * Callees:
 *     ?Remove@CFlipResourceState@@UEAAXXZ @ 0x1C0085C70 (-Remove@CFlipResourceState@@UEAAXXZ.c)
 *     ?SetBoundBuffer@CContentResourceState@@QEAAXPEAVCPoolBufferResource@@@Z @ 0x1C0088958 (-SetBoundBuffer@CContentResourceState@@QEAAXPEAVCPoolBufferResource@@@Z.c)
 *     ?SetBoundPropertySet@CContentResourceState@@QEAAXPEAVCFlipPropertySet@@@Z @ 0x1C00889B0 (-SetBoundPropertySet@CContentResourceState@@QEAAXPEAVCFlipPropertySet@@@Z.c)
 */

void __fastcall CContentResourceState::Remove(CContentResourceState *this)
{
  CContentResourceState::SetBoundBuffer(this, 0LL);
  CContentResourceState::SetBoundPropertySet(this, 0LL);
  *((_BYTE *)this + 64) &= ~1u;
  CFlipResourceState::Remove(this);
}
