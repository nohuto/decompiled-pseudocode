/*
 * XREFs of ?CanCallerAccessDestination@CInputDest@@QEBA_NXZ @ 0x1C00F1DF6
 * Callers:
 *     ?GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInputDest@@@Z @ 0x1C01F375C (-GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInp.c)
 * Callees:
 *     CheckAccessEx @ 0x1C0016FB0 (CheckAccessEx.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C004FE50 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

bool __fastcall CInputDest::CanCallerAccessDestination(CInputDest *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rbx
  struct tagTHREADINFO *v6; // rax

  if ( !*(_DWORD *)this )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1112);
  if ( *((_DWORD *)this + 23) != 2 )
    return 1;
  v5 = *((_QWORD *)this + 10);
  if ( !v5 )
    return 1;
  v6 = PtiCurrentShared((__int64)this, a2, a3, a4);
  return CheckAccessEx(
           (int *)(*((_QWORD *)v6 + 53) + 864LL),
           (unsigned int *)(*(_QWORD *)(*(_QWORD *)(v5 + 16) + 424LL) + 864LL),
           0LL);
}
