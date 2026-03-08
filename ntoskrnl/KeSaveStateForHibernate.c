/*
 * XREFs of KeSaveStateForHibernate @ 0x1404170A0
 * Callers:
 *     HalpSaveProcessorState @ 0x140412020 (HalpSaveProcessorState.c)
 *     HalpSetupRealModeResume @ 0x1404120A0 (HalpSetupRealModeResume.c)
 *     PopSaveHiberContextWrapper @ 0x140420200 (PopSaveHiberContextWrapper.c)
 *     HalpDpOfflineProcessorForReplace @ 0x140A94318 (HalpDpOfflineProcessorForReplace.c)
 * Callees:
 *     KiSaveProcessorControlState @ 0x140416350 (KiSaveProcessorControlState.c)
 *     RtlCaptureContext @ 0x140420580 (RtlCaptureContext.c)
 */

__int64 __fastcall KeSaveStateForHibernate(__int64 a1)
{
  __int64 result; // rax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]
  char v4; // [rsp+30h] [rbp+8h] BYREF

  RtlCaptureContext((PCONTEXT)(a1 + 240));
  *(_WORD *)(a1 + 304) = 43;
  *(_WORD *)(a1 + 302) = 83;
  *(_QWORD *)(a1 + 224) = __readmsr(0xC0000100);
  *(_QWORD *)(a1 + 168) = __readmsr(0xC0000101);
  *(_QWORD *)(a1 + 176) = __readmsr(0xC0000102);
  *(_QWORD *)(a1 + 184) = __readmsr(0xC0000081);
  *(_QWORD *)(a1 + 192) = __readmsr(0xC0000082);
  *(_QWORD *)(a1 + 200) = __readmsr(0xC0000083);
  *(_QWORD *)(a1 + 208) = __readmsr(0xC0000084);
  *(_QWORD *)(a1 + 488) = retaddr;
  *(_QWORD *)(a1 + 392) = &v4;
  result = KiSaveProcessorControlState(a1, 0);
  *(_QWORD *)(a1 + 16) &= 0xFFFFFFFFFFFFFFFCuLL;
  *(_QWORD *)(a1 + 24) &= ~0x800000uLL;
  _fxsave((void *)(a1 + 496));
  return result;
}
