/*
 * XREFs of BiSanitizeHandle @ 0x1402FDDE8
 * Callers:
 *     BiCloseStore @ 0x14082BD84 (BiCloseStore.c)
 *     BiDeleteKey @ 0x14082CF64 (BiDeleteKey.c)
 *     BiSetRegistryValue @ 0x14082D198 (BiSetRegistryValue.c)
 *     BiEnumerateSubKeys @ 0x14082D288 (BiEnumerateSubKeys.c)
 *     BiCreateKey @ 0x14082D580 (BiCreateKey.c)
 *     BiOpenKey @ 0x14082E7AC (BiOpenKey.c)
 *     BiGetRegistryValue @ 0x14082EB20 (BiGetRegistryValue.c)
 *     BiGetKeyName @ 0x14082EEA0 (BiGetKeyName.c)
 *     BiDeleteRegistryValue @ 0x14083089C (BiDeleteRegistryValue.c)
 *     BcdFlushStore @ 0x140A595E4 (BcdFlushStore.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall BiSanitizeHandle(__int64 a1)
{
  return a1 & 0xFFFFFFFFFFFFFFFDuLL;
}
