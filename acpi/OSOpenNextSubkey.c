__int64 __fastcall OSOpenNextSubkey(HANDLE KeyHandle, ULONG Index, void *a3, _DWORD *a4, __int64 a5)
{
  int v9; // ebx
  NTSTATUS v10; // eax
  ULONG v11; // eax
  unsigned __int16 *Pool2; // rax
  int v13; // edx
  unsigned __int16 *v14; // rsi
  int v15; // edx
  int MaximumLength; // r15d
  struct _STRING DestinationString; // [rsp+38h] [rbp-28h] BYREF
  UNICODE_STRING SourceString; // [rsp+48h] [rbp-18h] BYREF
  ULONG ResultLength; // [rsp+90h] [rbp+30h] BYREF

  ResultLength = 0;
  DestinationString = 0LL;
  SourceString = 0LL;
  if ( !KeyHandle || a4 && *a4 && !a3 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    v10 = ZwEnumerateKey(KeyHandle, Index, KeyBasicInformation, 0LL, 0, &ResultLength);
    v9 = v10;
    if ( v10 )
    {
      if ( v10 == -2147483643 || v10 == -1073741789 )
      {
        v11 = ResultLength;
        if ( ResultLength <= 0x18 )
          v11 = 24;
        ResultLength = v11;
        Pool2 = (unsigned __int16 *)ExAllocatePool2(256LL, v11, 1299211073LL);
        v14 = Pool2;
        if ( Pool2 )
        {
          v9 = ZwEnumerateKey(KeyHandle, Index, KeyBasicInformation, Pool2, ResultLength, &ResultLength);
          if ( v9 >= 0 )
          {
            SourceString.Buffer = v14 + 8;
            SourceString.Length = v14[6];
            SourceString.MaximumLength = v14[6] + 2;
            v9 = RtlUnicodeStringToAnsiString(&DestinationString, &SourceString, 1u);
            if ( v9 >= 0 )
            {
              if ( !a4 )
                goto LABEL_24;
              MaximumLength = DestinationString.MaximumLength;
              if ( *a4 < (unsigned int)DestinationString.MaximumLength )
                v9 = -1073741789;
              else
                memmove(a3, DestinationString.Buffer, DestinationString.MaximumLength);
              *a4 = MaximumLength;
              if ( v9 >= 0 )
              {
LABEL_24:
                if ( a5 )
                  v9 = OSOpenHandle(DestinationString.Buffer, (__int64)KeyHandle, a5);
              }
              RtlFreeAnsiString(&DestinationString);
            }
            else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v15) = 2;
              WPP_RECORDER_SF_d(
                WPP_GLOBAL_Control->DeviceExtension,
                v15,
                21,
                15,
                (__int64)&WPP_0ff02685c5363f18e09d8afa1fc83b4b_Traceguids,
                v9);
            }
          }
          ExFreePoolWithTag(v14, 0);
        }
        else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v13) = 2;
          WPP_RECORDER_SF_d(
            WPP_GLOBAL_Control->DeviceExtension,
            v13,
            21,
            14,
            (__int64)&WPP_0ff02685c5363f18e09d8afa1fc83b4b_Traceguids,
            ResultLength);
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
