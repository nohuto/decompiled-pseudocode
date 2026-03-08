/*
 * XREFs of ?Reclaim@FxNPagedLookasideList@@MEAAXPEAVFxMemoryBufferFromLookaside@@@Z @ 0x1C000E210
 * Callers:
 *     <none>
 * Callees:
 *     FxFreeToNPagedLookasideList @ 0x1C000C8F8 (FxFreeToNPagedLookasideList.c)
 *     ?_CleanupPointer@FxObject@@SAPEAUFX_POOL_HEADER@@PEAU_FX_DRIVER_GLOBALS@@PEAV1@@Z @ 0x1C000DB4A (-_CleanupPointer@FxObject@@SAPEAUFX_POOL_HEADER@@PEAU_FX_DRIVER_GLOBALS@@PEAV1@@Z.c)
 */

void __fastcall FxNPagedLookasideList::Reclaim(FxNPagedLookasideList *this, FxMemoryBufferFromLookaside *Memory)
{
  _SLIST_ENTRY **v3; // rax

  v3 = (_SLIST_ENTRY **)FxObject::_CleanupPointer(this->m_Globals, Memory);
  FxFreeToNPagedLookasideList((_PAGED_LOOKASIDE_LIST *)&this->m_ObjectLookaside, *v3);
}
