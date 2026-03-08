/*
 * XREFs of NtUserfnOUTLPCOMBOBOXINFO @ 0x1C0008800
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C0047B70 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 */

__int64 __fastcall NtUserfnOUTLPCOMBOBOXINFO(__int64 a1, unsigned int a2, __int64 a3, _OWORD *a4, __int64 a5, char a6)
{
  _BYTE *v10; // rdx
  __int64 result; // rax
  __int128 v12; // [rsp+50h] [rbp-78h] BYREF
  __int128 v13; // [rsp+60h] [rbp-68h]
  __int128 v14; // [rsp+70h] [rbp-58h]
  __int128 v15; // [rsp+80h] [rbp-48h]

  memset_0(&v12, 0, 0x40uLL);
  PtiCurrentShared();
  v10 = a4;
  if ( (unsigned __int64)a4 >= MmUserProbeAddress )
    v10 = (_BYTE *)MmUserProbeAddress;
  *v10 = *v10;
  v10[63] = v10[63];
  v12 = *a4;
  v13 = a4[1];
  v14 = a4[2];
  v15 = a4[3];
  result = (*((__int64 (__fastcall **)(__int64, _QWORD, __int64, __int128 *, __int64))&WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink
            + ((a6 + 6) & 0x1F)))(
             a1,
             a2,
             a3,
             &v12,
             a5);
  *a4 = v12;
  a4[1] = v13;
  a4[2] = v14;
  a4[3] = v15;
  return result;
}
