/*
 * XREFs of NtUserfnINWPARAMCHAR @ 0x1C01E36E0
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C0047B70 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 *     RtlMBMessageWParamCharToWCS @ 0x1C024EA38 (RtlMBMessageWParamCharToWCS.c)
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
  _QWORD v11[3]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v12; // [rsp+60h] [rbp+18h] BYREF

  v12 = a3;
  PtiCurrentShared(a1);
  if ( a7 )
  {
    if ( a2 == 47 || a2 == 288 )
    {
      v11[0] = (unsigned __int16)v12;
      RtlMBMessageWParamCharToWCS(a2, v11);
      v12 = (WORD1(v12) << 16) | LOWORD(v11[0]);
    }
    else
    {
      RtlMBMessageWParamCharToWCS(a2, &v12);
    }
  }
  return (*((__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64, __int64))&WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink
          + ((a6 + 6) & 0x1F)))(
           a1,
           a2,
           v12,
           a4,
           a5);
}
