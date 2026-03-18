/*
 * XREFs of CmDoVirtualTest @ 0x14034745C
 * Callers:
 *     NtSetValueKey @ 0x1406D2AB0 (NtSetValueKey.c)
 *     NtDeleteValueKey @ 0x14070EAF0 (NtDeleteValueKey.c)
 *     NtDeleteKey @ 0x14070FD60 (NtDeleteKey.c)
 *     NtSetInformationKey @ 0x1407ACFA0 (NtSetInformationKey.c)
 *     NtRenameKey @ 0x140A0E060 (NtRenameKey.c)
 * Callees:
 *     CmpIsSystemEntity @ 0x1407BAAAC (CmpIsSystemEntity.c)
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
