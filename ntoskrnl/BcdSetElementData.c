/*
 * XREFs of BcdSetElementData @ 0x140A59BF0
 * Callers:
 *     PopAdaptivePersistSystemInitatedRebootState @ 0x14059B9D8 (PopAdaptivePersistSystemInitatedRebootState.c)
 *     WheaPersistBadPageToBcd @ 0x14060F9E0 (WheaPersistBadPageToBcd.c)
 * Callees:
 *     BcdSetElementDataWithFlags @ 0x14082D894 (BcdSetElementDataWithFlags.c)
 */

__int64 __fastcall BcdSetElementData(void *a1, unsigned int a2, __int64 a3, unsigned int a4)
{
  return BcdSetElementDataWithFlags(a1, a2, a3, a3, a4);
}
