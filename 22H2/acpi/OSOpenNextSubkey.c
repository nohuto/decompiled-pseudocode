/*
 * XREFs of OSOpenNextSubkey @ 0x1C00B2C68
 * Callers:
 *     AMLIAddNextNamespaceOverride @ 0x1C0064824 (AMLIAddNextNamespaceOverride.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0002B90 (WPP_RECORDER_SF_D.c)
 *     memmove @ 0x1C00321C0 (memmove.c)
 *     WPP_RECORDER_SF_d @ 0x1C005DB8C (WPP_RECORDER_SF_d.c)
 *     OSOpenHandle @ 0x1C008FBB8 (OSOpenHandle.c)
 */

__int64 __fastcall OSOpenNextSubkey(HANDLE KeyHandle, ULONG Index, void *a3, _DWORD *a4, __int64 a5)
{
  int v9; // ebx
  NTSTATUS v10; // eax
  ULONG v11; // eax
  unsigned __int16 *PoolWithTag; // rax
  unsigned __int16 *v13; // rsi
  int MaximumLength; // r14d
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
    v10 = ZwEnumerateKey(KeyHandle, Index, KeyBasicInformation, 0LL, 0, &Length);
    v9 = v10;
    if ( v10 )
    {
      if ( v10 == -2147483643 || v10 == -1073741789 )
      {
        v11 = Length;
        if ( Length <= 0x18 )
          v11 = 24;
        Length = v11;
        PoolWithTag = (unsigned __int16 *)ExAllocatePoolWithTag(PagedPool, v11, 0x4D706341u);
        v13 = PoolWithTag;
        if ( PoolWithTag )
        {
          v9 = ZwEnumerateKey(KeyHandle, Index, KeyBasicInformation, PoolWithTag, Length, &Length);
          if ( v9 >= 0 )
          {
            SourceString.Buffer = v13 + 8;
            SourceString.Length = v13[6];
            SourceString.MaximumLength = v13[6] + 2;
            v9 = RtlUnicodeStringToAnsiString(&DestinationString, &SourceString, 1u);
            if ( v9 >= 0 )
            {
              if ( a4 )
              {
                MaximumLength = DestinationString.MaximumLength;
                if ( *a4 < (unsigned int)DestinationString.MaximumLength )
                  v9 = -1073741789;
                else
                  memmove(a3, DestinationString.Buffer, DestinationString.MaximumLength);
                *a4 = MaximumLength;
              }
              if ( v9 >= 0 && a5 )
                v9 = OSOpenHandle(DestinationString.Buffer, (__int64)KeyHandle, a5);
              RtlFreeAnsiString(&DestinationString);
            }
            else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LODWORD(ResultLengtha) = v9;
              WPP_RECORDER_SF_D(
                (__int64)WPP_GLOBAL_Control->DeviceExtension,
                2u,
                0x15u,
                0xFu,
                (__int64)&WPP_6006670290f3383f41c779ffdcc42ff2_Traceguids,
                ResultLengtha,
                *(_QWORD *)&DestinationString.Length);
            }
          }
          ExFreePoolWithTag(v13, 0);
        }
        else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(ResultLength) = Length;
          WPP_RECORDER_SF_d(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            0x15u,
            0xEu,
            (__int64)&WPP_6006670290f3383f41c779ffdcc42ff2_Traceguids,
            ResultLength,
            *(_QWORD *)&DestinationString.Length);
        }
      }
    }
    else
    {
      return (unsigned int)-1073741823;
    }
  }
  return (unsigned int)v9;
}
