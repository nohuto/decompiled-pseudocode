__int64 __fastcall SetAppImeCompatFlags(__int64 a1, const UNICODE_STRING *a2)
{
  unsigned int v2; // esi
  __int64 CurrentProcessWin32Process; // rax
  __int64 v6; // rdx
  __int64 i; // rbx
  int v9; // edi
  const UNICODE_STRING *v10; // r14
  ULONG Value; // [rsp+40h] [rbp-C0h] BYREF
  DWORD DefaultLocaleId; // [rsp+44h] [rbp-BCh] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-B8h] BYREF
  PCUNICODE_STRING String1[3]; // [rsp+58h] [rbp-A8h]
  WCHAR SourceString[80]; // [rsp+70h] [rbp-90h] BYREF

  Value = 0;
  DefaultLocaleId = 0;
  v2 = 0;
  String1[1] = 0LL;
  DestinationString = 0LL;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  v6 = CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
    v6 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
  if ( (unsigned int)FastGetProfileStringW(0LL, (*(_DWORD *)(v6 + 12) & 0x80u) != 0 ? 44 : 30, a2->Buffer, 0LL) )
  {
    RtlInitUnicodeString(&DestinationString, SourceString);
    RtlUnicodeStringToInteger(&DestinationString, 0, &Value);
  }
  ZwQueryDefaultLocale(0, &DefaultLocaleId);
  if ( (unsigned __int16)((DefaultLocaleId & 0x3FF) - 17) > 1u || *(_WORD *)(a1 + 632) > 0x30Au )
    *(_DWORD *)(*(_QWORD *)(a1 + 424) + 768LL) = Value & 0xC00000;
  else
    *(_DWORD *)(*(_QWORD *)(a1 + 424) + 768LL) = Value;
  if ( !gpastrSetupExe )
    return 0LL;
  String1[0] = a2;
  for ( i = 0LL; i < 1; ++i )
  {
    if ( v2 )
      break;
    v9 = 0;
    if ( giSetupExe > 0 )
    {
      v10 = String1[i];
      while ( RtlCompareUnicodeString(v10, &gpastrSetupExe[v9], 1u) )
      {
        if ( ++v9 >= giSetupExe )
          goto LABEL_19;
      }
      v2 = 1;
    }
LABEL_19:
    ;
  }
  return v2;
}
