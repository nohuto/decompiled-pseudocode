/*
 * XREFs of PopBcdOpen @ 0x14082B4E4
 * Callers:
 *     PopAdaptivePersistSystemInitatedRebootState @ 0x14059B9D8 (PopAdaptivePersistSystemInitatedRebootState.c)
 *     PopAdaptiveInitializeBootContext @ 0x140B5DFE8 (PopAdaptiveInitializeBootContext.c)
 * Callees:
 *     BcdOpenStore @ 0x14082C814 (BcdOpenStore.c)
 */

__int64 __fastcall PopBcdOpen(__int64 a1)
{
  return BcdOpenStore(0LL, 2LL, a1);
}
