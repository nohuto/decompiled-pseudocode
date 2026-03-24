/*
 * XREFs of NtUserfnINWPARAMCHAR @ 0x1C02060C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C016DB10 (_guard_dispatch_icall_nop.c)
 *     RtlMBMessageWParamCharToWCS @ 0x1C025D4A0 (RtlMBMessageWParamCharToWCS.c)
 */

__int64 __fastcall NtUserfnINWPARAMCHAR(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        char a6,
        int a7)
{
  int v10; // ecx
  _QWORD v12[3]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v13; // [rsp+60h] [rbp+18h] BYREF

  v13 = a3;
  if ( a7 )
  {
    if ( a2 == 47 || a2 == 288 )
    {
      v12[0] = (unsigned __int16)a3;
      RtlMBMessageWParamCharToWCS(a2, v12);
      v10 = LOWORD(v12[0]) | (WORD1(v13) << 16);
      a3 = v10;
      v13 = v10;
    }
    else
    {
      RtlMBMessageWParamCharToWCS(a2, &v13);
      a3 = v13;
    }
  }
  return ((__int64 (__fastcall *)(__int64, _QWORD, __int64, __int64, __int64))mpFnidPfn[(a6 + 6) & 0x1F])(
           a1,
           a2,
           a3,
           a4,
           a5);
}
