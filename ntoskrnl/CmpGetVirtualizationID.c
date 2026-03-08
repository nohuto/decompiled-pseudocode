/*
 * XREFs of CmpGetVirtualizationID @ 0x140A1709C
 * Callers:
 *     CmRealKCBToVirtualPath @ 0x140A15968 (CmRealKCBToVirtualPath.c)
 *     CmpGetVirtualStoreRoot @ 0x140A16FE4 (CmpGetVirtualStoreRoot.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x140208B50 (RtlAppendUnicodeToString.c)
 *     RtlCopyUnicodeString @ 0x14030E970 (RtlCopyUnicodeString.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     SeQueryUserSidToken @ 0x1407187E4 (SeQueryUserSidToken.c)
 *     RtlConvertSidToUnicodeString @ 0x1407479E0 (RtlConvertSidToUnicodeString.c)
 *     CmpEffectiveTokenForSubject @ 0x140768D98 (CmpEffectiveTokenForSubject.c)
 *     RtlFreeUnicodeString @ 0x1407F0430 (RtlFreeUnicodeString.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

__int64 __fastcall CmpGetVirtualizationID(PUNICODE_STRING Destination, __int64 a2)
{
  __int64 v4; // rax
  NTSTATUS v5; // edi
  __int64 v6; // rdx
  wchar_t *Pool2; // rax
  int v9; // [rsp+20h] [rbp-88h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+28h] [rbp-80h] BYREF
  _BYTE Sid[80]; // [rsp+40h] [rbp-68h] BYREF

  v9 = 0;
  UnicodeString = 0LL;
  memset(Sid, 0, 0x44uLL);
  v4 = CmpEffectiveTokenForSubject((__int64 *)a2, &v9);
  if ( v9 == 2 && *(int *)(a2 + 8) < 2 )
    v4 = *(_QWORD *)(a2 + 16);
  SeQueryUserSidToken(v4, Sid, 0x44u, 0LL);
  v5 = RtlConvertSidToUnicodeString(&UnicodeString, Sid, 1u);
  if ( v5 >= 0 )
  {
    v6 = (unsigned __int16)(UnicodeString.Length + 20);
    Destination->MaximumLength = v6;
    Pool2 = (wchar_t *)ExAllocatePool2(256LL, v6, 1700154691LL);
    Destination->Buffer = Pool2;
    if ( Pool2 )
    {
      RtlCopyUnicodeString(Destination, &UnicodeString);
      RtlAppendUnicodeToString(Destination, L"_Classes");
    }
    else
    {
      v5 = -1073741670;
    }
  }
  RtlFreeUnicodeString(&UnicodeString);
  return (unsigned int)v5;
}
