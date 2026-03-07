__int64 __fastcall GetFlags(PCWSTR SourceString, PWSTR *EndPointer, _DWORD *a3)
{
  unsigned int v5; // ebx
  NTSTATUS v7; // ecx
  UNICODE_STRING String; // [rsp+20h] [rbp-18h] BYREF
  __int64 Number; // [rsp+40h] [rbp+8h] BYREF

  v5 = 0;
  Number = 0LL;
  *a3 = 0;
  String = 0LL;
  RtlInitUnicodeString(&String, SourceString);
  v7 = RtlUnicodeStringToInt64(&String, 0, &Number, EndPointer);
  if ( v7 >= 0 )
    *a3 = Number;
  if ( *EndPointer != SourceString || *a3 )
  {
    if ( v7 == -1073741675 )
      return 534;
  }
  else
  {
    return 1336;
  }
  return v5;
}
