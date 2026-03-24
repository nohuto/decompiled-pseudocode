/*
 * XREFs of NtUserfnINPAINTCLIPBRD @ 0x1C02063A0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C016E4B0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C016E780 (memset.c)
 */

__int64 __fastcall NtUserfnINPAINTCLIPBRD(__int64 a1, unsigned int a2, __int64 a3, ULONG64 a4, __int64 a5, char a6)
{
  _OWORD v11[5]; // [rsp+40h] [rbp-88h] BYREF

  memset(v11, 0, 0x48uLL);
  if ( a4 >= MmUserProbeAddress )
    a4 = MmUserProbeAddress;
  v11[0] = *(_OWORD *)a4;
  v11[1] = *(_OWORD *)(a4 + 16);
  v11[2] = *(_OWORD *)(a4 + 32);
  v11[3] = *(_OWORD *)(a4 + 48);
  *(_QWORD *)&v11[4] = *(_QWORD *)(a4 + 64);
  return ((__int64 (__fastcall *)(__int64, _QWORD, __int64, _OWORD *, __int64))mpFnidPfn[(a6 + 6) & 0x1F])(
           a1,
           a2,
           a3,
           v11,
           a5);
}
