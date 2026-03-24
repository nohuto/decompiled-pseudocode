/*
 * XREFs of OSReadNextRegValue @ 0x1C00B2EAC
 * Callers:
 *     AMLIAddNextNamespaceOverride @ 0x1C0064824 (AMLIAddNextNamespaceOverride.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0002B90 (WPP_RECORDER_SF_D.c)
 *     memmove @ 0x1C00321C0 (memmove.c)
 *     WPP_RECORDER_SF_d @ 0x1C005DB8C (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall OSReadNextRegValue(HANDLE KeyHandle, ULONG Index, void *a3, _DWORD *a4)
{
  NTSTATUS v8; // ebx
  NTSTATUS v9; // eax
  ULONG v10; // eax
  unsigned __int16 *PoolWithTag; // rax
  unsigned __int16 *v12; // r14
  int MaximumLength; // esi
  PULONG ResultLength; // [rsp+28h] [rbp-28h]
  PULONG ResultLengtha; // [rsp+28h] [rbp-28h]
  struct _STRING DestinationString; // [rsp+30h] [rbp-20h] BYREF
  UNICODE_STRING SourceString; // [rsp+40h] [rbp-10h] BYREF
  ULONG Length; // [rsp+80h] [rbp+30h] BYREF

  Length = 0;
  DestinationString = 0LL;
  SourceString = 0LL;
  if ( !KeyHandle || a4 && *a4 && !a3 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    v9 = ZwEnumerateValueKey(KeyHandle, Index, KeyValueBasicInformation, 0LL, 0, &Length);
    v8 = v9;
    if ( v9 )
    {
      if ( v9 == -2147483643 || v9 == -1073741789 )
      {
        v10 = Length;
        if ( Length <= 0x10 )
          v10 = 16;
        Length = v10;
        PoolWithTag = (unsigned __int16 *)ExAllocatePoolWithTag(PagedPool, v10, 0x4D706341u);
        v12 = PoolWithTag;
        if ( PoolWithTag )
        {
          v8 = ZwEnumerateValueKey(KeyHandle, Index, KeyValueBasicInformation, PoolWithTag, Length, &Length);
          if ( v8 >= 0 )
          {
            SourceString.Buffer = v12 + 6;
            SourceString.Length = v12[4];
            SourceString.MaximumLength = v12[4] + 2;
            v8 = RtlUnicodeStringToAnsiString(&DestinationString, &SourceString, 1u);
            if ( v8 >= 0 )
            {
              if ( a4 )
              {
                MaximumLength = DestinationString.MaximumLength;
                if ( *a4 < (unsigned int)DestinationString.MaximumLength )
                  v8 = -1073741789;
                else
                  memmove(a3, DestinationString.Buffer, DestinationString.MaximumLength);
                *a4 = MaximumLength;
              }
              RtlFreeAnsiString(&DestinationString);
            }
            else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LODWORD(ResultLengtha) = v8;
              WPP_RECORDER_SF_D(
                (__int64)WPP_GLOBAL_Control->DeviceExtension,
                2u,
                0x15u,
                0x1Bu,
                (__int64)&WPP_6006670290f3383f41c779ffdcc42ff2_Traceguids,
                ResultLengtha,
                *(_QWORD *)&DestinationString.Length,
                DestinationString.Buffer);
            }
          }
          ExFreePoolWithTag(v12, 0);
        }
        else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(ResultLength) = Length;
          WPP_RECORDER_SF_d(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            0x15u,
            0x1Au,
            (__int64)&WPP_6006670290f3383f41c779ffdcc42ff2_Traceguids,
            ResultLength,
            *(_QWORD *)&DestinationString.Length,
            DestinationString.Buffer,
            *(_QWORD *)&SourceString.Length,
            SourceString.Buffer);
        }
      }
    }
    else
    {
      return (unsigned int)-1073741823;
    }
  }
  return (unsigned int)v8;
}
