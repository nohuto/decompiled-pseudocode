/*
 * XREFs of ?IsIndependentInputWindow@CInputDest@@QEBA_NXZ @ 0x1C00AA1E8
 * Callers:
 *     ?DoesBelongToForeground@CInputDest@@QEBA_NW4ForegroundCheck@1@@Z @ 0x1C0044428 (-DoesBelongToForeground@CInputDest@@QEBA_NW4ForegroundCheck@1@@Z.c)
 *     ?DoesBelongToForegroundThread@CInputDest@@QEBA_NW4ForegroundCheck@1@@Z @ 0x1C0182D34 (-DoesBelongToForegroundThread@CInputDest@@QEBA_NW4ForegroundCheck@1@@Z.c)
 *     ?HandlePointerNodeWithTarget@CTouchProcessor@@AEAA?AW4PointerNodeWithTargetHandling@1@PEBUCPointerInfoNode@@IPEAU3@@Z @ 0x1C0196258 (-HandlePointerNodeWithTarget@CTouchProcessor@@AEAA-AW4PointerNodeWithTargetHandling@1@PEBUCPoint.c)
 * Callees:
 *     ?IsCompositionInput@CInputDest@@QEBA_NXZ @ 0x1C0044D38 (-IsCompositionInput@CInputDest@@QEBA_NXZ.c)
 *     ?IsMessageOnlyWindow@CInputDest@@AEBA_NXZ @ 0x1C0182EEC (-IsMessageOnlyWindow@CInputDest@@AEBA_NXZ.c)
 */

bool __fastcall CInputDest::IsIndependentInputWindow(CInputDest *this)
{
  char v2; // bl

  v2 = 0;
  if ( CInputDest::IsCompositionInput(this) )
    return CInputDest::IsMessageOnlyWindow(this);
  return v2;
}
