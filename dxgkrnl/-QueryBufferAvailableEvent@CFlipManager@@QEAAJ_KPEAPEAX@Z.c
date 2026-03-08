/*
 * XREFs of ?QueryBufferAvailableEvent@CFlipManager@@QEAAJ_KPEAPEAX@Z @ 0x1C0084420
 * Callers:
 *     ?QueryBufferAvailableEvent@FlipManagerObject@@QEAAJ_KPEAPEAX@Z @ 0x1C007F520 (-QueryBufferAvailableEvent@FlipManagerObject@@QEAAJ_KPEAPEAX@Z.c)
 * Callees:
 *     ?FindResourceState@CEndpointResourceStateManager@@AEAAPEAVCFlipResourceState@@_KPEAU_LIST_ENTRY@@@Z @ 0x1C0085680 (-FindResourceState@CEndpointResourceStateManager@@AEAAPEAVCFlipResourceState@@_KPEAU_LIST_ENTRY@.c)
 */

NTSTATUS __fastcall CFlipManager::QueryBufferAvailableEvent(CFlipManager *this, unsigned __int64 a2, void **a3)
{
  struct CFlipResourceState *ResourceState; // rax
  void **Handle; // r11

  ResourceState = CEndpointResourceStateManager::FindResourceState(this, a2, (struct _LIST_ENTRY *)((char *)this + 56));
  if ( ResourceState )
    return ObOpenObjectByPointer(
             *(PVOID *)(*((_QWORD *)ResourceState + 3) + 72LL),
             0,
             0LL,
             0x1F0001u,
             (POBJECT_TYPE)ExEventObjectType,
             1,
             Handle);
  else
    return -1073741811;
}
