/*
 * XREFs of NtUserfnOUTDWORDINDWORD @ 0x1C02033A0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtUserfnOUTDWORDINDWORD(__int64 a1, unsigned int a2, _DWORD *a3, __int64 a4, __int64 a5, char a6)
{
  __int64 v10; // r8
  _DWORD v12[6]; // [rsp+30h] [rbp-18h] BYREF

  v12[0] = 0;
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v10 = ((__int64 (__fastcall *)(__int64, _QWORD, _DWORD *, __int64, __int64))mpFnidPfn[(a6 + 6) & 0x1F])(
          a1,
          a2,
          v12,
          a4,
          a5);
  if ( (unsigned __int64)a3 >= MmUserProbeAddress )
    a3 = (_DWORD *)MmUserProbeAddress;
  *a3 = v12[0];
  return v10;
}
