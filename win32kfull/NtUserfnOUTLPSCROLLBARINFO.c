/*
 * XREFs of NtUserfnOUTLPSCROLLBARINFO @ 0x1C01E3CB0
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C0047B70 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtUserfnOUTLPSCROLLBARINFO(__int64 a1, unsigned int a2, __int64 a3, ULONG64 a4, __int64 a5, char a6)
{
  _BYTE *v10; // rdx
  __int64 v12; // [rsp+30h] [rbp-88h]
  __int128 v13; // [rsp+48h] [rbp-70h] BYREF
  __int128 v14; // [rsp+58h] [rbp-60h]
  __int128 v15; // [rsp+68h] [rbp-50h]
  __int64 v16; // [rsp+78h] [rbp-40h]
  int v17; // [rsp+80h] [rbp-38h]

  v13 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  v17 = 0;
  PtiCurrentShared(a1);
  v10 = (_BYTE *)a4;
  if ( a4 >= MmUserProbeAddress )
    v10 = (_BYTE *)MmUserProbeAddress;
  *v10 = *v10;
  v10[59] = v10[59];
  v13 = *(_OWORD *)a4;
  v14 = *(_OWORD *)(a4 + 16);
  v15 = *(_OWORD *)(a4 + 32);
  v16 = *(_QWORD *)(a4 + 48);
  v17 = *(_DWORD *)(a4 + 56);
  v12 = (*((__int64 (__fastcall **)(__int64, _QWORD, __int64, __int128 *, __int64))&WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink
         + ((a6 + 6) & 0x1F)))(
          a1,
          a2,
          a3,
          &v13,
          a5);
  *(_OWORD *)a4 = v13;
  *(_OWORD *)(a4 + 16) = v14;
  *(_OWORD *)(a4 + 32) = v15;
  *(_QWORD *)(a4 + 48) = v16;
  *(_DWORD *)(a4 + 56) = v17;
  return v12;
}
