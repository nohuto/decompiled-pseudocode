/*
 * XREFs of NtUserfnSENTDDEMSG @ 0x1C01E4180
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C0047B70 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtUserfnSENTDDEMSG(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  PtiCurrentShared(a1);
  if ( a6 == 692 )
    return ((__int64 (__fastcall *)(__int64, _QWORD, __int64, __int64, __int64))qword_1C0360EE0)(
             a1,
             a2 | 0x40000000u,
             a3,
             a4,
             a5);
  else
    return 0LL;
}
