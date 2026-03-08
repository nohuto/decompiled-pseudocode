/*
 * XREFs of GreIsVisRgnPublishLocked @ 0x1C01973D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall GreIsVisRgnPublishLocked(__int64 a1)
{
  __int64 v1; // rax

  v1 = SGDGetSessionState(a1);
  return ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(*(_QWORD *)(v1 + 24) + 128LL)) != 0;
}
