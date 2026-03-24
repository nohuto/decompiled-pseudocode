/*
 * XREFs of InitClipboardILDef @ 0x1C0134680
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C004D9D8 (WPP_RECORDER_SF_.c)
 *     ?GetClipILIndexFromName@@YAIPEAGI@Z @ 0x1C021E77C (-GetClipILIndexFromName@@YAIPEAGI@Z.c)
 */

void InitClipboardILDef()
{
  _DWORD *v0; // rbx
  __int64 v1; // rdi
  int v2; // edx
  int v3; // ecx
  NTSTATUS v4; // eax
  ULONG v5; // r14d
  ULONG v6; // esi
  unsigned int ClipILIndexFromName; // eax
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  ULONG Length; // [rsp+A0h] [rbp+30h] BYREF
  void *KeyHandle; // [rsp+A8h] [rbp+38h] BYREF

  Length = 0;
  KeyHandle = 0LL;
  v0 = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  v1 = 0LL;
  *(&ObjectAttributes.Attributes + 1) = 0;
  DestinationString = 0LL;
  RtlInitUnicodeString(
    &DestinationString,
    L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\CurrentVersion\\Policies\\System\\UIPI\\Clipboard\\IntegrityLevelDef");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
  {
    v4 = ZwQueryKey(KeyHandle, KeyFullInformation, 0LL, 0, &Length);
    if ( v4 == -2147483643 || v4 == -1073741789 )
    {
      v0 = (_DWORD *)Win32AllocPool(Length, 1650684757LL);
      if ( v0 )
      {
        if ( ZwQueryKey(KeyHandle, KeyFullInformation, v0, Length, &Length) >= 0 && (unsigned int)(v0[8] - 1) <= 4 )
        {
          v5 = v0[9] + 16;
          if ( v0[9] < 0xFFFFFFF0 )
          {
            v1 = Win32AllocPool(v5, 1650684757LL);
            if ( v1 )
            {
              v6 = 0;
              if ( !v0[8] )
                goto LABEL_5;
              while ( ZwEnumerateValueKey(KeyHandle, v6, KeyValueBasicInformation, (PVOID)v1, v5, &Length) >= 0 )
              {
                if ( *(_DWORD *)(v1 + 4) == 1 )
                {
                  ClipILIndexFromName = GetClipILIndexFromName((wchar_t *)(v1 + 12), *(_DWORD *)(v1 + 8));
                  if ( ClipILIndexFromName != -1 )
                    dword_1C032A054[6 * ClipILIndexFromName] = 1;
                }
                if ( ++v6 >= v0[8] )
                  goto LABEL_5;
              }
            }
          }
        }
      }
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v2) = 4;
    WPP_RECORDER_SF_(v3, v2, 17, 10, (__int64)&WPP_163528e29d493e69e95520b3b68f976c_Traceguids);
  }
  dword_1C032A09C = 0;
  dword_1C032A084 = 0;
  dword_1C032A054[0] = 0;
  dword_1C032A0B4 = 1;
  dword_1C032A06C = 1;
LABEL_5:
  dword_1C032A0CC = 1;
  if ( v1 )
    Win32FreePool((void *)v1);
  if ( v0 )
    Win32FreePool(v0);
  if ( KeyHandle )
    ZwClose(KeyHandle);
}
