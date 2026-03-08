/*
 * XREFs of PopBcdClose @ 0x14082B524
 * Callers:
 *     PopAdaptivePersistSystemInitatedRebootState @ 0x14059B9D8 (PopAdaptivePersistSystemInitatedRebootState.c)
 *     PopAdaptiveInitializeBootContext @ 0x140B5DFE8 (PopAdaptiveInitializeBootContext.c)
 * Callees:
 *     BcdCloseStore @ 0x14082C570 (BcdCloseStore.c)
 */

__int64 __fastcall PopBcdClose(__int64 a1)
{
  return BcdCloseStore(a1);
}
