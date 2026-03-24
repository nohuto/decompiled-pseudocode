/*
 * XREFs of BiSanitizeHandle @ 0x14032C5AC
 * Callers:
 *     BiDeleteKey @ 0x140779860 (BiDeleteKey.c)
 *     BcdFlushStore @ 0x14077A194 (BcdFlushStore.c)
 *     BiCloseStore @ 0x140781C00 (BiCloseStore.c)
 *     BiDeleteRegistryValue @ 0x1407820E4 (BiDeleteRegistryValue.c)
 *     BiEnumerateSubKeys @ 0x140783428 (BiEnumerateSubKeys.c)
 *     BiCreateKey @ 0x140783B10 (BiCreateKey.c)
 *     BiGetRegistryValue @ 0x140783CF8 (BiGetRegistryValue.c)
 *     BiOpenKey @ 0x140784304 (BiOpenKey.c)
 *     BiGetKeyName @ 0x140784700 (BiGetKeyName.c)
 *     BiSetRegistryValue @ 0x140784964 (BiSetRegistryValue.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall BiSanitizeHandle(__int64 a1)
{
  return a1 & 0xFFFFFFFFFFFFFFFDuLL;
}
