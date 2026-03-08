/*
 * XREFs of CmDoVirtualTest @ 0x1402DD11C
 * Callers:
 *     NtDeleteKey @ 0x1406B72F0 (NtDeleteKey.c)
 *     NtDeleteValueKey @ 0x1406B9280 (NtDeleteValueKey.c)
 *     NtSetInformationKey @ 0x1407590A0 (NtSetInformationKey.c)
 *     NtSetValueKey @ 0x1407A9030 (NtSetValueKey.c)
 *     NtRenameKey @ 0x140A0B350 (NtRenameKey.c)
 * Callees:
 *     CmpIsSystemEntity @ 0x140768CB8 (CmpIsSystemEntity.c)
 */

bool __fastcall CmDoVirtualTest(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx

  if ( !CmpVEEnabled )
    return 0;
  v3 = a1;
  LOBYTE(a1) = KeGetCurrentThread()->PreviousMode;
  return (unsigned __int8)CmpIsSystemEntity(a1, v3, a2) == 0;
}
