/*
 * XREFs of MiRemoveWakeListEntry @ 0x14020181C
 * Callers:
 *     MiCleanSection @ 0x14020165C (MiCleanSection.c)
 *     MiFlushControlArea @ 0x1406220F4 (MiFlushControlArea.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall MiRemoveWakeListEntry(__int64 a1, _QWORD **a2)
{
  _QWORD *v2; // r8
  _QWORD **v3; // rcx
  _QWORD *result; // rax

  v2 = (_QWORD *)(a1 + 80);
  v3 = *(_QWORD ***)(a1 + 80);
  result = *v3;
  while ( v3 != a2 )
  {
    v2 = v3;
    v3 = (_QWORD **)result;
    result = (_QWORD *)*result;
  }
  *v2 = result;
  return result;
}
