/*
 * XREFs of NtUserfnOPTOUTLPDWORDOPTOUTLPDWORD @ 0x1C00163F0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C0047B70 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtUserfnOPTOUTLPDWORDOPTOUTLPDWORD(
        __int64 a1,
        unsigned int a2,
        _DWORD *a3,
        _DWORD *a4,
        __int64 a5,
        char a6)
{
  __int64 v10; // r8
  int v12; // [rsp+30h] [rbp-28h] BYREF
  _DWORD v13[9]; // [rsp+34h] [rbp-24h] BYREF

  v12 = 0;
  v13[0] = 0;
  PtiCurrentShared();
  v10 = (*((__int64 (__fastcall **)(__int64, _QWORD, int *, _DWORD *, __int64))&WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink
         + ((a6 + 6) & 0x1F)))(
          a1,
          a2,
          &v12,
          v13,
          a5);
  if ( a3 )
  {
    if ( (unsigned __int64)a3 >= MmUserProbeAddress )
      a3 = (_DWORD *)MmUserProbeAddress;
    *a3 = v12;
  }
  if ( a4 )
  {
    if ( (unsigned __int64)a4 >= MmUserProbeAddress )
      a4 = (_DWORD *)MmUserProbeAddress;
    *a4 = v13[0];
  }
  return v10;
}
