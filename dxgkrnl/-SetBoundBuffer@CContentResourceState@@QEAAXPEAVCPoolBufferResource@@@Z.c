/*
 * XREFs of ?SetBoundBuffer@CContentResourceState@@QEAAXPEAVCPoolBufferResource@@@Z @ 0x1C0087B98
 * Callers:
 *     ?SetContent@CFlipManager@@QEAAJ_K0PEAVCFlipPropertySet@@@Z @ 0x1C0084648 (-SetContent@CFlipManager@@QEAAJ_K0PEAVCFlipPropertySet@@@Z.c)
 *     ?ApplyIncrementalUpdate@CEndpointResourceStateManager@@QEAAJPEBVCFlipPresentUpdate@@@Z @ 0x1C00851B4 (-ApplyIncrementalUpdate@CEndpointResourceStateManager@@QEAAJPEBVCFlipPresentUpdate@@@Z.c)
 *     ?ClearAllContentBindings@CEndpointResourceStateManager@@QEAAXXZ @ 0x1C00854B4 (-ClearAllContentBindings@CEndpointResourceStateManager@@QEAAXXZ.c)
 *     ?Remove@CContentResourceState@@UEAAXXZ @ 0x1C0086F70 (-Remove@CContentResourceState@@UEAAXXZ.c)
 *     ?RemovePoolBufferState@CEndpointResourceStateManager@@QEAAXPEAVCPoolBufferResourceState@@@Z @ 0x1C0087028 (-RemovePoolBufferState@CEndpointResourceStateManager@@QEAAXPEAVCPoolBufferResourceState@@@Z.c)
 *     ??1CContentResourceState@@UEAA@XZ @ 0x1C00878E8 (--1CContentResourceState@@UEAA@XZ.c)
 * Callees:
 *     ?Release@CFlipResource@@QEAAKXZ @ 0x1C00815F8 (-Release@CFlipResource@@QEAAKXZ.c)
 *     ?AddUsageReference@CPoolBufferResource@@QEAAXXZ @ 0x1C0084B2C (-AddUsageReference@CPoolBufferResource@@QEAAXXZ.c)
 *     ?RemoveUsageReference@CPoolBufferResource@@QEAAXXZ @ 0x1C0084EE0 (-RemoveUsageReference@CPoolBufferResource@@QEAAXXZ.c)
 */

void __fastcall CContentResourceState::SetBoundBuffer(CContentResourceState *this, PRKEVENT *a2)
{
  CPoolBufferResource *v4; // rcx

  if ( *((PRKEVENT **)this + 6) != a2 )
  {
    if ( a2 )
    {
      CPoolBufferResource::AddUsageReference(a2);
      ++*((_DWORD *)a2 + 6);
    }
    v4 = (CPoolBufferResource *)*((_QWORD *)this + 6);
    if ( v4 )
    {
      CPoolBufferResource::RemoveUsageReference(v4);
      CFlipResource::Release(*((CFlipResource **)this + 6));
    }
    *((_BYTE *)this + 64) |= 1u;
    *((_QWORD *)this + 6) = a2;
  }
}
