/*
 * XREFs of Windows::Internal::Details::_dynamic_initializer_for___git__ @ 0x180003E50
 * Callers:
 *     <none>
 * Callees:
 *     ??0Git@Details@Internal@Windows@@QEAA@XZ @ 0x18010E334 (--0Git@Details@Internal@Windows@@QEAA@XZ.c)
 */

int __fastcall Windows::Internal::Details::_dynamic_initializer_for___git__(Windows::Internal::Details::Git *a1)
{
  Windows::Internal::Details::Git::Git(a1);
  return atexit((void (__cdecl *)())Windows::Internal::Details::_dynamic_atexit_destructor_for___git__);
}
