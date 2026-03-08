/*
 * XREFs of MiCallDllUnload @ 0x140861060
 * Callers:
 *     MiUnloadApproved @ 0x1407F77E8 (MiUnloadApproved.c)
 * Callees:
 *     RtlPcToFileHeader @ 0x1403BE120 (RtlPcToFileHeader.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     RtlFindExportedRoutineByName @ 0x1407EBE40 (RtlFindExportedRoutineByName.c)
 */

__int64 __fastcall MiCallDllUnload(__int64 a1)
{
  __int64 (*BugCheckParameter4)(void); // rbx
  __int64 v4; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0LL;
  BugCheckParameter4 = (__int64 (*)(void))RtlFindExportedRoutineByName(*(_QWORD *)(a1 + 48), "DllUnload");
  if ( !BugCheckParameter4 )
    return 3221226021LL;
  RtlPcToFileHeader(*(_QWORD *)(a1 + 48), &v4);
  if ( v4 != *(_QWORD *)(a1 + 48) )
    KeBugCheckEx(0x139u, 0xAuLL, 0LL, 0LL, (ULONG_PTR)BugCheckParameter4);
  return BugCheckParameter4();
}
