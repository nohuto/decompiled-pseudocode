/*
 * XREFs of PiDevCfgConfigureDeviceLocation @ 0x140875E34
 * Callers:
 *     PiDevCfgConfigureDevice @ 0x14087384C (PiDevCfgConfigureDevice.c)
 *     PpDevCfgProcessDeviceClass @ 0x14095F98C (PpDevCfgProcessDeviceClass.c)
 * Callees:
 *     PnpDuplicateUnicodeString @ 0x1403C2368 (PnpDuplicateUnicodeString.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwOpenKey @ 0x140412550 (ZwOpenKey.c)
 *     IopReplaceSeperatorWithPound @ 0x140680B88 (IopReplaceSeperatorWithPound.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x1406D3680 (_PnpCtxGetCachedContextBaseKey.c)
 *     NtQueryKey @ 0x1406E6630 (NtQueryKey.c)
 *     RtlFreeUnicodeString @ 0x1407F0430 (RtlFreeUnicodeString.c)
 *     PiDevCfgConfigureDeviceKeys @ 0x140876A38 (PiDevCfgConfigureDeviceKeys.c)
 *     PnpOpenFirstMatchingSubKey @ 0x140955C68 (PnpOpenFirstMatchingSubKey.c)
 */

__int64 __fastcall PiDevCfgConfigureDeviceLocation(__int64 a1, __int64 a2, _DWORD *a3, _DWORD *a4)
{
  unsigned int v4; // edi
  wchar_t *Buffer; // r15
  int CachedContextBaseKey; // ebx
  NTSTATUS v11; // eax
  _QWORD *v12; // r14
  int v13; // eax
  NTSTATUS v14; // eax
  NTSTATUS v15; // eax
  int v16; // eax
  __int128 v17; // [rsp+30h] [rbp-A9h] BYREF
  HANDLE v18; // [rsp+40h] [rbp-99h] BYREF
  HANDLE v19; // [rsp+48h] [rbp-91h] BYREF
  HANDLE KeyHandle; // [rsp+50h] [rbp-89h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-81h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+88h] [rbp-51h] BYREF
  __int64 v23; // [rsp+98h] [rbp-41h] BYREF
  HANDLE Handle; // [rsp+A0h] [rbp-39h] BYREF
  void *v25; // [rsp+A8h] [rbp-31h] BYREF
  __int64 v26; // [rsp+B0h] [rbp-29h]
  _OWORD v27[2]; // [rsp+B8h] [rbp-21h] BYREF
  __int64 v28; // [rsp+D8h] [rbp-1h]

  v4 = 0;
  v26 = a1;
  v25 = 0LL;
  KeyHandle = 0LL;
  v19 = 0LL;
  v18 = 0LL;
  Handle = 0LL;
  v28 = 0LL;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  Buffer = 0LL;
  UnicodeString.Buffer = 0LL;
  LODWORD(v23) = 0;
  v17 = 0LL;
  memset(v27, 0, sizeof(v27));
  if ( a3 )
    *a3 = 0;
  if ( a4 )
    *a4 = 0;
  if ( !*(_QWORD *)(a2 + 64) )
    goto LABEL_6;
  CachedContextBaseKey = PnpCtxGetCachedContextBaseKey(*(__int64 *)&PiPnpRtlCtx, 4, (__int64)&v25);
  if ( CachedContextBaseKey >= 0 )
  {
    LODWORD(v17) = 3145774;
    *((_QWORD *)&v17 + 1) = L"Control\\DeviceLocations";
    ObjectAttributes.RootDirectory = v25;
    *(_QWORD *)&ObjectAttributes.Length = 48LL;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&v17;
    *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v11 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
    CachedContextBaseKey = v11;
    if ( v11 == -1073741772 )
      goto LABEL_6;
    if ( v11 < 0 )
      goto LABEL_7;
    CachedContextBaseKey = NtQueryKey(KeyHandle, 4u, (unsigned __int64)v27, 0x28u, (unsigned int *)&v23);
    if ( CachedContextBaseKey < 0 )
      goto LABEL_7;
    if ( !HIDWORD(v27[0]) )
      goto LABEL_6;
    CachedContextBaseKey = PnpOpenFirstMatchingSubKey(*(PCWSTR *)(a2 + 64), &v19);
    if ( CachedContextBaseKey == -1073741772 )
    {
      *((_QWORD *)&v17 + 1) = L"*";
      ObjectAttributes.RootDirectory = KeyHandle;
      LODWORD(v17) = 262146;
      ObjectAttributes.ObjectName = (PUNICODE_STRING)&v17;
      *(_QWORD *)&ObjectAttributes.Length = 48LL;
      *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
      v19 = 0LL;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      CachedContextBaseKey = ZwOpenKey(&v19, 0x20019u, &ObjectAttributes);
      if ( CachedContextBaseKey == -1073741772 )
      {
LABEL_6:
        CachedContextBaseKey = 0;
        goto LABEL_7;
      }
    }
    if ( CachedContextBaseKey >= 0 )
    {
      v12 = (_QWORD *)(a2 + 32);
      do
      {
        if ( *v12 )
        {
          if ( Buffer )
            RtlFreeUnicodeString(&UnicodeString);
          if ( !PnpDuplicateUnicodeString((__int64)&UnicodeString, 16LL * v4 + a2 + 24) )
          {
            CachedContextBaseKey = -1073741670;
            goto LABEL_7;
          }
          v13 = IopReplaceSeperatorWithPound((__int64)&UnicodeString, (__int64)&UnicodeString);
          Buffer = UnicodeString.Buffer;
          if ( v13 >= 0 )
          {
            v16 = PnpOpenFirstMatchingSubKey(UnicodeString.Buffer, &v18);
            CachedContextBaseKey = v16;
            if ( v16 == -1073741772 )
            {
              CachedContextBaseKey = 0;
            }
            else if ( v16 < 0 )
            {
              goto LABEL_7;
            }
            if ( v18 )
              goto LABEL_33;
          }
          else
          {
            CachedContextBaseKey = 0;
          }
        }
        ++v4;
        v12 += 2;
      }
      while ( v4 < 2 );
      if ( CachedContextBaseKey < 0 )
        goto LABEL_7;
LABEL_33:
      if ( v18 )
        goto LABEL_36;
      LODWORD(v17) = 262146;
      *((_QWORD *)&v17 + 1) = L"*";
      ObjectAttributes.RootDirectory = v19;
      *(_QWORD *)&ObjectAttributes.Length = 48LL;
      ObjectAttributes.ObjectName = (PUNICODE_STRING)&v17;
      *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
      v18 = 0LL;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v14 = ZwOpenKey(&v18, 0x20019u, &ObjectAttributes);
      CachedContextBaseKey = v14;
      if ( v14 == -1073741772 )
        goto LABEL_6;
      if ( v14 >= 0 )
      {
LABEL_36:
        LODWORD(v17) = 1835034;
        *((_QWORD *)&v17 + 1) = L"Configuration";
        ObjectAttributes.RootDirectory = v18;
        *(_QWORD *)&ObjectAttributes.Length = 48LL;
        ObjectAttributes.ObjectName = (PUNICODE_STRING)&v17;
        *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        v15 = ZwOpenKey(&Handle, 0x20019u, &ObjectAttributes);
        CachedContextBaseKey = v15;
        if ( v15 == -1073741772 )
          goto LABEL_6;
        if ( v15 >= 0 )
          CachedContextBaseKey = PiDevCfgConfigureDeviceKeys(v26, a2, (_DWORD)Handle, -1, (__int64)a3, (__int64)a4);
      }
    }
  }
LABEL_7:
  RtlFreeUnicodeString(&UnicodeString);
  if ( Handle )
    ZwClose(Handle);
  if ( v18 )
    ZwClose(v18);
  if ( v19 )
    ZwClose(v19);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)CachedContextBaseKey;
}
