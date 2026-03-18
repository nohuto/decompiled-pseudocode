/*
 * XREFs of NVMeIsAllowedWithinThrottleLimit @ 0x1C001DEC8
 * Callers:
 *     NVMeMapError @ 0x1C0001D84 (NVMeMapError.c)
 *     NVMeValidateProtocolCommandRequest @ 0x1C001F1E0 (NVMeValidateProtocolCommandRequest.c)
 * Callees:
 *     CalculateTimeDurationIn100ns @ 0x1C00179B4 (CalculateTimeDurationIn100ns.c)
 */

char __fastcall NVMeIsAllowedWithinThrottleLimit(__int64 a1, int a2, _DWORD *a3)
{
  __int64 v4; // rbx
  unsigned __int64 v5; // rax
  __int64 v6; // rdx
  unsigned __int64 v8[3]; // [rsp+20h] [rbp-18h] BYREF
  unsigned __int64 v9; // [rsp+58h] [rbp+20h] BYREF

  v8[0] = 0LL;
  v9 = 0LL;
  if ( a2 >= 0 && (_mm_lfence(), (v4 = *(_QWORD *)(a1 + 8LL * a2 + 3896)) != 0) )
  {
    StorPortExtendedFunction(47LL, a1, &v9, v8);
    v5 = CalculateTimeDurationIn100ns(v8[0], v9);
    v6 = *(_QWORD *)(v4 + 8);
    if ( v5 - v6 < *(_QWORD *)(v4 + 16) && v6 )
    {
      ++*(_DWORD *)(v4 + 24);
      return 0;
    }
    *(_QWORD *)(v4 + 8) = v5;
    if ( a3 )
      *a3 = *(_DWORD *)(v4 + 24);
    *(_DWORD *)(v4 + 24) = 0;
  }
  else if ( a3 )
  {
    *a3 = 0;
  }
  return 1;
}
