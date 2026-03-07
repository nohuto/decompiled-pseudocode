__int64 __fastcall PiGetDefaultMessageString(HANDLE KeyHandle, unsigned int a2, _QWORD *a3)
{
  __int64 *v6; // rdi
  int DriverNameFromKeyNode; // ebx
  __int64 *v8; // rax
  unsigned __int16 v9; // ax
  const WCHAR *v10; // rdx
  unsigned __int16 Length; // ax
  wchar_t *Buffer; // rsi
  unsigned __int64 v13; // rbx
  _WORD *Pool2; // rax
  _WORD *v15; // r14
  __int64 v17; // r8
  NTSTATUS v18; // eax
  UNICODE_STRING UnicodeString; // [rsp+30h] [rbp-30h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-20h] BYREF
  STRING SourceString; // [rsp+50h] [rbp-10h] BYREF
  unsigned __int16 *v22; // [rsp+A8h] [rbp+48h] BYREF

  v22 = 0LL;
  SourceString = 0LL;
  DestinationString = 0LL;
  UnicodeString = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  RtlInitUnicodeString(&UnicodeString, 0LL);
  v6 = 0LL;
  DriverNameFromKeyNode = IopGetDriverNameFromKeyNode(KeyHandle, &DestinationString);
  if ( DriverNameFromKeyNode >= 0 )
  {
    v8 = (__int64 *)IopReferenceDriverObjectByName(&DestinationString);
    v6 = v8;
    if ( v8 )
    {
      DriverNameFromKeyNode = RtlFindMessage(v8[3], 0xBu, 0, a2, &v22);
      if ( DriverNameFromKeyNode < 0 )
        goto LABEL_11;
      v9 = v22[1];
      v10 = v22 + 2;
      if ( (v9 & 1) != 0 )
      {
        if ( !RtlCreateUnicodeString(&UnicodeString, v10) )
        {
LABEL_14:
          DriverNameFromKeyNode = -1073741670;
          goto LABEL_11;
        }
      }
      else
      {
        if ( (v9 & 2) != 0 )
        {
          SourceString = 0LL;
          RtlInitUTF8String(&SourceString, (const char *)v10);
          LOBYTE(v17) = 1;
          v18 = RtlUTF8StringToUnicodeString(&UnicodeString, &SourceString, v17);
        }
        else
        {
          RtlInitAnsiString(&SourceString, (PCSZ)v10);
          v18 = RtlAnsiStringToUnicodeString(&UnicodeString, &SourceString, 1u);
        }
        DriverNameFromKeyNode = v18;
        if ( v18 < 0 )
          goto LABEL_11;
      }
      Length = UnicodeString.Length;
      Buffer = UnicodeString.Buffer;
      if ( UnicodeString.Length >= 4u && *(wchar_t *)((char *)UnicodeString.Buffer + UnicodeString.Length - 4) == 13 )
      {
        *(wchar_t *)((char *)UnicodeString.Buffer + UnicodeString.Length - 4) = 0;
        Length -= 4;
        UnicodeString.Length = Length;
      }
      v13 = Length;
      Pool2 = (_WORD *)ExAllocatePool2(256LL, Length + 2LL, 538996816LL);
      v15 = Pool2;
      if ( Pool2 )
      {
        memmove(Pool2, Buffer, (unsigned int)v13);
        *a3 = v15;
        v15[v13 >> 1] = 0;
        DriverNameFromKeyNode = 0;
        goto LABEL_11;
      }
      goto LABEL_14;
    }
    DriverNameFromKeyNode = -1073741823;
  }
LABEL_11:
  RtlFreeUnicodeString(&DestinationString);
  RtlFreeUnicodeString(&UnicodeString);
  if ( v6 )
    ObfDereferenceObject(v6);
  return (unsigned int)DriverNameFromKeyNode;
}
