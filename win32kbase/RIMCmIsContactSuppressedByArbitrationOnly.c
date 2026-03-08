/*
 * XREFs of RIMCmIsContactSuppressedByArbitrationOnly @ 0x1C00F1ACC
 * Callers:
 *     rimAbIsPointerSuppressedByOtherDeviceContacts @ 0x1C01A8B98 (rimAbIsPointerSuppressedByOtherDeviceContacts.c)
 *     rimAbUpdateDeadzonesAndResurrectContacts @ 0x1C01A9D04 (rimAbUpdateDeadzonesAndResurrectContacts.c)
 *     rimProcessPointerDeviceButtonContact @ 0x1C01D99D4 (rimProcessPointerDeviceButtonContact.c)
 *     rimProcessPointerDeviceContact @ 0x1C01D9C8C (rimProcessPointerDeviceContact.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RIMCmIsContactSuppressedByArbitrationOnly(__int64 a1)
{
  int v1; // edx
  __int64 result; // rax

  v1 = *(_DWORD *)(a1 + 8);
  result = 1LL;
  if ( (v1 & 1) == 0 || (v1 & 0xFFFFFFFE) != 0 )
    return 0LL;
  return result;
}
