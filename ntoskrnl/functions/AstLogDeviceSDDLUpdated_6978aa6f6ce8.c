void __fastcall AstLogDeviceSDDLUpdated(__int64 a1)
{
  int v2; // ecx
  WCHAR *v3; // rdi
  void *Pool3; // rbx
  const WCHAR *v5; // rdx
  __int64 v6; // [rsp+38h] [rbp-49h] BYREF
  PCWSTR SourceString; // [rsp+40h] [rbp-41h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-39h] BYREF
  __int64 v9; // [rsp+58h] [rbp-29h] BYREF
  int v10; // [rsp+60h] [rbp-21h]
  int v11; // [rsp+64h] [rbp-1Dh]
  struct _EVENT_DATA_DESCRIPTOR v12; // [rsp+68h] [rbp-19h] BYREF
  PCWSTR *p_SourceString; // [rsp+88h] [rbp+7h]
  int v14; // [rsp+90h] [rbp+Fh]
  int v15; // [rsp+94h] [rbp+13h]
  __int64 *v16; // [rsp+98h] [rbp+17h]
  int v17; // [rsp+A0h] [rbp+1Fh]
  int v18; // [rsp+A4h] [rbp+23h]
  _DWORD *v19; // [rsp+A8h] [rbp+27h]
  int v20; // [rsp+B0h] [rbp+2Fh]
  int v21; // [rsp+B4h] [rbp+33h]
  wchar_t *Buffer; // [rsp+B8h] [rbp+37h]
  _DWORD v23[2]; // [rsp+C0h] [rbp+3Fh] BYREF

  LODWORD(v6) = 0;
  DestinationString = 0LL;
  if ( (unsigned __int8)AstIsRecording() )
  {
    v3 = 0LL;
    SourceString = 0LL;
    Pool3 = 0LL;
    if ( (unsigned int)ObQuerySecurityObject(v2, -1, 0, 0, (__int64)&v6) == -1073741789 )
    {
      v11 = 0;
      v10 = 0;
      v9 = 1LL;
      Pool3 = (void *)ExAllocatePool3(256, v6, 1933861697, (unsigned int)&v9, 1);
      if ( Pool3 )
      {
        if ( (int)ObQuerySecurityObject(a1, -1, (_DWORD)Pool3, v6, (__int64)&v6) < 0 )
        {
          v5 = L"Query failed";
        }
        else
        {
          SeConvertSecurityDescriptorToStringSecurityDescriptor((__int64)Pool3, 1LL, 0xFFFFFFFFLL, &SourceString, 0LL);
          v3 = (WCHAR *)SourceString;
          v5 = SourceString;
        }
      }
      else
      {
        v5 = L"Storage allocation failed";
      }
    }
    else
    {
      v5 = L"Length query failed";
    }
    RtlInitUnicodeString(&DestinationString, v5);
    if ( (unsigned int)dword_140C038B8 > 5 && tlgKeywordOn((__int64)&dword_140C038B8, 0x200000000000LL) )
    {
      v15 = 0;
      v18 = 0;
      v21 = 0;
      v23[1] = 0;
      SourceString = (PCWSTR)0x80000000LL;
      v14 = 8;
      p_SourceString = &SourceString;
      v16 = &v6;
      v19 = v23;
      Buffer = DestinationString.Buffer;
      v23[0] = DestinationString.Length;
      v17 = 8;
      v6 = a1;
      v20 = 2;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140C038B8,
        (unsigned __int8 *)&byte_14002C3C7,
        0LL,
        0LL,
        6u,
        &v12);
    }
    if ( Pool3 )
      ExFreePoolWithTag(Pool3, 0);
    if ( v3 )
      ExFreePoolWithTag(v3, 0);
  }
}
