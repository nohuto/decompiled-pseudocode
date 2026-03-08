/*
 * XREFs of NtUserfnCOPYDATA @ 0x1C00DE560
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C0047B70 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtUserfnCOPYDATA(__int64 a1, unsigned int a2, __int64 a3, ULONG64 a4, __int64 a5, char a6)
{
  __int64 v10; // r10
  SIZE_T Length[2]; // [rsp+38h] [rbp-20h] BYREF
  volatile void *Address; // [rsp+48h] [rbp-10h]

  *(_OWORD *)Length = 0LL;
  Address = 0LL;
  PtiCurrentShared(a1);
  v10 = 0LL;
  if ( a4 )
  {
    if ( a4 >= MmUserProbeAddress )
      a4 = MmUserProbeAddress;
    *(_OWORD *)Length = *(_OWORD *)a4;
    Address = *(volatile void **)(a4 + 16);
    if ( Address )
      ProbeForRead(Address, LODWORD(Length[1]), 1u);
    return (*((__int64 (__fastcall **)(__int64, _QWORD, __int64, SIZE_T *, __int64))&WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink
            + ((a6 + 6) & 0x1F)))(
             a1,
             a2,
             a3,
             Length,
             a5);
  }
  return v10;
}
