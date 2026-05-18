/*
 * XREFs of unknown_libname_104 @ 0x18002BD80
 * Callers:
 *     sub_18002ED04 @ 0x18002ED04 (sub_18002ED04.c)
 *     sub_180030200 @ 0x180030200 (sub_180030200.c)
 *     sub_180030E0C @ 0x180030E0C (sub_180030E0C.c)
 * Callees:
 *     <none>
 */

// Microsoft VisualC v14 64bit runtime
_QWORD *__fastcall unknown_libname_104(_QWORD *a1, _BYTE *a2)
{
  unsigned __int64 v2; // r8

  v2 = -1LL;
  do
    ++v2;
  while ( a2[v2] );
  return std::string::append(a1, a2, v2);
}
