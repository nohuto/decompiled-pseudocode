/*
 * XREFs of bReadUserSystemEUDCRegistry @ 0x1C00E7068
 * Callers:
 *     bAddAllFlEntry @ 0x1C00E6C58 (bAddAllFlEntry.c)
 * Callees:
 *     ??0MALLOCOBJ@@QEAA@K@Z @ 0x1C009FE08 (--0MALLOCOBJ@@QEAA@K@Z.c)
 *     bNotIsKeySymbolicLink @ 0x1C00E7194 (bNotIsKeySymbolicLink.c)
 *     GetUserEUDCRegistryPath @ 0x1C00E7240 (GetUserEUDCRegistryPath.c)
 *     bWriteUserSystemEUDCRegistry @ 0x1C029888C (bWriteUserSystemEUDCRegistry.c)
 */

__int64 __fastcall bReadUserSystemEUDCRegistry(wchar_t *Dst)
{
  WCHAR *v2; // rdi
  WCHAR *v3; // rbx
  PCWSTR v4; // rcx
  int UserEUDCRegistryPath; // esi
  unsigned int v6; // esi
  wchar_t *v8; // rax
  wchar_t *v9; // rsi
  PCWSTR Path; // [rsp+30h] [rbp-20h] BYREF
  WCHAR *v11; // [rsp+38h] [rbp-18h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-10h] BYREF
  HANDLE Handle; // [rsp+A0h] [rbp+50h] BYREF
  HANDLE v14; // [rsp+A8h] [rbp+58h] BYREF

  MALLOCOBJ::MALLOCOBJ((MALLOCOBJ *)&v11, 0x208u);
  MALLOCOBJ::MALLOCOBJ((MALLOCOBJ *)&Path, 0x208u);
  v2 = v11;
  v3 = (WCHAR *)Path;
  if ( !v11 || !Path )
    goto LABEL_10;
  *(_DWORD *)(&DestinationString.MaximumLength + 1) = 0;
  v4 = Path;
  Handle = 0LL;
  v14 = 0LL;
  *v11 = 0;
  *v3 = 0;
  *(_DWORD *)&DestinationString.Length = 17039360;
  DestinationString.Buffer = v2;
  UserEUDCRegistryPath = GetUserEUDCRegistryPath(v4);
  if ( UserEUDCRegistryPath >= 0 )
  {
    bNotIsKeySymbolicLink(v3, &Handle, &v14);
    UserEUDCRegistryPath = -1073741824;
  }
  if ( Handle )
    ZwClose(Handle);
  if ( v14 )
    ZwClose(v14);
  if ( UserEUDCRegistryPath != -1073741772 )
    goto LABEL_10;
  v8 = wcsrchr(v3, 0x5Cu);
  v9 = v8;
  if ( !v8
    || _wcsicmp(v8 + 1, word_1C033D0C8)
    || (*v9 = 0,
        RtlCreateRegistryKey(0, v3),
        *v9 = 92,
        RtlCreateRegistryKey(0, v3),
        !(unsigned int)bWriteUserSystemEUDCRegistry((PVOID)L"EUDC.TTE"))
    || (RtlInitUnicodeString(&DestinationString, L"EUDC.TTE"),
        v6 = 1,
        wcsncpy_s(Dst, 0x104uLL, DestinationString.Buffer, DestinationString.Length)) )
  {
LABEL_10:
    v6 = 0;
  }
  if ( v3 )
    Win32FreePool(v3);
  if ( v2 )
    Win32FreePool(v2);
  return v6;
}
