/*
 * XREFs of NtUserfnINPAINTCLIPBRD @ 0x1C01E3270
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C0047B70 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 */

__int64 __fastcall NtUserfnINPAINTCLIPBRD(__int64 a1, unsigned int a2, __int64 a3, ULONG64 a4, __int64 a5, char a6)
{
  __int64 v10; // rcx
  _OWORD v12[4]; // [rsp+40h] [rbp-88h] BYREF
  __int64 v13; // [rsp+80h] [rbp-48h]

  memset_0(v12, 0, 0x48uLL);
  PtiCurrentShared(v10);
  if ( a4 >= MmUserProbeAddress )
    a4 = MmUserProbeAddress;
  v12[0] = *(_OWORD *)a4;
  v12[1] = *(_OWORD *)(a4 + 16);
  v12[2] = *(_OWORD *)(a4 + 32);
  v12[3] = *(_OWORD *)(a4 + 48);
  v13 = *(_QWORD *)(a4 + 64);
  return (*((__int64 (__fastcall **)(__int64, _QWORD, __int64, _OWORD *, __int64))&WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink
          + ((a6 + 6) & 0x1F)))(
           a1,
           a2,
           a3,
           v12,
           a5);
}
