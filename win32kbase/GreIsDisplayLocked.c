/*
 * XREFs of GreIsDisplayLocked @ 0x1C0197310
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall GreIsDisplayLocked(__int64 a1)
{
  __int64 v1; // rax

  v1 = SGDGetSessionState(a1);
  return ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(*(_QWORD *)(v1 + 24) + 120LL)) != 0;
}
