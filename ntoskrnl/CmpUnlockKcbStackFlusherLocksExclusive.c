/*
 * XREFs of CmpUnlockKcbStackFlusherLocksExclusive @ 0x140613F14
 * Callers:
 *     CmSaveKey @ 0x140A08D50 (CmSaveKey.c)
 * Callees:
 *     CmpGetKcbAtLayerHeight @ 0x1407AF600 (CmpGetKcbAtLayerHeight.c)
 *     HvUnlockHiveFlusherExclusive @ 0x140AF20B4 (HvUnlockHiveFlusherExclusive.c)
 */

void __fastcall CmpUnlockKcbStackFlusherLocksExclusive(__int64 a1)
{
  __int16 i; // bx
  __int64 KcbAtLayerHeight; // rax

  for ( i = *(_WORD *)(a1 + 2); i >= 0; --i )
  {
    KcbAtLayerHeight = CmpGetKcbAtLayerHeight(a1);
    HvUnlockHiveFlusherExclusive(*(_QWORD *)(KcbAtLayerHeight + 32));
  }
}
