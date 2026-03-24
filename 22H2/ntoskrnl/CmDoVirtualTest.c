/*
 * XREFs of CmDoVirtualTest @ 0x14032A994
 * Callers:
 *     NtSetInformationKey @ 0x1405F3A00 (NtSetInformationKey.c)
 *     NtSetValueKey @ 0x1406DCBB0 (NtSetValueKey.c)
 *     NtDeleteValueKey @ 0x1406E1EF0 (NtDeleteValueKey.c)
 *     NtDeleteKey @ 0x1406E5000 (NtDeleteKey.c)
 *     NtRenameKey @ 0x140868C80 (NtRenameKey.c)
 * Callees:
 *     CmpIsSystemEntity @ 0x1406CF8B0 (CmpIsSystemEntity.c)
 */

bool __fastcall CmDoVirtualTest(__int64 a1)
{
  if ( !CmpVEEnabled )
    return 0;
  LOBYTE(a1) = KeGetCurrentThread()->PreviousMode;
  return (unsigned __int8)CmpIsSystemEntity(a1) == 0;
}
