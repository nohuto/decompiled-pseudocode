__int64 __fastcall NtUserRegisterWindowMessage(ULONG64 a1)
{
  ULONG64 v1; // rdx
  int v2; // ecx
  __int16 *v3; // rdx
  ULONG64 v4; // r8
  __int64 v5; // rcx
  __int64 v6; // rax
  _WORD *v7; // r8
  unsigned int v8; // ebx
  NTSTATUS v9; // r11d
  __int64 v10; // r10
  __int16 v11; // r9
  int v13; // [rsp+20h] [rbp-278h]
  _BYTE v14[512]; // [rsp+80h] [rbp-218h] BYREF

  v1 = a1;
  if ( a1 >= MmUserProbeAddress )
    v1 = MmUserProbeAddress;
  v2 = *(_DWORD *)v1;
  v13 = *(_DWORD *)v1;
  v3 = *(__int16 **)(v1 + 8);
  if ( ((unsigned __int8)v3 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v4 = (ULONG64)v3 + (unsigned __int16)v2 + 2;
  if ( v4 <= (unsigned __int64)v3 || v4 >= MmUserProbeAddress )
    ExRaiseAccessViolation();
  if ( (unsigned __int16)v2 > HIWORD(v13) )
  {
    if ( (v2 & 1) == 0 )
      goto LABEL_18;
    goto LABEL_17;
  }
  if ( (v2 & 1) != 0 )
  {
LABEL_17:
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 10375LL);
LABEL_18:
    ExRaiseAccessViolation();
  }
  v5 = 2147483646LL;
  v6 = 256LL;
  v7 = v14;
  v8 = 0;
  v9 = 0;
  v10 = 0LL;
  while ( v6 )
  {
    if ( !v5 )
      goto LABEL_13;
    v11 = *v3;
    if ( !*v3 )
      goto LABEL_13;
    ++v3;
    *v7++ = v11;
    --v6;
    --v5;
    ++v10;
  }
  --v7;
  v9 = -2147483643;
LABEL_13:
  *v7 = 0;
  if ( v9 < 0 )
    UserSetLastStatus(v9, 1);
  else
    return (unsigned __int16)UserAddAtomEx(v14, 0LL, 2LL);
  return v8;
}
