/*
 * XREFs of ?ReadTabletButtonConfig@@YAJIQEBGPEAUtagTABLET_BUTTON_DESK_CONFIG@@@Z @ 0x1C01D89FC
 * Callers:
 *     ?ReadTabletButtonSettings@@YAXXZ @ 0x1C01D8E24 (-ReadTabletButtonSettings@@YAXXZ.c)
 * Callees:
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C0011430 (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 */

__int64 __fastcall ReadTabletButtonConfig(
        unsigned int a1,
        const unsigned __int16 *a2,
        struct tagTABLET_BUTTON_DESK_CONFIG *a3)
{
  unsigned int *v6; // rbx
  NTSTATUS v8; // esi
  __int64 v9; // rdi
  __int64 v10; // r14
  NTSTATUS v11; // eax
  int *v12; // r8
  int v13; // r9d
  unsigned int v14; // ecx
  ULONG ResultLength; // [rsp+30h] [rbp-D0h] BYREF
  void *KeyHandle; // [rsp+38h] [rbp-C8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C0h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+50h] [rbp-B0h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-A0h] BYREF
  PCWSTR v20[8]; // [rsp+90h] [rbp-70h]
  _QWORD v21[8]; // [rsp+D0h] [rbp-30h]
  WCHAR SourceString[264]; // [rsp+110h] [rbp+10h] BYREF

  KeyHandle = 0LL;
  ResultLength = 0;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  DestinationString = 0LL;
  ValueName = 0LL;
  v6 = (unsigned int *)Win32AllocPool(548LL, 1984656213LL);
  if ( !v6 )
    return 3221225495LL;
  RtlStringCchPrintfW(
    SourceString,
    0x105uLL,
    (size_t *)L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control\\TabletPC\\TabletButtons\\%d\\%ws",
    a1,
    a2);
  RtlInitUnicodeString(&DestinationString, SourceString);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v8 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( v8 >= 0 )
  {
    v21[0] = a3;
    v21[1] = (char *)a3 + 4;
    v21[2] = (char *)a3 + 8;
    v21[3] = (char *)a3 + 12;
    v21[4] = (char *)a3 + 16;
    v21[5] = (char *)a3 + 20;
    v21[6] = (char *)a3 + 24;
    v21[7] = (char *)a3 + 28;
    v9 = 0LL;
    v20[0] = L"DEFACTION";
    v20[1] = L"DEFACTIONDATA";
    v20[2] = L"DEFHOLDACTION";
    v10 = 8LL;
    v20[3] = L"DEFHOLDACTIONDATA";
    v20[4] = L"WINLOGONACTION";
    v20[5] = L"WINLOGONACTIONDATA";
    v20[6] = L"WINLOGONHOLDACTION";
    v20[7] = L"WINLOGONHOLDACTIONDATA";
    do
    {
      RtlInitUnicodeString(&ValueName, v20[v9]);
      v11 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValueFullInformation, v6, 0x224u, &ResultLength);
      v12 = (int *)v21[v9];
      v8 = v11;
      if ( v11 < 0 )
      {
        *v12 = 0;
      }
      else
      {
        v13 = *(unsigned int *)((char *)v6 + v6[2]);
        *v12 = v13;
        v14 = v6[3];
        if ( v14 < 4 )
          *v12 = v13 & ((1 << (8 * v14)) - 1);
      }
      ++v9;
      --v10;
    }
    while ( v10 );
    ZwClose(KeyHandle);
  }
  Win32FreePool(v6);
  return (unsigned int)v8;
}
