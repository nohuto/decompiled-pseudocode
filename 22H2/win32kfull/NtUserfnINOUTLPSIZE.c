/*
 * XREFs of NtUserfnINOUTLPSIZE @ 0x1C01E1D20
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EDC14 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0141260 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtUserfnINOUTLPSIZE(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, char a6)
{
  _QWORD *v6; // rbx
  unsigned int v8; // esi
  _QWORD *v10; // rax
  __int64 v11; // r8
  _QWORD v13[5]; // [rsp+30h] [rbp-28h] BYREF

  v6 = (_QWORD *)a4;
  v8 = a2;
  v13[0] = 0LL;
  PtiCurrentShared(a1, a2, a3, a4);
  v10 = v6;
  if ( (unsigned __int64)v6 >= MmUserProbeAddress )
    v10 = (_QWORD *)MmUserProbeAddress;
  v13[0] = *v10;
  v11 = (*((__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD *, __int64))&WPP_MAIN_CB.SectorSize
         + ((a6 + 6) & 0x1F)))(
          a1,
          v8,
          a3,
          v13,
          a5);
  v13[1] = v11;
  if ( (unsigned __int64)v6 >= MmUserProbeAddress )
    v6 = (_QWORD *)MmUserProbeAddress;
  *v6 = v13[0];
  return v11;
}
