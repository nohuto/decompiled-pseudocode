/*
 * XREFs of InitClipboardILDef @ 0x1C012BCF0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C003E064 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?GetClipILIndexFromName@@YAIPEAGI@Z @ 0x1C01FEC34 (-GetClipILIndexFromName@@YAIPEAGI@Z.c)
 */

void InitClipboardILDef()
{
  _DWORD *v0; // rbx
  __int64 v1; // rdi
  int v2; // edx
  int v3; // r8d
  NTSTATUS v4; // eax
  ULONG v5; // r14d
  ULONG v6; // esi
  unsigned int ClipILIndexFromName; // eax
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  ULONG Length; // [rsp+B0h] [rbp+30h] BYREF
  void *KeyHandle; // [rsp+B8h] [rbp+38h] BYREF

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
      v0 = (_DWORD *)Win32AllocPoolZInit(Length, 1650684757LL);
      if ( v0 )
      {
        if ( ZwQueryKey(KeyHandle, KeyFullInformation, v0, Length, &Length) >= 0 && (unsigned int)(v0[8] - 1) <= 4 )
        {
          v5 = v0[9] + 16;
          if ( v0[9] < 0xFFFFFFF0 )
          {
            v1 = Win32AllocPoolZInit(v5, 1650684757LL);
            if ( v1 )
            {
              v6 = 0;
              if ( !v0[8] )
              {
LABEL_26:
                gaClipILDef[35] = 1;
LABEL_27:
                Win32FreePool((void *)v1);
                goto LABEL_9;
              }
              while ( ZwEnumerateValueKey(KeyHandle, v6, KeyValueBasicInformation, (PVOID)v1, v5, &Length) >= 0 )
              {
                if ( *(_DWORD *)(v1 + 4) == 1 )
                {
                  ClipILIndexFromName = GetClipILIndexFromName((wchar_t *)(v1 + 12), *(_DWORD *)(v1 + 8));
                  if ( ClipILIndexFromName != -1 )
                    gaClipILDef[6 * ClipILIndexFromName + 5] = 1;
                }
                if ( ++v6 >= v0[8] )
                  goto LABEL_26;
              }
            }
          }
        }
      }
    }
  }
  LOBYTE(v2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10000) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)v2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v2,
      v3,
      10,
      4,
      17,
      10,
      (__int64)&WPP_2022ffaa14ad37fd89760c5b6529d075_Traceguids);
  }
  gaClipILDef[35] = 1;
  gaClipILDef[29] = 1;
  gaClipILDef[23] = 0;
  gaClipILDef[17] = 0;
  gaClipILDef[11] = 1;
  gaClipILDef[5] = 0;
  if ( v1 )
    goto LABEL_27;
LABEL_9:
  if ( v0 )
    Win32FreePool(v0);
  if ( KeyHandle )
    ZwClose(KeyHandle);
}
