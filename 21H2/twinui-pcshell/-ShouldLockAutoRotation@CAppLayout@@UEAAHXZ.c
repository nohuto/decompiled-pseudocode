/*
 * XREFs of ?ShouldLockAutoRotation@CAppLayout@@UEAAHXZ @ 0x1804F2A80
 * Callers:
 *     <none>
 * Callees:
 *     ?_GetItemCountOfType@CAppLayout@@AEAAIW4APP_LAYOUT_ITEM_TYPE@@@Z @ 0x1804F38EC (-_GetItemCountOfType@CAppLayout@@AEAAIW4APP_LAYOUT_ITEM_TYPE@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
_BOOL8 __fastcall CAppLayout::ShouldLockAutoRotation(RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v2; // rdi
  BOOL v3; // ebx

  v2 = this + 2;
  AcquireSRWLockShared(this + 2);
  v3 = (unsigned int)CAppLayout::_GetItemCountOfType(&this[-5], 5LL) > 1;
  if ( v2 )
    ReleaseSRWLockShared(v2);
  return v3;
}
