/*
 * XREFs of NtUserfnOPTOUTLPDWORDOPTOUTLPDWORD @ 0x1C0158E40
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0069D40 (UserSetLastError.c)
 *     _guard_dispatch_icall_nop @ 0x1C016E4B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtUserfnOPTOUTLPDWORDOPTOUTLPDWORD(
        __int64 a1,
        __int64 a2,
        _DWORD *a3,
        _DWORD *a4,
        __int64 a5,
        char a6)
{
  __int64 v8; // r8
  int v10; // [rsp+30h] [rbp-28h] BYREF
  _DWORD v11[9]; // [rsp+34h] [rbp-24h] BYREF

  v10 = 0;
  v11[0] = 0;
  v8 = ((__int64 (__fastcall *)(__int64, __int64, int *, _DWORD *, __int64))mpFnidPfn[(a6 + 6) & 0x1F])(
         a1,
         a2,
         &v10,
         v11,
         a5);
  if ( a3 )
  {
    if ( (unsigned __int64)a3 >= MmUserProbeAddress )
      a3 = (_DWORD *)MmUserProbeAddress;
    *a3 = v10;
  }
  if ( a4 )
  {
    if ( (unsigned __int64)a4 >= MmUserProbeAddress )
      a4 = (_DWORD *)MmUserProbeAddress;
    *a4 = v11[0];
  }
  return v8;
}
