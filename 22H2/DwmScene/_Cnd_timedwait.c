/*
 * XREFs of _Cnd_timedwait @ 0x18011FAB0
 * Callers:
 *     sub_180071280 @ 0x180071280 (sub_180071280.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl Cnd_timedwait(_Cnd_t a1, _Mtx_t a2, const xtime *a3)
{
  return _Cnd_timedwait(a1, a2, a3);
}
