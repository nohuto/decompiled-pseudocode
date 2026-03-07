void __fastcall CitpParameterGetInt32(HANDLE KeyHandle, const unsigned __int16 *a2, unsigned int *a3)
{
  ULONG ResultLength; // [rsp+30h] [rbp-38h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-30h] BYREF
  _BYTE KeyValueInformation[8]; // [rsp+48h] [rbp-20h] BYREF
  int v8; // [rsp+50h] [rbp-18h]
  unsigned int v9; // [rsp+54h] [rbp-14h]

  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, a2);
  ResultLength = 16;
  if ( ZwQueryValueKey(
         KeyHandle,
         &DestinationString,
         KeyValuePartialInformation,
         KeyValueInformation,
         0x10u,
         &ResultLength) >= 0
    && v8 == 4 )
  {
    *a3 = v9;
  }
}
