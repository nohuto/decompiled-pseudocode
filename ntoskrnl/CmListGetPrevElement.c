/*
 * XREFs of CmListGetPrevElement @ 0x140776A40
 * Callers:
 *     CmpGetEffectiveCellType @ 0x14067D5A0 (CmpGetEffectiveCellType.c)
 *     CmpUndoDeleteKeyForTransEx @ 0x14067D5F4 (CmpUndoDeleteKeyForTransEx.c)
 *     CmpDoParseKey @ 0x1406E1D90 (CmpDoParseKey.c)
 *     CmGetKeyFlags @ 0x14079C210 (CmGetKeyFlags.c)
 *     CmGetKeyLastWriteTime @ 0x1407ABE44 (CmGetKeyLastWriteTime.c)
 *     CmpQueryKeyDataFromNode @ 0x1407AD510 (CmpQueryKeyDataFromNode.c)
 *     CmGetKCBCacheSecurity @ 0x1407AF620 (CmGetKCBCacheSecurity.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmListGetPrevElement(__int64 a1, __int64 *a2)
{
  __int64 v2; // r8

  v2 = *a2;
  if ( !*a2 )
  {
    v2 = *(_QWORD *)(a1 + 8);
    *a2 = v2;
  }
  if ( a1 == v2 )
    return 0LL;
  *a2 = *(_QWORD *)(v2 + 8);
  return v2 - 32;
}
