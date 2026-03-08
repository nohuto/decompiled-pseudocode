/*
 * XREFs of NtUserfnINOUTNEXTMENU @ 0x1C01E3160
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C0047B70 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtUserfnINOUTNEXTMENU(__int64 a1, unsigned int a2, __int64 a3, ULONG64 a4, __int64 a5, char a6)
{
  _BYTE *v10; // rdx
  __int64 result; // rax
  __int128 v12; // [rsp+48h] [rbp-20h] BYREF
  __int64 v13; // [rsp+58h] [rbp-10h]

  v12 = 0LL;
  v13 = 0LL;
  PtiCurrentShared(a1);
  v10 = (_BYTE *)a4;
  if ( a4 >= MmUserProbeAddress )
    v10 = (_BYTE *)MmUserProbeAddress;
  *v10 = *v10;
  v10[23] = v10[23];
  v12 = *(_OWORD *)a4;
  v13 = *(_QWORD *)(a4 + 16);
  result = (*((__int64 (__fastcall **)(__int64, _QWORD, __int64, __int128 *, __int64))&WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink
            + ((a6 + 6) & 0x1F)))(
             a1,
             a2,
             a3,
             &v12,
             a5);
  *(_OWORD *)a4 = v12;
  *(_QWORD *)(a4 + 16) = v13;
  return result;
}
