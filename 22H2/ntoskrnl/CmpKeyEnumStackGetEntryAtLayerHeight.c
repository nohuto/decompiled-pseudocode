/*
 * XREFs of CmpKeyEnumStackGetEntryAtLayerHeight @ 0x140A24158
 * Callers:
 *     CmpKeyEnumStackAdvance @ 0x140A23748 (CmpKeyEnumStackAdvance.c)
 *     CmpKeyEnumStackAdvanceInternal @ 0x140A237DC (CmpKeyEnumStackAdvanceInternal.c)
 *     CmpKeyEnumStackBeginEnumerationForKeyNodeStack @ 0x140A23964 (CmpKeyEnumStackBeginEnumerationForKeyNodeStack.c)
 *     CmpKeyEnumStackCleanup @ 0x140A23A30 (CmpKeyEnumStackCleanup.c)
 *     CmpKeyEnumStackCreateResumeContext @ 0x140A23A98 (CmpKeyEnumStackCreateResumeContext.c)
 *     CmpKeyEnumStackNotifyPromotion @ 0x140A241D4 (CmpKeyEnumStackNotifyPromotion.c)
 *     CmpKeyEnumStackReset @ 0x140A2428C (CmpKeyEnumStackReset.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall CmpKeyEnumStackGetEntryAtLayerHeight(__int64 a1, __int16 a2)
{
  __int64 v2; // rax

  v2 = (unsigned int)a2;
  if ( a2 >= 2 )
    return *(_QWORD *)(a1 + 344) + ((unsigned __int64)(unsigned int)(v2 - 2) << 7);
  else
    return a1 + (v2 << 7) + 88;
}
