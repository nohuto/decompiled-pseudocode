/*
 * XREFs of _RequestNotificationPinConsentAsync$_InitCoro$1_::_1_::dtor$0 @ 0x18014A788
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800901A4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall RequestNotificationPinConsentAsync__InitCoro_1_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  if ( *(_WORD *)(*(_QWORD *)(a2 + 120) + 10LL) )
    operator delete((void *)(*(_QWORD *)(a2 + 120) - 96LL), (const struct std::nothrow_t *)0x4A8);
}
