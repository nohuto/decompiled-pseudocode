__int64 __fastcall AdtpBuildSidListString(unsigned int *a1, __int64 a2, wchar_t **a3, __int64 a4, _DWORD *a5, char *a6)
{
  NTSTATUS appended; // ebx
  char v9; // r15
  unsigned int v10; // r14d
  unsigned int v11; // esi
  unsigned __int8 **v12; // r13
  unsigned __int8 *v13; // rcx
  unsigned int v14; // ecx
  __int64 v15; // rax
  int v16; // ecx
  wchar_t *Pool2; // r14
  unsigned __int16 Length; // ax
  unsigned int v19; // r13d
  __int64 v20; // rsi
  PSID *v21; // rsi
  unsigned int v23; // [rsp+20h] [rbp-E0h] BYREF
  unsigned int v24; // [rsp+24h] [rbp-DCh]
  UNICODE_STRING Destination; // [rsp+28h] [rbp-D8h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+38h] [rbp-C8h] BYREF
  _DWORD *v27; // [rsp+48h] [rbp-B8h]
  __int64 v28; // [rsp+50h] [rbp-B0h]
  char *v29; // [rsp+58h] [rbp-A8h]
  char v30; // [rsp+60h] [rbp-A0h] BYREF

  v29 = a6;
  v28 = a4;
  v27 = a5;
  appended = 0;
  v9 = 0;
  UnicodeString = 0LL;
  Destination = 0LL;
  if ( a1 && (v10 = *a1) != 0 )
  {
    v11 = 1;
    v12 = (unsigned __int8 **)(*((_QWORD *)a1 + 1) + 8LL);
    v24 = 0;
    do
    {
      v13 = *v12;
      v23 = 0;
      RtlLengthSidAsUnicodeString(v13, &v23);
      v14 = v11 + (v23 >> 1) + 7;
      if ( v14 < v11 )
      {
        appended = -1073741675;
        goto LABEL_26;
      }
      v11 += (v23 >> 1) + 7;
      v12 += 2;
      ++v24;
      appended = 0;
    }
    while ( v24 < v10 );
    if ( v14 > 0x7FFF )
    {
      appended = -1073741811;
      goto LABEL_26;
    }
    v15 = (unsigned int)*v27;
    v16 = v15 + v14;
    if ( (unsigned int)v15 + v11 >= 0x400 )
    {
      Pool2 = (wchar_t *)ExAllocatePool2(256LL, 2LL * v11, 1799447891LL);
      if ( !Pool2 )
      {
        appended = -1073741801;
        goto LABEL_26;
      }
      v9 = 1;
    }
    else
    {
      Pool2 = (wchar_t *)(v28 + 2 * v15);
      *v27 = v16;
    }
    Destination.Buffer = Pool2;
    Length = 0;
    v19 = 0;
    Destination.MaximumLength = 2 * v11;
    v20 = *((_QWORD *)a1 + 1);
    Destination.Length = 0;
    *(_DWORD *)&UnicodeString.Length = 0x2000000;
    UnicodeString.Buffer = (wchar_t *)&v30;
    if ( *a1 )
    {
      v21 = (PSID *)(v20 + 8);
      while ( 1 )
      {
        appended = RtlConvertSidToUnicodeString(&UnicodeString, *v21, 0);
        if ( appended < 0 )
          goto LABEL_22;
        RtlAppendUnicodeToString(&Destination, L"\r\n\t\t%{");
        RtlAppendUnicodeStringToString(&Destination, &UnicodeString);
        ++v19;
        v21 += 2;
        appended = RtlAppendUnicodeToString(&Destination, L"}");
        if ( v19 >= *a1 )
        {
          Length = Destination.Length;
          break;
        }
      }
    }
    if ( a3 )
    {
      *a3 = Pool2;
      a3[1] = (wchar_t *)((unsigned int)Length + 2);
    }
    if ( appended < 0 )
    {
LABEL_22:
      if ( v9 )
      {
        ExFreePoolWithTag(Pool2, 0);
        v9 = 0;
      }
    }
  }
  else if ( a3 )
  {
    a3[1] = (wchar_t *)4;
    *a3 = (wchar_t *)"-";
  }
LABEL_26:
  *v29 = v9;
  return (unsigned int)appended;
}
