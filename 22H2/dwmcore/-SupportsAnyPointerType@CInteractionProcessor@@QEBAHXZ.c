/*
 * XREFs of ?SupportsAnyPointerType@CInteractionProcessor@@QEBAHXZ @ 0x18022F31C
 * Callers:
 *     ?IsStrictlyHoverPointerSource@CInteraction@@QEBA_NXZ @ 0x180234800 (-IsStrictlyHoverPointerSource@CInteraction@@QEBA_NXZ.c)
 * Callees:
 *     ?SupportsPointerType@CInteractionProcessor@@QEBAHW4InputType@@W4SupportedTypeOption@@@Z @ 0x1800C98F0 (-SupportsPointerType@CInteractionProcessor@@QEBAHW4InputType@@W4SupportedTypeOption@@@Z.c)
 */

__int64 __fastcall CInteractionProcessor::SupportsAnyPointerType(CInteractionProcessor *this)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( (unsigned int)CInteractionProcessor::SupportsPointerType(this, 2, 0)
    || (unsigned int)CInteractionProcessor::SupportsPointerType(this, 4, 0)
    || (unsigned int)CInteractionProcessor::SupportsPointerType(this, 3, 0)
    || (unsigned int)CInteractionProcessor::SupportsPointerType(this, 5, 0)
    || (unsigned int)CInteractionProcessor::SupportsPointerType(this, 6, 0) )
  {
    return 1;
  }
  return v2;
}
