/*
 * XREFs of _Cnd_wait @ 0x18011FB5C
 * Callers:
 *     sub_1800AF578 @ 0x1800AF578 (sub_1800AF578.c)
 *     sub_1800B0040 @ 0x1800B0040 (sub_1800B0040.c)
 *     sub_1800B02F8 @ 0x1800B02F8 (sub_1800B02F8.c)
 *     sub_180116914 @ 0x180116914 (sub_180116914.c)
 *     sub_1801169C0 @ 0x1801169C0 (sub_1801169C0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl Cnd_wait(_Cnd_t a1, _Mtx_t a2)
{
  return _Cnd_wait(a1, a2);
}
