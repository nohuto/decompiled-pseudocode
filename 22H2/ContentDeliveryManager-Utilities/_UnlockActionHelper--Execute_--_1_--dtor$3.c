/*
 * XREFs of _UnlockActionHelper::Execute_::_1_::dtor$3 @ 0x1800D69A4
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800CFC30 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall UnlockActionHelper::Execute_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  operator delete(*(void **)(a2 + 160), (const struct std::nothrow_t *)&std::nothrow);
}
