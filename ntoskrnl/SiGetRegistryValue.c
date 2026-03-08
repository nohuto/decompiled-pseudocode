/*
 * XREFs of SiGetRegistryValue @ 0x14076E70C
 * Callers:
 *     SiIsWinPEBoot @ 0x14076E3F0 (SiIsWinPEBoot.c)
 *     SiGetBootDeviceNameFromRegistry @ 0x14076E690 (SiGetBootDeviceNameFromRegistry.c)
 *     SiDisambiguateSystemDevice @ 0x140A5CCE4 (SiDisambiguateSystemDevice.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwQueryValueKey @ 0x1404125F0 (ZwQueryValueKey.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     SiOpenRegistryKey @ 0x14076E880 (SiOpenRegistryKey.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SiGetRegistryValue(__int64 a1, const WCHAR *a2, __int64 a3, __int64 a4, _QWORD *a5, ULONG *a6)
{
  _QWORD *v6; // r15
  ULONG *v7; // r14
  _DWORD *v8; // rsi
  HANDLE v9; // rdi
  __int64 v11; // r8
  int v12; // eax
  NTSTATUS v13; // ebx
  NTSTATUS v14; // eax
  _DWORD *Pool2; // rax
  void *v16; // rax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-10h] BYREF
  ULONG v19; // [rsp+70h] [rbp+30h] BYREF
  int v20; // [rsp+74h] [rbp+34h]
  HANDLE Handle; // [rsp+80h] [rbp+40h] BYREF
  ULONG ResultLength; // [rsp+88h] [rbp+48h] BYREF

  v20 = HIDWORD(a1);
  v6 = a5;
  v7 = a6;
  v19 = 0;
  v8 = 0LL;
  ResultLength = 0;
  v9 = 0LL;
  *a5 = 0LL;
  *v7 = 0;
  DestinationString = 0LL;
  Handle = 0LL;
  RtlInitUnicodeString(&DestinationString, a2);
  if ( !a3 || (v12 = SiOpenRegistryKey(0LL, a3, v11, &Handle), v9 = Handle, v13 = v12, v12 >= 0) )
  {
    v14 = ZwQueryValueKey(v9, &DestinationString, KeyValuePartialInformation, 0LL, 0, &ResultLength);
    v13 = v14;
    if ( v14 == -1073741789 )
    {
      Pool2 = (_DWORD *)ExAllocatePool2(256LL, ResultLength, 1263556947LL);
      v8 = Pool2;
      if ( !Pool2 )
      {
LABEL_16:
        v13 = -1073741670;
        goto LABEL_9;
      }
      v13 = ZwQueryValueKey(v9, &DestinationString, KeyValuePartialInformation, Pool2, ResultLength, &v19);
      if ( v13 < 0 )
        goto LABEL_9;
      if ( v8[1] == 1 )
      {
        ResultLength -= 12;
        v16 = (void *)ExAllocatePool2(256LL, ResultLength, 1263556947LL);
        *v6 = v16;
        if ( v16 )
        {
          memmove(v16, v8 + 3, ResultLength);
          v13 = 0;
          *v7 = ResultLength;
          goto LABEL_9;
        }
        goto LABEL_16;
      }
      v13 = -1073741788;
    }
    else if ( v14 >= 0 )
    {
      v13 = -1073741823;
    }
  }
LABEL_9:
  if ( v9 )
    ZwClose(v9);
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  return (unsigned int)v13;
}
