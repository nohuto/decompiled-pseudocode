/*
 * XREFs of ?SupportsAnyPointerType@CInteractionProcessor@@QEBAHXZ @ 0x1801AD494
 * Callers:
 *     ?IsStrictlyHoverPointerSource@CInteraction@@QEBA_NXZ @ 0x1801A159C (-IsStrictlyHoverPointerSource@CInteraction@@QEBA_NXZ.c)
 * Callees:
 *     ?SupportsPointerType@CInteractionProcessor@@QEBAHW4InputType@@W4SupportedTypeOption@@@Z @ 0x1800E9920 (-SupportsPointerType@CInteractionProcessor@@QEBAHW4InputType@@W4SupportedTypeOption@@@Z.c)
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
