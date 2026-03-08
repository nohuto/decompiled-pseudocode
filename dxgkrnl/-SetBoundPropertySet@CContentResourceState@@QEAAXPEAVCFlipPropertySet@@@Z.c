/*
 * XREFs of ?SetBoundPropertySet@CContentResourceState@@QEAAXPEAVCFlipPropertySet@@@Z @ 0x1C0087BF0
 * Callers:
 *     ?SetContent@CFlipManager@@QEAAJ_K0PEAVCFlipPropertySet@@@Z @ 0x1C0084648 (-SetContent@CFlipManager@@QEAAJ_K0PEAVCFlipPropertySet@@@Z.c)
 *     ?ApplyIncrementalUpdate@CEndpointResourceStateManager@@QEAAJPEBVCFlipPresentUpdate@@@Z @ 0x1C00851B4 (-ApplyIncrementalUpdate@CEndpointResourceStateManager@@QEAAJPEBVCFlipPresentUpdate@@@Z.c)
 *     ?ClearAllContentBindings@CEndpointResourceStateManager@@QEAAXXZ @ 0x1C00854B4 (-ClearAllContentBindings@CEndpointResourceStateManager@@QEAAXXZ.c)
 *     ?Remove@CContentResourceState@@UEAAXXZ @ 0x1C0086F70 (-Remove@CContentResourceState@@UEAAXXZ.c)
 *     ??1CContentResourceState@@UEAA@XZ @ 0x1C00878E8 (--1CContentResourceState@@UEAA@XZ.c)
 * Callees:
 *     ?Release@CFlipPropertySetBase@@QEAAKXZ @ 0x1C007F6D4 (-Release@CFlipPropertySetBase@@QEAAKXZ.c)
 */

void __fastcall CContentResourceState::SetBoundPropertySet(CContentResourceState *this, struct CFlipPropertySet *a2)
{
  CFlipPropertySetBase *v4; // rcx

  v4 = (CFlipPropertySetBase *)*((_QWORD *)this + 5);
  if ( v4 != a2 )
  {
    if ( v4 )
      CFlipPropertySetBase::Release(v4);
    *((_QWORD *)this + 5) = a2;
    if ( a2 )
      ++*((_DWORD *)a2 + 2);
    *((_BYTE *)this + 64) |= 1u;
  }
}
