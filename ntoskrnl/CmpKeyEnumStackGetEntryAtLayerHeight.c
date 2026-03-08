/*
 * XREFs of CmpKeyEnumStackGetEntryAtLayerHeight @ 0x140A213F8
 * Callers:
 *     CmpKeyEnumStackAdvance @ 0x140A209E8 (CmpKeyEnumStackAdvance.c)
 *     CmpKeyEnumStackAdvanceInternal @ 0x140A20A7C (CmpKeyEnumStackAdvanceInternal.c)
 *     CmpKeyEnumStackBeginEnumerationForKeyNodeStack @ 0x140A20C04 (CmpKeyEnumStackBeginEnumerationForKeyNodeStack.c)
 *     CmpKeyEnumStackCleanup @ 0x140A20CD0 (CmpKeyEnumStackCleanup.c)
 *     CmpKeyEnumStackCreateResumeContext @ 0x140A20D38 (CmpKeyEnumStackCreateResumeContext.c)
 *     CmpKeyEnumStackNotifyPromotion @ 0x140A21474 (CmpKeyEnumStackNotifyPromotion.c)
 *     CmpKeyEnumStackReset @ 0x140A2152C (CmpKeyEnumStackReset.c)
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
