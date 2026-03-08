/*
 * XREFs of OSReadNextRegValue @ 0x1C008E47C
 * Callers:
 *     AMLIAddNextNamespaceOverride @ 0x1C004A3CC (AMLIAddNextNamespaceOverride.c)
 * Callees:
 *     memmove @ 0x1C0001E80 (memmove.c)
 *     WPP_RECORDER_SF_d @ 0x1C000ACAC (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall OSReadNextRegValue(HANDLE KeyHandle, ULONG Index, void *a3, _DWORD *a4)
{
  NTSTATUS v8; // ebx
  NTSTATUS v9; // eax
  ULONG v10; // eax
  unsigned __int16 *Pool2; // rax
  int v12; // edx
  unsigned __int16 *v13; // r14
  int v14; // edx
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
        Pool2 = (unsigned __int16 *)ExAllocatePool2(256LL, v10, 1299211073LL);
        v13 = Pool2;
        if ( Pool2 )
        {
          v8 = ZwEnumerateValueKey(KeyHandle, Index, KeyValueBasicInformation, Pool2, Length, &Length);
          if ( v8 >= 0 )
          {
            SourceString.Buffer = v13 + 6;
            SourceString.Length = v13[4];
            SourceString.MaximumLength = v13[4] + 2;
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
              LOBYTE(v14) = 2;
              WPP_RECORDER_SF_d(
                WPP_GLOBAL_Control->DeviceExtension,
                v14,
                21,
                27,
                (__int64)&WPP_0ff02685c5363f18e09d8afa1fc83b4b_Traceguids,
                ResultLengtha,
                *(_QWORD *)&DestinationString.Length,
                DestinationString.Buffer);
            }
          }
          ExFreePoolWithTag(v13, 0);
        }
        else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(ResultLength) = Length;
          LOBYTE(v12) = 2;
          WPP_RECORDER_SF_d(
            WPP_GLOBAL_Control->DeviceExtension,
            v12,
            21,
            26,
            (__int64)&WPP_0ff02685c5363f18e09d8afa1fc83b4b_Traceguids,
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
  return (unsigned int)v8;
}
