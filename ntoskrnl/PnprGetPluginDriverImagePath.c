/*
 * XREFs of PnprGetPluginDriverImagePath @ 0x140962EC8
 * Callers:
 *     PnprLoadPluginDriver @ 0x1409635F8 (PnprLoadPluginDriver.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     wcscpy_s @ 0x1403DA210 (wcscpy_s.c)
 *     wcsncat_s @ 0x1403DA2A0 (wcsncat_s.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwOpenKey @ 0x140412550 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1404125F0 (ZwQueryValueKey.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x1406D3680 (_PnpCtxGetCachedContextBaseKey.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PnprGetPluginDriverImagePath(PUNICODE_STRING DestinationString)
{
  __int64 Pool2; // rdi
  int CachedContextBaseKey; // ebx
  NTSTATUS v4; // eax
  __int64 v5; // rax
  rsize_t v6; // r14
  wchar_t *v7; // rax
  wchar_t *v8; // rsi
  UNICODE_STRING ValueName; // [rsp+30h] [rbp-50h] BYREF
  UNICODE_STRING DestinationStringa; // [rsp+40h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  ULONG ResultLength; // [rsp+B8h] [rbp+38h] BYREF
  HANDLE KeyHandle; // [rsp+C0h] [rbp+40h] BYREF
  void *v15; // [rsp+C8h] [rbp+48h] BYREF

  v15 = 0LL;
  ResultLength = 0;
  KeyHandle = 0LL;
  Pool2 = 0LL;
  DestinationStringa = 0LL;
  memset(&ObjectAttributes, 0, 44);
  ValueName = 0LL;
  CachedContextBaseKey = PnpCtxGetCachedContextBaseKey(*(__int64 *)&PiPnpRtlCtx, 4, (__int64)&v15);
  if ( CachedContextBaseKey >= 0 )
  {
    RtlInitUnicodeString(&DestinationStringa, L"Control\\Pnp");
    ObjectAttributes.RootDirectory = v15;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationStringa;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    CachedContextBaseKey = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
    if ( CachedContextBaseKey >= 0 )
    {
      RtlInitUnicodeString(&ValueName, L"ReplaceDriver");
      v4 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, 0LL, 0, &ResultLength);
      CachedContextBaseKey = v4;
      if ( v4 == -2147483643 || v4 == -1073741789 )
      {
        Pool2 = ExAllocatePool2(256LL, ResultLength, 1366322768LL);
        if ( Pool2 )
        {
          CachedContextBaseKey = ZwQueryValueKey(
                                   KeyHandle,
                                   &ValueName,
                                   KeyValuePartialInformation,
                                   (PVOID)Pool2,
                                   ResultLength,
                                   &ResultLength);
          if ( CachedContextBaseKey >= 0 )
          {
            if ( (unsigned int)(*(_DWORD *)(Pool2 + 4) - 1) > 1 || (v5 = *(unsigned int *)(Pool2 + 8), (v5 & 1) != 0) )
            {
              CachedContextBaseKey = -1073741811;
            }
            else
            {
              v6 = (unsigned __int64)(v5 + 26) >> 1;
              v7 = (wchar_t *)ExAllocatePool2(256LL, 2 * v6, 1366322768LL);
              v8 = v7;
              if ( DestinationString )
              {
                wcscpy_s(v7, v6, L"\\systemroot\\");
                wcsncat_s(v8, v6, (const wchar_t *)(Pool2 + 12), (unsigned __int64)*(unsigned int *)(Pool2 + 8) >> 1);
                RtlInitUnicodeString(DestinationString, v8);
              }
              else
              {
                CachedContextBaseKey = -1073741670;
                if ( v7 )
                  ExFreePoolWithTag(v7, 0x51706E50u);
              }
            }
          }
        }
        else
        {
          CachedContextBaseKey = -1073741670;
        }
      }
      else if ( v4 >= 0 )
      {
        CachedContextBaseKey = -1073741823;
      }
    }
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( Pool2 )
    ExFreePoolWithTag((PVOID)Pool2, 0x51706E50u);
  return (unsigned int)CachedContextBaseKey;
}
