/*
 * XREFs of ?CanCallerAccessDestination@CInputDest@@QEBA_NXZ @ 0x1C00E390C
 * Callers:
 *     ?GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInputDest@@@Z @ 0x1C01C48FC (-GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInp.c)
 * Callees:
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00462A0 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     CheckAccessEx @ 0x1C0091E70 (CheckAccessEx.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

bool __fastcall CInputDest::CanCallerAccessDestination(CInputDest *this)
{
  __int64 v2; // rbx
  struct tagTHREADINFO *v3; // rax

  if ( !*(_DWORD *)this )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1112);
  if ( *((_DWORD *)this + 23) != 2 )
    return 1;
  v2 = *((_QWORD *)this + 10);
  if ( !v2 )
    return 1;
  v3 = PtiCurrentShared();
  return CheckAccessEx(
           (int *)(*((_QWORD *)v3 + 53) + 888LL),
           (unsigned int *)(*(_QWORD *)(*(_QWORD *)(v2 + 16) + 424LL) + 888LL),
           0LL);
}
