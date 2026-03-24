/*
 * XREFs of CmpKeyEnumStackGetEntryAtLayerHeight @ 0x14067E028
 * Callers:
 *     CmpKeyEnumStackCleanup @ 0x14067DF40 (CmpKeyEnumStackCleanup.c)
 *     CmpKeyEnumStackReset @ 0x14072A90C (CmpKeyEnumStackReset.c)
 *     CmpKeyEnumStackAdvance @ 0x14072A9E8 (CmpKeyEnumStackAdvance.c)
 *     CmpKeyEnumStackAdvanceInternal @ 0x14072AA7C (CmpKeyEnumStackAdvanceInternal.c)
 *     CmpKeyEnumStackBeginEnumerationForKeyNodeStack @ 0x14072AC48 (CmpKeyEnumStackBeginEnumerationForKeyNodeStack.c)
 *     CmpKeyEnumStackCreateResumeContext @ 0x14087A834 (CmpKeyEnumStackCreateResumeContext.c)
 *     CmpKeyEnumStackNotifyPromotion @ 0x14087AC2C (CmpKeyEnumStackNotifyPromotion.c)
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
