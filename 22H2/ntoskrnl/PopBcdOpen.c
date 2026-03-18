/*
 * XREFs of PopBcdOpen @ 0x1408043A0
 * Callers:
 *     PopAdaptivePersistSystemInitatedRebootState @ 0x14059DEF8 (PopAdaptivePersistSystemInitatedRebootState.c)
 *     PopAdaptiveInitializeBootContext @ 0x140B3963C (PopAdaptiveInitializeBootContext.c)
 * Callees:
 *     BcdOpenStore @ 0x14080561C (BcdOpenStore.c)
 */

__int64 __fastcall PopBcdOpen(__int64 a1)
{
  return BcdOpenStore(0LL, 2LL, a1);
}
