/*
 * XREFs of NtUserfnINOUTLPSIZE @ 0x1C02058D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C016DB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtUserfnINOUTLPSIZE(__int64 a1, __int64 a2, __int64 a3, ULONG64 a4, __int64 a5, char a6)
{
  _QWORD *v6; // rbx
  _QWORD *v7; // rax
  __int64 v8; // r8
  _QWORD v10[5]; // [rsp+30h] [rbp-28h] BYREF

  v6 = (_QWORD *)a4;
  v10[0] = 0LL;
  v7 = (_QWORD *)a4;
  if ( a4 >= MmUserProbeAddress )
    v7 = (_QWORD *)MmUserProbeAddress;
  v10[0] = *v7;
  v8 = ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD *, __int64))mpFnidPfn[(a6 + 6) & 0x1F])(
         a1,
         a2,
         a3,
         v10,
         a5);
  v10[1] = v8;
  if ( (unsigned __int64)v6 >= MmUserProbeAddress )
    v6 = (_QWORD *)MmUserProbeAddress;
  *v6 = v10[0];
  return v8;
}
