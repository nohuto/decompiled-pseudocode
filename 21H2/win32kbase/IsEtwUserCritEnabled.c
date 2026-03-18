/*
 * XREFs of IsEtwUserCritEnabled @ 0x1C002A200
 * Callers:
 *     PrivateAPI::_anonymous_namespace_::EnterCritInternal @ 0x1C00293AC (PrivateAPI--_anonymous_namespace_--EnterCritInternal.c)
 *     NtUserReleaseDC @ 0x1C0029480 (NtUserReleaseDC.c)
 *     NtUserGetDC @ 0x1C00295D0 (NtUserGetDC.c)
 *     PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal @ 0x1C0029AC4 (PrivateAPI--_anonymous_namespace_--EnterSharedCritInternal.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C002A380 (_tlgKeywordOn.c)
 */

_BOOL8 IsEtwUserCritEnabled()
{
  return dword_1C028D6F0 && (unsigned __int8)tlgKeywordOn(&dword_1C028D6F0, 0x400000000000LL)
      || (W32kEtwEnabledKeyword & 0x8000002010000000uLL) != 0
      && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
      && (qword_1C028DB20 & 0x8000002010000000uLL) != 0
      && (qword_1C028DB28 & 0x8000002010000000uLL) == qword_1C028DB28
      || (W32kEtwEnabledKeyword & 0x200000010000000LL) != 0
      && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
      && (qword_1C028DB20 & 0x200000010000000LL) != 0
      && (qword_1C028DB28 & 0x200000010000000LL) == qword_1C028DB28;
}
