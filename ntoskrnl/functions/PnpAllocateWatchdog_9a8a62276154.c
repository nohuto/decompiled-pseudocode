__int64 __fastcall PnpAllocateWatchdog(PCUNICODE_STRING SourceString)
{
  __int64 v2; // rdi
  __int64 v3; // rcx
  __int64 v4; // rax
  unsigned __int16 MaximumLength; // dx
  _QWORD v7[3]; // [rsp+20h] [rbp-38h] BYREF
  int v8; // [rsp+38h] [rbp-20h]
  int v9; // [rsp+3Ch] [rbp-1Ch]
  __int64 (__fastcall *v10)(); // [rsp+40h] [rbp-18h]

  v7[1] = 0LL;
  v2 = 0LL;
  v3 = 56LL;
  if ( SourceString && SourceString->Length )
    v3 = SourceString->MaximumLength + 56LL;
  v7[0] = v3;
  v7[2] = PnpWatchdogFirstChanceCallback;
  v8 = PnpWatchdogTimeoutFirstChance;
  v10 = PnpWatchdogSecondChanceCallback;
  v9 = PnpWatchdogTimeoutSecondChance;
  v4 = PnpWatchdogTimerAllocate(v7);
  if ( v4 )
  {
    v2 = v4 + 141;
    *(_QWORD *)(v4 + 149) = v4;
    if ( SourceString )
    {
      if ( SourceString->Length )
      {
        MaximumLength = SourceString->MaximumLength;
        *(_OWORD *)(v4 + 181) = 0LL;
        *(_WORD *)(v4 + 183) = MaximumLength;
        *(_QWORD *)(v4 + 189) = v4 + 197;
        RtlCopyUnicodeString((PUNICODE_STRING)(v4 + 181), SourceString);
      }
    }
  }
  return v2;
}
