/*
 * XREFs of ?data@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEBAPEBDXZ @ 0x180026E34
 * Callers:
 *     sub_18001DF7C @ 0x18001DF7C (sub_18001DF7C.c)
 *     sub_18002ED04 @ 0x18002ED04 (sub_18002ED04.c)
 *     sub_180030200 @ 0x180030200 (sub_180030200.c)
 *     sub_180030E0C @ 0x180030E0C (sub_180030E0C.c)
 * Callees:
 *     <none>
 */

// Microsoft VisualC v7/14 64bit runtime
_QWORD *__fastcall std::string::data(_QWORD *a1)
{
  if ( a1[3] >= 0x10uLL )
    return (_QWORD *)*a1;
  return a1;
}
