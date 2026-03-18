/*
 * XREFs of bReadUserSystemEUDCRegistry @ 0x1C01194E4
 * Callers:
 *     bAddAllFlEntry @ 0x1C015E414 (bAddAllFlEntry.c)
 * Callees:
 *     ??1?$AutoResource@$1?Win32FreePool@@YAXPEAX@Z@@QEAA@XZ @ 0x1C0014A8C (--1-$AutoResource@$1-Win32FreePool@@YAXPEAX@Z@@QEAA@XZ.c)
 *     ??0MALLOCOBJ@@QEAA@K@Z @ 0x1C0014F34 (--0MALLOCOBJ@@QEAA@K@Z.c)
 *     bNotIsKeySymbolicLink @ 0x1C01195E0 (bNotIsKeySymbolicLink.c)
 *     GetUserEUDCRegistryPath @ 0x1C011968C (GetUserEUDCRegistryPath.c)
 *     bWriteUserSystemEUDCRegistry @ 0x1C0296CB4 (bWriteUserSystemEUDCRegistry.c)
 */

__int64 __fastcall bReadUserSystemEUDCRegistry(wchar_t *Dst)
{
  WCHAR *v2; // rax
  unsigned int v3; // edi
  WCHAR *v4; // rbx
  PCWSTR v5; // rcx
  int UserEUDCRegistryPath; // esi
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
  v3 = 0;
  if ( v11 )
  {
    v4 = (WCHAR *)Path;
    if ( Path )
    {
      *(_DWORD *)(&DestinationString.MaximumLength + 1) = 0;
      v5 = Path;
      Handle = 0LL;
      v14 = 0LL;
      *v11 = 0;
      *v4 = 0;
      *(_DWORD *)&DestinationString.Length = 17039360;
      DestinationString.Buffer = v2;
      UserEUDCRegistryPath = GetUserEUDCRegistryPath(v5);
      if ( UserEUDCRegistryPath >= 0 )
      {
        bNotIsKeySymbolicLink(v4, &Handle, &v14);
        UserEUDCRegistryPath = -1073741824;
      }
      if ( Handle )
        ZwClose(Handle);
      if ( v14 )
        ZwClose(v14);
      if ( UserEUDCRegistryPath == -1073741772 )
      {
        v8 = wcsrchr(v4, 0x5Cu);
        v9 = v8;
        if ( v8 )
        {
          if ( !_wcsicmp(v8 + 1, word_1C0337758) )
          {
            *v9 = 0;
            RtlCreateRegistryKey(0, v4);
            *v9 = 92;
            RtlCreateRegistryKey(0, v4);
            if ( (unsigned int)bWriteUserSystemEUDCRegistry((PVOID)L"EUDC.TTE") )
            {
              RtlInitUnicodeString(&DestinationString, L"EUDC.TTE");
              if ( !wcsncpy_s(Dst, 0x104uLL, DestinationString.Buffer, DestinationString.Length) )
                v3 = 1;
            }
          }
        }
      }
    }
  }
  AutoResource<&void Win32FreePool(void *)>::~AutoResource<&void Win32FreePool(void *)>((__int64 *)&Path);
  AutoResource<&void Win32FreePool(void *)>::~AutoResource<&void Win32FreePool(void *)>((__int64 *)&v11);
  return v3;
}
