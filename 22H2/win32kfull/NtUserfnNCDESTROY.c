/*
 * XREFs of NtUserfnNCDESTROY @ 0x1C01E2720
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EDC14 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0141260 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtUserfnNCDESTROY(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, char a6)
{
  unsigned int v8; // esi

  v8 = a2;
  PtiCurrentShared(a1, a2, a3, a4);
  return (*((__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64, __int64))&WPP_MAIN_CB.SectorSize
          + ((a6 + 6) & 0x1F)))(
           a1,
           v8,
           a3,
           a4,
           a5);
}
