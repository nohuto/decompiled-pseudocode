/*
 * XREFs of NtUserfnINLPWINDOWPOS @ 0x1C01485F0
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C0047B70 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtUserfnINLPWINDOWPOS(__int64 a1, unsigned int a2, __int64 a3, ULONG64 a4, __int64 a5, char a6)
{
  __int128 v11; // [rsp+38h] [rbp-30h] BYREF
  __int128 v12; // [rsp+48h] [rbp-20h]
  __int64 v13; // [rsp+58h] [rbp-10h]

  v11 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  PtiCurrentShared(a1);
  if ( a4 >= MmUserProbeAddress )
    a4 = MmUserProbeAddress;
  v11 = *(_OWORD *)a4;
  v12 = *(_OWORD *)(a4 + 16);
  v13 = *(_QWORD *)(a4 + 32);
  return (*((__int64 (__fastcall **)(__int64, _QWORD, __int64, __int128 *, __int64))&WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink
          + ((a6 + 6) & 0x1F)))(
           a1,
           a2,
           a3,
           &v11,
           a5);
}
