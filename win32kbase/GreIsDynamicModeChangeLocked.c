/*
 * XREFs of GreIsDynamicModeChangeLocked @ 0x1C00C25F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall GreIsDynamicModeChangeLocked(__int64 a1)
{
  __int64 v1; // rax

  v1 = SGDGetSessionState(a1);
  return ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(*(_QWORD *)(v1 + 24) + 80LL)) != 0;
}
