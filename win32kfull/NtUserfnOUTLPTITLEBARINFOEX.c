/*
 * XREFs of NtUserfnOUTLPTITLEBARINFOEX @ 0x1C000F100
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C0047B70 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 */

__int64 __fastcall NtUserfnOUTLPTITLEBARINFOEX(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        ULONG64 a4,
        __int64 a5,
        char a6)
{
  _BYTE *v10; // rdx
  __int64 v11; // rdi
  __int128 v13; // [rsp+50h] [rbp-D8h] BYREF
  __int128 v14; // [rsp+60h] [rbp-C8h]
  __int128 v15; // [rsp+70h] [rbp-B8h]
  __int128 v16; // [rsp+80h] [rbp-A8h]
  __int128 v17; // [rsp+90h] [rbp-98h]
  __int128 v18; // [rsp+A0h] [rbp-88h]
  __int128 v19; // [rsp+B0h] [rbp-78h]
  __int128 v20; // [rsp+C0h] [rbp-68h]
  __int64 v21; // [rsp+D0h] [rbp-58h]
  int v22; // [rsp+D8h] [rbp-50h]

  memset_0(&v13, 0, 0x8CuLL);
  PtiCurrentShared();
  v10 = (_BYTE *)a4;
  if ( a4 >= MmUserProbeAddress )
    v10 = (_BYTE *)MmUserProbeAddress;
  *v10 = *v10;
  v10[139] = v10[139];
  v13 = *(_OWORD *)a4;
  v14 = *(_OWORD *)(a4 + 16);
  v15 = *(_OWORD *)(a4 + 32);
  v16 = *(_OWORD *)(a4 + 48);
  v17 = *(_OWORD *)(a4 + 64);
  v18 = *(_OWORD *)(a4 + 80);
  v19 = *(_OWORD *)(a4 + 96);
  v20 = *(_OWORD *)(a4 + 112);
  v21 = *(_QWORD *)(a4 + 128);
  v22 = *(_DWORD *)(a4 + 136);
  if ( (_DWORD)v13 == 140 )
  {
    v11 = (*((__int64 (__fastcall **)(__int64, _QWORD, __int64, __int128 *, __int64))&WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink
           + ((a6 + 6) & 0x1F)))(
            a1,
            a2,
            a3,
            &v13,
            a5);
    *(_OWORD *)a4 = v13;
    *(_OWORD *)(a4 + 16) = v14;
    *(_OWORD *)(a4 + 32) = v15;
    *(_OWORD *)(a4 + 48) = v16;
    *(_OWORD *)(a4 + 64) = v17;
    *(_OWORD *)(a4 + 80) = v18;
    *(_OWORD *)(a4 + 96) = v19;
    *(_OWORD *)(a4 + 112) = v20;
    *(_QWORD *)(a4 + 128) = v21;
    *(_DWORD *)(a4 + 136) = v22;
  }
  else
  {
    v11 = 0LL;
    UserSetLastError(87LL);
  }
  return v11;
}
