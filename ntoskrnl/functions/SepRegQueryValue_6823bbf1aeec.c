__int64 __fastcall SepRegQueryValue(HANDLE KeyHandle, const WCHAR *a2, int a3, unsigned int a4, _DWORD *a5)
{
  size_t v6; // rsi
  NTSTATUS v8; // ebx
  int v9; // edi
  ULONG ResultLength; // [rsp+30h] [rbp-98h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-90h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+50h] [rbp-78h] BYREF
  int v14; // [rsp+54h] [rbp-74h]
  int v15; // [rsp+58h] [rbp-70h]
  _DWORD Src[17]; // [rsp+5Ch] [rbp-6Ch] BYREF

  ResultLength = 0;
  v6 = a4;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, a2);
  v8 = ZwQueryValueKey(
         KeyHandle,
         &DestinationString,
         KeyValuePartialInformation,
         KeyValueInformation,
         0x50u,
         &ResultLength);
  if ( v8 >= 0 )
  {
    if ( v14 == a3 && v15 == (_DWORD)v6 )
    {
      v9 = a3 - 3;
      if ( v9 )
      {
        if ( v9 == 1 && (unsigned int)v6 >= 4 )
          *a5 = Src[0];
        else
          return (unsigned int)-1073741811;
      }
      else
      {
        memmove(a5, Src, v6);
      }
    }
    else
    {
      return (unsigned int)-1073741788;
    }
  }
  return (unsigned int)v8;
}
