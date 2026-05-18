/*
 * XREFs of ?make_error_code@std@@YA?AVerror_code@1@W4io_errc@1@@Z @ 0x18002C16C
 * Callers:
 *     sub_18002A260 @ 0x18002A260 (sub_18002A260.c)
 *     sub_18002BCF8 @ 0x18002BCF8 (sub_18002BCF8.c)
 * Callees:
 *     ?_Execute_once@std@@YAHAEAUonce_flag@1@P6AHPEAX1PEAPEAX@Z1@Z @ 0x18011F9B2 (-_Execute_once@std@@YAHAEAUonce_flag@1@P6AHPEAX1PEAPEAX@Z1@Z.c)
 */

__int64 __fastcall std::make_error_code(__int64 a1, int a2)
{
  __int64 result; // rax

  if ( !std::_Execute_once(
          (struct std::once_flag *)&unk_180218810,
          (int (*)(void *, void *, void **))std::_Immortalize_impl<std::_Generic_error_category>,
          &unk_180218818) )
  {
    _o_terminate();
    __debugbreak();
  }
  *(_QWORD *)(a1 + 8) = &unk_180218818;
  result = a1;
  *(_DWORD *)a1 = a2;
  return result;
}
