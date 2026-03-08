/*
 * XREFs of NtUserfnINOUTLPSCROLLINFO @ 0x1C01486D0
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C0047B70 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtUserfnINOUTLPSCROLLINFO(__int64 a1, unsigned int a2, __int64 a3, ULONG64 a4, __int64 a5, char a6)
{
  _BYTE *v10; // rdx
  __int64 result; // rax
  __int128 v12; // [rsp+48h] [rbp-50h] BYREF
  __int64 v13; // [rsp+58h] [rbp-40h]
  int v14; // [rsp+60h] [rbp-38h]

  v12 = 0LL;
  v13 = 0LL;
  v14 = 0;
  PtiCurrentShared(a1);
  v10 = (_BYTE *)a4;
  if ( a4 >= MmUserProbeAddress )
    v10 = (_BYTE *)MmUserProbeAddress;
  *v10 = *v10;
  v10[27] = v10[27];
  v12 = *(_OWORD *)a4;
  v13 = *(_QWORD *)(a4 + 16);
  v14 = *(_DWORD *)(a4 + 24);
  result = (*((__int64 (__fastcall **)(__int64, _QWORD, __int64, __int128 *, __int64))&WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink
            + ((a6 + 6) & 0x1F)))(
             a1,
             a2,
             a3,
             &v12,
             a5);
  *(_OWORD *)a4 = v12;
  *(_QWORD *)(a4 + 16) = v13;
  *(_DWORD *)(a4 + 24) = v14;
  return result;
}
