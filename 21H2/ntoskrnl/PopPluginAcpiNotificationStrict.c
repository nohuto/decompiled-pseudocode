/*
 * XREFs of PopPluginAcpiNotificationStrict @ 0x1405DFA70
 * Callers:
 *     PopFxAcpiDispatchNotification @ 0x1405DDBE0 (PopFxAcpiDispatchNotification.c)
 *     PopFxAcpiPrepareDevice @ 0x1405DDEE4 (PopFxAcpiPrepareDevice.c)
 *     PopFxAcpiRegisterDevice @ 0x1405DDFFC (PopFxAcpiRegisterDevice.c)
 *     PopFxAcpiUnregisterDevice @ 0x1405DE108 (PopFxAcpiUnregisterDevice.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     PopFxBugCheck @ 0x1405CAE6C (PopFxBugCheck.c)
 */

__int64 __fastcall PopPluginAcpiNotificationStrict(
        ULONG_PTR BugCheckParameter3,
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter4)
{
  unsigned int v4; // edi
  __int64 result; // rax

  v4 = BugCheckParameter2;
  result = (*(__int64 (__fastcall **)(_QWORD, ULONG_PTR))(BugCheckParameter3 + 112))(
             (unsigned int)BugCheckParameter2,
             BugCheckParameter4);
  if ( !(_BYTE)result )
    PopFxBugCheck(0x668uLL, v4, BugCheckParameter3, BugCheckParameter4);
  return result;
}
