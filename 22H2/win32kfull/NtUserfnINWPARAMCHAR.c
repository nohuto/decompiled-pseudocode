/*
 * XREFs of NtUserfnINWPARAMCHAR @ 0x1C01E2630
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EDC14 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0141260 (_guard_dispatch_icall_nop.c)
 *     RtlMBMessageWParamCharToWCS @ 0x1C024BD78 (RtlMBMessageWParamCharToWCS.c)
 */

__int64 __fastcall NtUserfnINWPARAMCHAR(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, char a6, int a7)
{
  unsigned int v8; // ebx
  _QWORD v11[3]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v12; // [rsp+60h] [rbp+18h] BYREF

  v12 = a3;
  v8 = a2;
  PtiCurrentShared(a1, a2, a3, a4);
  if ( a7 )
  {
    if ( v8 == 47 || v8 == 288 )
    {
      v11[0] = (unsigned __int16)v12;
      RtlMBMessageWParamCharToWCS(v8, v11);
      v12 = (WORD1(v12) << 16) | LOWORD(v11[0]);
    }
    else
    {
      RtlMBMessageWParamCharToWCS(v8, &v12);
    }
  }
  return (*((__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64, __int64))&WPP_MAIN_CB.SectorSize
          + ((a6 + 6) & 0x1F)))(
           a1,
           v8,
           v12,
           a4,
           a5);
}
