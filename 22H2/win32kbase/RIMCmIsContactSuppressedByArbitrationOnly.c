/*
 * XREFs of RIMCmIsContactSuppressedByArbitrationOnly @ 0x1C00E35F8
 * Callers:
 *     rimAbIsPointerSuppressedByOtherDeviceContacts @ 0x1C017BC38 (rimAbIsPointerSuppressedByOtherDeviceContacts.c)
 *     rimAbUpdateDeadzonesAndResurrectContacts @ 0x1C017CDA4 (rimAbUpdateDeadzonesAndResurrectContacts.c)
 *     rimProcessPointerDeviceButtonContact @ 0x1C01AB8FC (rimProcessPointerDeviceButtonContact.c)
 *     rimProcessPointerDeviceContact @ 0x1C01ABBB4 (rimProcessPointerDeviceContact.c)
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
