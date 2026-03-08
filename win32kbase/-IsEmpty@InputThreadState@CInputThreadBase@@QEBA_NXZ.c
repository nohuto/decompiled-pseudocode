/*
 * XREFs of ?IsEmpty@InputThreadState@CInputThreadBase@@QEBA_NXZ @ 0x1C009AD00
 * Callers:
 *     ?DeactivateInputProcessing@CInputThreadBase@@UEAA_NXZ @ 0x1C009AB20 (-DeactivateInputProcessing@CInputThreadBase@@UEAA_NXZ.c)
 *     ?ActivateInputProcessing@CInputThreadBase@@QEAA_NXZ @ 0x1C009ABBC (-ActivateInputProcessing@CInputThreadBase@@QEAA_NXZ.c)
 *     ?DeclareThreadAsInput@CInputThreadBase@@QEAA_NXZ @ 0x1C009AC60 (-DeclareThreadAsInput@CInputThreadBase@@QEAA_NXZ.c)
 *     ?IsInputThreadDesktopActive@CMasterInputThread@@QEBA_NXZ @ 0x1C0232B24 (-IsInputThreadDesktopActive@CMasterInputThread@@QEBA_NXZ.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

bool __fastcall CInputThreadBase::InputThreadState::IsEmpty(CInputThreadBase::InputThreadState *this)
{
  if ( ((*((_QWORD *)this + 1) == 0LL) ^ (*((_QWORD *)this + 2) == 0LL) ^ (*((_DWORD *)this + 6) == 0)) != (*(_DWORD *)this == 0) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 215LL);
  return *((_QWORD *)this + 1) == 0LL;
}
