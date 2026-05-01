/*
 * XREFs of ?GetItemCountWithFlags@CAppLayout@@UEAAIW4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@@Z @ 0x1804F15A0
 * Callers:
 *     <none>
 * Callees:
 *     ?_GetItemCountWithFlags@CAppLayout@@AEAAIW4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@@Z @ 0x1804F35D4 (-_GetItemCountWithFlags@CAppLayout@@AEAAIW4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAppLayout::GetItemCountWithFlags(RTL_SRWLOCK *a1, unsigned int a2)
{
  RTL_SRWLOCK *v4; // rsi
  unsigned int ItemCountWithFlags; // ebx

  v4 = a1 + 2;
  AcquireSRWLockShared(a1 + 2);
  ItemCountWithFlags = CAppLayout::_GetItemCountWithFlags(&a1[-5], a2);
  if ( v4 )
    ReleaseSRWLockShared(v4);
  return ItemCountWithFlags;
}
