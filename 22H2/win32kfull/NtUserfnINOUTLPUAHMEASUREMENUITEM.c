/*
 * XREFs of NtUserfnINOUTLPUAHMEASUREMENUITEM @ 0x1C02059A0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C016DB10 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C016DE00 (memset.c)
 */

__int64 __fastcall NtUserfnINOUTLPUAHMEASUREMENUITEM(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        _OWORD *a4,
        __int64 a5,
        char a6)
{
  __int64 result; // rax
  _OWORD v11[7]; // [rsp+50h] [rbp-A8h] BYREF

  memset(v11, 0, sizeof(v11));
  if ( (unsigned __int64)a4 >= MmUserProbeAddress )
    *(_DWORD *)MmUserProbeAddress = 0;
  *a4 = *a4;
  a4[1] = a4[1];
  a4[2] = a4[2];
  a4[3] = a4[3];
  a4[4] = a4[4];
  a4[5] = a4[5];
  a4[6] = a4[6];
  v11[0] = *a4;
  v11[1] = a4[1];
  v11[2] = a4[2];
  v11[3] = a4[3];
  v11[4] = a4[4];
  v11[5] = a4[5];
  v11[6] = a4[6];
  result = ((__int64 (__fastcall *)(__int64, _QWORD, __int64, _OWORD *, __int64))mpFnidPfn[(a6 + 6) & 0x1F])(
             a1,
             a2,
             a3,
             v11,
             a5);
  *a4 = v11[0];
  a4[1] = v11[1];
  a4[2] = v11[2];
  a4[3] = v11[3];
  a4[4] = v11[4];
  a4[5] = v11[5];
  a4[6] = v11[6];
  return result;
}
