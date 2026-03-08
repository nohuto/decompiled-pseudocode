/*
 * XREFs of AstLogDeviceCreated @ 0x1407F0D60
 * Callers:
 *     IoCreateDevice @ 0x1407F0460 (IoCreateDevice.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140243F90 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     _tlgKeywordOn @ 0x14035F490 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ObQueryNameStringMode @ 0x14071EE84 (ObQueryNameStringMode.c)
 *     AstIsRecording @ 0x1407F0EA4 (AstIsRecording.c)
 *     ExAllocatePool3 @ 0x140AAB320 (ExAllocatePool3.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall AstLogDeviceCreated(char *a1, int a2, int a3)
{
  char *v6; // rcx
  int v7; // eax
  __int64 Pool3; // rax
  UNICODE_STRING *v9; // rbx
  const WCHAR *v10; // rdx
  unsigned int v11; // [rsp+38h] [rbp-89h] BYREF
  int v12; // [rsp+3Ch] [rbp-85h] BYREF
  int v13; // [rsp+40h] [rbp-81h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-79h] BYREF
  __int64 v15; // [rsp+58h] [rbp-69h] BYREF
  __int64 v16; // [rsp+60h] [rbp-61h]
  __int64 v17; // [rsp+68h] [rbp-59h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v18; // [rsp+78h] [rbp-49h] BYREF
  __int64 *v19; // [rsp+98h] [rbp-29h]
  __int64 v20; // [rsp+A0h] [rbp-21h]
  _DWORD *v21; // [rsp+A8h] [rbp-19h]
  __int64 v22; // [rsp+B0h] [rbp-11h]
  wchar_t *Buffer; // [rsp+B8h] [rbp-9h]
  _DWORD v24[2]; // [rsp+C0h] [rbp-1h] BYREF
  int *v25; // [rsp+C8h] [rbp+7h]
  __int64 v26; // [rsp+D0h] [rbp+Fh]
  int *v27; // [rsp+D8h] [rbp+17h]
  __int64 v28; // [rsp+E0h] [rbp+1Fh]
  UNICODE_STRING *p_DestinationString; // [rsp+E8h] [rbp+27h]
  __int64 v30; // [rsp+F0h] [rbp+2Fh]

  DestinationString = 0LL;
  v11 = 0;
  HIDWORD(v16) = 0;
  if ( !(unsigned __int8)AstIsRecording() )
    return;
  v7 = ObQueryNameStringMode(v6, 0LL, 0, &v11, 0);
  if ( v11 <= 0x10 || v7 != -1073741820 )
    return;
  v16 = 0LL;
  v15 = 1LL;
  Pool3 = ExAllocatePool3(256, v11, 1849975617, (unsigned int)&v15, 1);
  v9 = (UNICODE_STRING *)Pool3;
  if ( Pool3 )
  {
    if ( (int)ObQueryNameStringMode(a1, Pool3, v11, &v11, 0) >= 0 )
    {
      DestinationString = *v9;
      goto LABEL_8;
    }
    v10 = L"Query failed";
  }
  else
  {
    v10 = L"Storage allocation failed";
  }
  RtlInitUnicodeString(&DestinationString, v10);
LABEL_8:
  if ( (unsigned int)dword_140C038B8 > 5 && tlgKeywordOn((__int64)&dword_140C038B8, 0x200000000000LL) )
  {
    v22 = 2LL;
    v20 = 8LL;
    v17 = 0x80000000LL;
    v30 = 8LL;
    v19 = &v17;
    v24[1] = 0;
    v21 = v24;
    Buffer = DestinationString.Buffer;
    v24[0] = DestinationString.Length;
    v25 = &v12;
    v27 = &v13;
    p_DestinationString = &DestinationString;
    v12 = a2;
    v26 = 4LL;
    v13 = a3;
    v28 = 4LL;
    *(_QWORD *)&DestinationString.Length = a1;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140C038B8, (unsigned __int8 *)byte_14002C42B, 0LL, 0LL, 8u, &v18);
  }
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
}
