/*
 * XREFs of ??1?$unique_ptr@$$BY0A@GU?$default_delete@$$BY0A@G@std@@@std@@QEAA@XZ @ 0x180108ED8
 * Callers:
 *     _ShellFeedsAvailabilityHelpers::GetCurrentUILanguage_::_1_::dtor$1 @ 0x180109D1F (_ShellFeedsAvailabilityHelpers--GetCurrentUILanguage_--_1_--dtor$1.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800901A4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::unique_ptr<unsigned short [0]>::~unique_ptr<unsigned short [0]>(
        void **a1,
        const struct std::nothrow_t *a2)
{
  void *v2; // rcx

  v2 = *a1;
  if ( v2 )
    operator delete(v2, a2);
}
