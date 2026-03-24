/*
 * XREFs of DwmAsyncNotifyDigitizerActiveContactsWrap @ 0x1C01EE670
 * Callers:
 *     <none>
 * Callees:
 *     DwmAsyncNotifyDigitizerActiveContacts @ 0x1C0274F20 (DwmAsyncNotifyDigitizerActiveContacts.c)
 */

__int64 __fastcall DwmAsyncNotifyDigitizerActiveContactsWrap(__int64 a1, __int64 a2)
{
  void *v2; // rax

  v2 = (void *)ReferenceDwmApiPort(a1, a2);
  return DwmAsyncNotifyDigitizerActiveContacts(v2);
}
