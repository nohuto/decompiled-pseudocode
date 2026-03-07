__int64 __fastcall PiDrvDbQueryHiveFileName(__int64 a1, UNICODE_STRING *a2)
{
  int v4; // ebx
  wchar_t *Buffer; // rdi
  unsigned __int16 MaximumLength; // si
  int v7; // eax
  __int64 v8; // rbx
  HANDLE Handle; // [rsp+30h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-18h] BYREF
  int v12; // [rsp+A0h] [rbp+50h] BYREF
  __int64 v13; // [rsp+A8h] [rbp+58h] BYREF

  Handle = 0LL;
  LODWORD(v13) = 0;
  v12 = 0;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  v4 = SysCtxRegOpenKey(
         0LL,
         2147483650LL,
         (__int64)L"SYSTEM\\CurrentControlSet\\Control\\HiveList",
         0,
         1u,
         (__int64)&Handle);
  if ( v4 >= 0 )
  {
    Buffer = DestinationString.Buffer;
    MaximumLength = DestinationString.MaximumLength;
    while ( 1 )
    {
      v7 = RegRtlQueryValue(Handle, *(const WCHAR **)(a1 + 8), &v12, Buffer, (unsigned int *)&v13);
      v4 = v7;
      if ( v7 != -1073741789 )
        break;
      if ( v12 != 1 )
        goto LABEL_17;
      v8 = (unsigned int)v13;
      if ( (unsigned int)v13 < 2 || (unsigned int)v13 < MaximumLength || (unsigned int)v13 > 0xFFFE )
        goto LABEL_17;
      if ( Buffer )
        ExFreePool(Buffer);
      DestinationString.MaximumLength = v8;
      MaximumLength = v8;
      DestinationString.Buffer = (wchar_t *)ExpAllocateStringRoutine(v8);
      Buffer = DestinationString.Buffer;
      if ( !DestinationString.Buffer )
      {
        v4 = -1073741801;
        goto LABEL_18;
      }
    }
    if ( v7 < 0 )
      goto LABEL_18;
    if ( v12 == 1 && (unsigned int)(v13 - 2) <= 0xFFFC && !Buffer[((unsigned __int64)(unsigned int)v13 >> 1) - 1] )
    {
      DestinationString.MaximumLength = v13;
      DestinationString.Length = v13 - 2;
      *a2 = DestinationString;
      RtlInitUnicodeString(&DestinationString, 0LL);
      goto LABEL_18;
    }
LABEL_17:
    v4 = -1073741823;
  }
LABEL_18:
  RtlFreeUnicodeString(&DestinationString);
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v4;
}
