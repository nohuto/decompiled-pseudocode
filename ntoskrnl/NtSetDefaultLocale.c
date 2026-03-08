/*
 * XREFs of NtSetDefaultLocale @ 0x1407497C0
 * Callers:
 *     <none>
 * Callees:
 *     OpenGlobalizationUserSettingsKey @ 0x1402BEDA8 (OpenGlobalizationUserSettingsKey.c)
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwOpenKey @ 0x140412550 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1404125F0 (ZwQueryValueKey.c)
 *     ZwSetValueKey @ 0x140412F10 (ZwSetValueKey.c)
 *     ZwDeleteValueKey @ 0x140413EB0 (ZwDeleteValueKey.c)
 *     RtlIsMultiSessionSku @ 0x1407447E0 (RtlIsMultiSessionSku.c)
 *     ExCheckFullProcessInformationAccess @ 0x140791A18 (ExCheckFullProcessInformationAccess.c)
 */

__int64 __fastcall NtSetDefaultLocale(__int64 a1, __int64 a2)
{
  int v2; // edi
  char v3; // si
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  NTSTATUS v7; // ebx
  int *v8; // rdx
  unsigned int i; // r9d
  int v10; // ecx
  unsigned int v11; // eax
  _KPROCESS *Process; // rdx
  unsigned __int64 v13; // rcx
  unsigned int v14; // r9d
  _WORD *v15; // r8
  _WORD *v16; // r8
  _WORD *v17; // rdx
  unsigned int v18; // ecx
  __int16 v19; // ax
  HANDLE KeyHandle; // [rsp+38h] [rbp-D0h] BYREF
  ULONG ResultLength[2]; // [rsp+40h] [rbp-C8h] BYREF
  HANDLE DestinationString; // [rsp+48h] [rbp-C0h] BYREF
  UNICODE_STRING DestinationString_8; // [rsp+50h] [rbp-B8h] BYREF
  UNICODE_STRING v24; // [rsp+60h] [rbp-A8h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-98h] BYREF
  _WORD KeyValueInformation[2]; // [rsp+A8h] [rbp-60h] BYREF
  int v27; // [rsp+ACh] [rbp-5Ch]
  unsigned int v28; // [rsp+B0h] [rbp-58h]
  int v29; // [rsp+B4h] [rbp-54h] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v2 = a2;
  DestinationString = 0LL;
  v3 = a1;
  KeyHandle = 0LL;
  ResultLength[0] = 0;
  v24 = 0LL;
  DestinationString_8 = 0LL;
  if ( (_BYTE)a1 )
  {
    result = OpenGlobalizationUserSettingsKey(a1, a2, &DestinationString);
    if ( (int)result < 0 )
      return result;
    RtlInitUnicodeString(&DestinationString_8, L"Locale");
    RtlInitUnicodeString(&v24, L"Control Panel\\International");
    v6 = 1600LL;
  }
  else
  {
    LOBYTE(a1) = KeGetCurrentThread()->PreviousMode;
    result = ExCheckFullProcessInformationAccess(a1);
    if ( (int)result < 0 )
      return result;
    RtlInitUnicodeString(&DestinationString_8, L"Default");
    RtlInitUnicodeString(&v24, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Nls\\Language");
    v6 = 576LL;
  }
  ObjectAttributes.RootDirectory = DestinationString;
  ObjectAttributes.ObjectName = &v24;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = v6;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( v2 )
  {
    if ( !v3 || RtlIsMultiSessionSku(v6, v5) )
    {
      v7 = ZwOpenKey(&KeyHandle, 0x40000000u, &ObjectAttributes);
      if ( v7 < 0 )
        goto LABEL_17;
      v14 = v2;
      v15 = (_WORD *)((char *)KeyValueInformation + (v3 != 0 ? 16LL : 8LL));
      *v15 = 0;
      v16 = v15 - 1;
      if ( v16 >= KeyValueInformation )
      {
        do
        {
          v17 = v16 - 1;
          v18 = v14 & 0xF;
          v19 = 48;
          if ( v18 > 9 )
            v19 = 55;
          v14 >>= 4;
          *v16-- = v18 + v19;
        }
        while ( v17 >= KeyValueInformation );
      }
      v7 = ZwSetValueKey(KeyHandle, &DestinationString_8, 0, 1u, KeyValueInformation, v3 != 0 ? 18 : 10);
    }
    else
    {
      v7 = ZwOpenKey(&KeyHandle, 0x40000000u, &ObjectAttributes);
      if ( v7 < 0 )
        goto LABEL_17;
      ZwDeleteValueKey(KeyHandle, &DestinationString_8);
    }
    goto LABEL_16;
  }
  v7 = ZwOpenKey(&KeyHandle, 0x80000000, &ObjectAttributes);
  if ( v7 >= 0 )
  {
    v7 = ZwQueryValueKey(
           KeyHandle,
           &DestinationString_8,
           KeyValuePartialInformation,
           KeyValueInformation,
           0x100u,
           ResultLength);
    if ( v7 >= 0 )
    {
      if ( v27 == 1 )
      {
        v8 = &v29;
        for ( i = 0; i < v28; v2 = v11 | (16 * v2) )
        {
          v10 = *(unsigned __int16 *)v8;
          v8 = (int *)((char *)v8 + 2);
          if ( (unsigned __int16)(v10 - 48) > 9u )
          {
            if ( (unsigned __int16)(v10 - 65) <= 5u )
            {
              v11 = v10 - 55;
            }
            else
            {
              if ( (unsigned __int16)(v10 - 97) > 5u )
                break;
              v11 = v10 - 87;
            }
          }
          else
          {
            v11 = v10 - 48;
          }
          if ( v11 >= 0x10 )
            break;
          i += 2;
        }
      }
      else if ( v27 == 4 && v28 == 4 )
      {
        v2 = v29;
      }
      else
      {
        v7 = -1073741823;
      }
    }
LABEL_16:
    ZwClose(KeyHandle);
  }
LABEL_17:
  if ( DestinationString )
    ZwClose(DestinationString);
  if ( v7 >= 0 )
  {
    if ( v3 )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      v13 = Process[1].Affinity.StaticBitmap[25];
      if ( !v13 || (HIDWORD(Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
        PsDefaultThreadLocaleId = v2;
      else
        *(_DWORD *)(v13 + 72) = v2;
    }
    else
    {
      PsDefaultSystemLocaleId = v2;
    }
  }
  return (unsigned int)v7;
}
