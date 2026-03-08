/*
 * XREFs of RtlpLoadPolicyLanguageSpec @ 0x140A716A4
 * Callers:
 *     RtlpLoadLanguageConfigList @ 0x140843624 (RtlpLoadLanguageConfigList.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     RtlCultureNameToLCID @ 0x1407FE570 (RtlCultureNameToLCID.c)
 *     RtlpMuiRegGetOrAddString @ 0x140844498 (RtlpMuiRegGetOrAddString.c)
 *     LdrpQueryValueKey @ 0x1408446D0 (LdrpQueryValueKey.c)
 *     RtlpMuiRegGetInstalledLanguageIndex @ 0x140A71DC4 (RtlpMuiRegGetInstalledLanguageIndex.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall RtlpLoadPolicyLanguageSpec(HANDLE KeyHandle, __int64 a2, _BYTE *a3, __int16 *a4)
{
  unsigned int v8; // esi
  int v9; // eax
  void *Pool2; // rdi
  int InstalledLanguageIndex; // ebx
  unsigned __int16 v12; // cx
  __int16 v14[2]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v15; // [rsp+34h] [rbp-1Ch] BYREF
  int v16; // [rsp+3Ch] [rbp-14h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-10h] BYREF
  unsigned __int16 v18; // [rsp+88h] [rbp+38h] BYREF

  v16 = 0;
  v18 = 0;
  v14[0] = -1;
  DestinationString = 0LL;
  if ( !a2 || !KeyHandle )
    return (unsigned int)-1073741811;
  v8 = 1;
  v15 = 0x100000000LL;
  RtlInitUnicodeString(&DestinationString, L"PreferredUILanguages");
  v9 = LdrpQueryValueKey(KeyHandle, &DestinationString, (_DWORD *)&v15 + 1, 0LL, (ULONG *)&v15);
  if ( !(_DWORD)v15 || v9 == -1073741772 )
    return (unsigned int)-1073741823;
  Pool2 = (void *)ExAllocatePool2(256LL, (unsigned int)v15, 1920232557LL);
  if ( Pool2 )
  {
    InstalledLanguageIndex = LdrpQueryValueKey(KeyHandle, &DestinationString, (_DWORD *)&v15 + 1, Pool2, (ULONG *)&v15);
    if ( InstalledLanguageIndex >= 0 )
    {
      if ( HIDWORD(v15) == 1
        && (RtlInitUnicodeString(&DestinationString, (PCWSTR)Pool2),
            RtlCultureNameToLCID(&DestinationString.Length, &v16)) )
      {
        v12 = v16;
        if ( ((v16 - 4096) & 0xFFFFFBFF) != 0 )
          goto LABEL_14;
        InstalledLanguageIndex = RtlpMuiRegGetOrAddString(a2, DestinationString.Buffer, 0LL, (__int16 *)&v18);
        if ( InstalledLanguageIndex >= 0 )
        {
          v12 = v18;
          v8 = 3;
LABEL_14:
          InstalledLanguageIndex = RtlpMuiRegGetInstalledLanguageIndex(a2, v8, v12, v14);
          if ( InstalledLanguageIndex >= 0 )
          {
            if ( a3 )
              *a3 = 2;
            if ( a4 )
              *a4 = v14[0];
          }
        }
      }
      else
      {
        InstalledLanguageIndex = -1073741823;
      }
    }
    ExFreePoolWithTag(Pool2, 0);
    return (unsigned int)InstalledLanguageIndex;
  }
  return (unsigned int)-1073741801;
}
