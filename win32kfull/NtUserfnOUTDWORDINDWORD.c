/*
 * XREFs of NtUserfnOUTDWORDINDWORD @ 0x1C01E3A20
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C0047B70 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtUserfnOUTDWORDINDWORD(__int64 a1, unsigned int a2, _DWORD *a3, __int64 a4, __int64 a5, char a6)
{
  __int64 v10; // r8
  _DWORD v12[6]; // [rsp+30h] [rbp-18h] BYREF

  v12[0] = 0;
  PtiCurrentShared(a1);
  v10 = (*((__int64 (__fastcall **)(__int64, _QWORD, _DWORD *, __int64, __int64))&WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink
         + ((a6 + 6) & 0x1F)))(
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
