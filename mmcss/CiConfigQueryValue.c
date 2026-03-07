__int64 __fastcall CiConfigQueryValue(HANDLE KeyHandle, __int64 a2, _QWORD *a3)
{
  const WCHAR *v5; // rdx
  __int64 v7; // rsi
  NTSTATUS v8; // ebx
  _QWORD *v9; // rax
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // rbx
  unsigned int v13; // ebp
  __int64 Length; // [rsp+20h] [rbp-F8h]
  ULONG ResultLength; // [rsp+30h] [rbp-E8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-E0h] BYREF
  _BYTE KeyValueInformation[8]; // [rsp+50h] [rbp-C8h] BYREF
  unsigned int Src; // [rsp+58h] [rbp-C0h]
  unsigned int Src_4; // [rsp+5Ch] [rbp-BCh] BYREF
  wchar_t Str1[32]; // [rsp+A0h] [rbp-78h] BYREF

  v5 = *(const WCHAR **)a2;
  ResultLength = 0;
  DestinationString = 0LL;
  RtlInitUnicodeStringEx(&DestinationString, v5);
  LODWORD(v7) = *(_DWORD *)(a2 + 8);
  v8 = ZwQueryValueKey(
         KeyHandle,
         &DestinationString,
         KeyValuePartialInformation,
         KeyValueInformation,
         0x50u,
         &ResultLength);
  if ( v8 < 0 )
  {
    if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u )
    {
      LODWORD(Length) = v8;
      WPP_SF_Zd(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0xAu,
        (__int64)&WPP_350503daac883abe7be9cf63f89038d9_Traceguids,
        &DestinationString.Length,
        Length);
    }
    goto LABEL_9;
  }
  if ( (*(_DWORD *)(a2 + 24) & 0x1F) == 1 )
  {
    if ( Src >= 0x40 )
    {
      v8 = -1073741562;
      goto LABEL_31;
    }
    v11 = Src;
    memmove(Str1, &Src_4, Src);
    v12 = v11 >> 1;
    if ( v12 >= 32 )
      _report_rangecheckfailure();
    v13 = 0;
    Str1[v12] = 0;
    v8 = -1073741811;
    if ( !*(_DWORD *)(a2 + 36) )
      goto LABEL_31;
    while ( _wcsicmp(Str1, *(const wchar_t **)(*(_QWORD *)(a2 + 16) + 16LL * v13)) )
    {
      if ( ++v13 >= *(_DWORD *)(a2 + 36) )
        goto LABEL_31;
    }
    v7 = *(_QWORD *)(*(_QWORD *)(a2 + 16) + 16LL * v13 + 8);
LABEL_9:
    v8 = 0;
LABEL_10:
    *a3 = (unsigned int)v7;
    goto LABEL_11;
  }
  if ( (*(_DWORD *)(a2 + 24) & 0x1F) != 2 )
  {
    if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      WPP_SF_L((__int64)WPP_GLOBAL_Control->AttachedDevice);
    goto LABEL_28;
  }
  if ( Src != 4 || (v9 = *(_QWORD **)(a2 + 16), LODWORD(v7) = Src_4, (unsigned __int64)Src_4 < *v9) )
  {
LABEL_28:
    v8 = -1073741811;
    goto LABEL_31;
  }
  if ( (unsigned __int64)Src_4 <= v9[1] )
    goto LABEL_10;
  v8 = -1073741811;
LABEL_31:
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
  {
    LODWORD(Length) = v8;
    WPP_SF_Zd(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0xCu,
      (__int64)&WPP_350503daac883abe7be9cf63f89038d9_Traceguids,
      &DestinationString.Length,
      Length);
  }
LABEL_11:
  if ( v8 >= 0 && (*(_BYTE *)(a2 + 28) & 1) != 0 )
    --*a3;
  return (unsigned int)v8;
}
