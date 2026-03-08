/*
 * XREFs of CmpAddDockingInfo @ 0x140B50F94
 * Callers:
 *     CmpCreateHardwareProfiles @ 0x140B50B04 (CmpCreateHardwareProfiles.c)
 *     CmpAddAliasEntry @ 0x140B94C88 (CmpAddAliasEntry.c)
 * Callees:
 *     NtSetValueKey @ 0x1407A9030 (NtSetValueKey.c)
 */

__int64 __fastcall CmpAddDockingInfo(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  size_t Size; // [rsp+28h] [rbp-10h]
  size_t Sizea; // [rsp+28h] [rbp-10h]
  size_t Sizeb; // [rsp+28h] [rbp-10h]
  size_t Sizec; // [rsp+28h] [rbp-10h]
  struct _PRIVILEGE_SET v9; // [rsp+48h] [rbp+10h] BYREF

  v9.PrivilegeCount = *(unsigned __int16 *)(a2 + 4);
  LODWORD(Size) = 4;
  result = NtSetValueKey(a1, (UNICODE_STRING *)&CmpStrDockingStateString, 0, 4u, &v9, Size);
  if ( (int)result >= 0 )
  {
    v9.PrivilegeCount = *(unsigned __int16 *)(a2 + 6);
    LODWORD(Sizea) = 4;
    result = NtSetValueKey(a1, (UNICODE_STRING *)&CmpStrCapabilitiesString, 0, 4u, &v9, Sizea);
    if ( (int)result >= 0 )
    {
      v9.PrivilegeCount = *(_DWORD *)(a2 + 8);
      LODWORD(Sizeb) = 4;
      result = NtSetValueKey(a1, (UNICODE_STRING *)&CmpStrDockIdString, 0, 4u, &v9, Sizeb);
      if ( (int)result >= 0 )
      {
        v9.PrivilegeCount = *(_DWORD *)(a2 + 12);
        LODWORD(Sizec) = 4;
        return NtSetValueKey(a1, (UNICODE_STRING *)&CmpStrSerialNumberString, 0, 4u, &v9, Sizec);
      }
    }
  }
  return result;
}
