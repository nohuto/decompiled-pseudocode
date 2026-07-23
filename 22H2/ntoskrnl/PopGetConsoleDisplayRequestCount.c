/*
 * XREFs of PopGetConsoleDisplayRequestCount @ 0x14034AD04
 * Callers:
 *     PopPolicySystemIdle @ 0x1406F2890 (PopPolicySystemIdle.c)
 * Callees:
 *     RtlGetActiveConsoleId @ 0x14034ADC0 (RtlGetActiveConsoleId.c)
 *     PopInvokeWin32Callout @ 0x1406F45B8 (PopInvokeWin32Callout.c)
 *     TtmIsEnabled @ 0x1406F47F4 (TtmIsEnabled.c)
 *     TtmGetSessionDisplayRequiredCount @ 0x1408FE64C (TtmGetSessionDisplayRequiredCount.c)
 */

__int64 PopGetConsoleDisplayRequestCount()
{
  unsigned int v0; // ebx
  int v1; // eax
  unsigned int v2; // ecx
  int v4; // [rsp+20h] [rbp-30h] BYREF
  char v5; // [rsp+24h] [rbp-2Ch]
  __int16 v6; // [rsp+25h] [rbp-2Bh]
  char v7; // [rsp+27h] [rbp-29h]
  __int64 v8; // [rsp+28h] [rbp-28h]
  int *v9; // [rsp+30h] [rbp-20h]
  __int64 v10; // [rsp+38h] [rbp-18h]
  unsigned int *v11; // [rsp+40h] [rbp-10h]
  unsigned int v12; // [rsp+60h] [rbp+10h] BYREF
  int v13; // [rsp+68h] [rbp+18h] BYREF
  ULONG ActiveConsoleId; // [rsp+70h] [rbp+20h] BYREF

  v0 = 0;
  v6 = 0;
  v7 = 0;
  HIDWORD(v8) = 0;
  HIDWORD(v10) = 0;
  v12 = 0;
  if ( PsWin32CalloutsEstablished )
  {
    ActiveConsoleId = RtlGetActiveConsoleId();
    if ( ActiveConsoleId == -1 )
    {
      return v12;
    }
    else if ( (unsigned __int8)TtmIsEnabled(ActiveConsoleId) )
    {
      return (unsigned int)TtmGetSessionDisplayRequiredCount();
    }
    else
    {
      v6 = 0;
      v9 = &v13;
      v7 = 0;
      v11 = &v12;
      v8 = 4LL;
      v10 = 4LL;
      v13 = 0;
      v4 = 2;
      v5 = 0;
      v1 = ((__int64 (__fastcall *)(__int64, int *, __int64, ULONG *))PopInvokeWin32Callout)(
             5LL,
             &v4,
             1LL,
             &ActiveConsoleId);
      v2 = v12;
      if ( v1 < 0 )
        return 0;
      return v2;
    }
  }
  return v0;
}
