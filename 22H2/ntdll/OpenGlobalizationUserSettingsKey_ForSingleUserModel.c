/*
 * XREFs of OpenGlobalizationUserSettingsKey_ForSingleUserModel @ 0x180119D48
 * Callers:
 *     OpenGlobalizationUserSettingsKey @ 0x1800704B4 (OpenGlobalizationUserSettingsKey.c)
 *     OpenGlobalizationUserSettingsKey_ForMua @ 0x180119A78 (OpenGlobalizationUserSettingsKey_ForMua.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x1800102F0 (RtlCopyUnicodeString.c)
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     RtlInitUnicodeString @ 0x18003BA40 (RtlInitUnicodeString.c)
 *     NtClose @ 0x18009D6C0 (NtClose.c)
 *     NtOpenKey @ 0x18009D720 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x18009D7C0 (NtQueryValueKey.c)
 */

__int64 __fastcall OpenGlobalizationUserSettingsKey_ForSingleUserModel(__int64 a1, _QWORD *a2)
{
  int v3; // ebx
  UNICODE_STRING v5; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v6[2]; // [rsp+68h] [rbp-98h] BYREF
  UNICODE_STRING v7; // [rsp+78h] [rbp-88h] BYREF
  UNICODE_STRING DestinationString; // [rsp+88h] [rbp-78h] BYREF
  int v9; // [rsp+98h] [rbp-68h]
  __int64 v10; // [rsp+A0h] [rbp-60h]
  UNICODE_STRING *p_DestinationString; // [rsp+A8h] [rbp-58h]
  int v12; // [rsp+B0h] [rbp-50h]
  __int128 v13; // [rsp+B8h] [rbp-48h]
  int v14; // [rsp+C8h] [rbp-38h]
  __int64 v15; // [rsp+D0h] [rbp-30h]
  UNICODE_STRING *v16; // [rsp+D8h] [rbp-28h]
  int v17; // [rsp+E0h] [rbp-20h]
  __int128 v18; // [rsp+E8h] [rbp-18h]

  if ( dword_180171524 )
  {
    RtlInitUnicodeString(&DestinationString, &word_18016DA70);
    v10 = 0LL;
    p_DestinationString = &DestinationString;
    v9 = 48;
    v12 = 576;
    v13 = 0LL;
    return (unsigned int)ZwOpenKey();
  }
  else
  {
    RtlInitUnicodeString(&v5, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\CommonGlobUserSettings\\");
    v15 = 0LL;
    v16 = &v5;
    v14 = 48;
    v17 = 576;
    v18 = 0LL;
    v3 = ZwOpenKey();
    if ( v3 >= 0 )
    {
      RtlInitUnicodeString(&v7, L"RedirectedKey");
      ZwQueryValueKey();
      v6[0] = 11141120LL;
      v6[1] = &word_18016DA70;
      if ( v5.Length <= 0xAAu )
      {
        RtlCopyUnicodeString((unsigned __int16 *)v6, &v5.Length);
        dword_180171524 = 1;
      }
      v3 = 0;
      *a2 = 0LL;
    }
  }
  return (unsigned int)v3;
}
