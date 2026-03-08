/*
 * XREFs of KeGetProcessorNode @ 0x140302AD0
 * Callers:
 *     KiInitializeTopologyStructures @ 0x140A8A348 (KiInitializeTopologyStructures.c)
 *     KiSetCacheInformationAmd @ 0x140A9C858 (KiSetCacheInformationAmd.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeGetProcessorNode(__int64 a1)
{
  return KeNodeBlock[*(unsigned __int16 *)(*(_QWORD *)(a1 + 192) + 138LL)];
}
