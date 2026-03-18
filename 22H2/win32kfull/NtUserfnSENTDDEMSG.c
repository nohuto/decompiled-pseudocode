/*
 * XREFs of NtUserfnSENTDDEMSG @ 0x1C01E30D0
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EDC14 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0141260 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtUserfnSENTDDEMSG(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  int v8; // ebx

  v8 = a2;
  PtiCurrentShared(a1, a2, a3, a4);
  if ( a6 == 692 )
    return ((__int64 (__fastcall *)(__int64, _QWORD, __int64, __int64, __int64))qword_1C035DEF0)(
             a1,
             v8 | 0x40000000u,
             a3,
             a4,
             a5);
  else
    return 0LL;
}
