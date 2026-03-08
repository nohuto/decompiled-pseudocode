/*
 * XREFs of ?Remove@CContentResourceState@@UEAAXXZ @ 0x1C0086F70
 * Callers:
 *     <none>
 * Callees:
 *     ?Remove@CFlipResourceState@@UEAAXXZ @ 0x1C0084EB0 (-Remove@CFlipResourceState@@UEAAXXZ.c)
 *     ?SetBoundBuffer@CContentResourceState@@QEAAXPEAVCPoolBufferResource@@@Z @ 0x1C0087B98 (-SetBoundBuffer@CContentResourceState@@QEAAXPEAVCPoolBufferResource@@@Z.c)
 *     ?SetBoundPropertySet@CContentResourceState@@QEAAXPEAVCFlipPropertySet@@@Z @ 0x1C0087BF0 (-SetBoundPropertySet@CContentResourceState@@QEAAXPEAVCFlipPropertySet@@@Z.c)
 */

void __fastcall CContentResourceState::Remove(CContentResourceState *this)
{
  CContentResourceState::SetBoundBuffer(this, 0LL);
  CContentResourceState::SetBoundPropertySet(this, 0LL);
  *((_BYTE *)this + 64) &= ~1u;
  CFlipResourceState::Remove(this);
}
