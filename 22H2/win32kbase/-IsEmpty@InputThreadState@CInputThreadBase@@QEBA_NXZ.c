/*
 * XREFs of ?IsEmpty@InputThreadState@CInputThreadBase@@QEBA_NXZ @ 0x1C0084AD0
 * Callers:
 *     ?DeactivateInputProcessing@CInputThreadBase@@UEAA_NXZ @ 0x1C00848F0 (-DeactivateInputProcessing@CInputThreadBase@@UEAA_NXZ.c)
 *     ?ActivateInputProcessing@CInputThreadBase@@QEAA_NXZ @ 0x1C008498C (-ActivateInputProcessing@CInputThreadBase@@QEAA_NXZ.c)
 *     ?DeclareThreadAsInput@CInputThreadBase@@QEAA_NXZ @ 0x1C0084A30 (-DeclareThreadAsInput@CInputThreadBase@@QEAA_NXZ.c)
 *     ?IsInputThreadDesktopActive@CMasterInputThread@@QEBA_NXZ @ 0x1C01FC8F4 (-IsInputThreadDesktopActive@CMasterInputThread@@QEBA_NXZ.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

bool __fastcall CInputThreadBase::InputThreadState::IsEmpty(CInputThreadBase::InputThreadState *this)
{
  if ( ((*((_QWORD *)this + 1) == 0LL) ^ (*((_QWORD *)this + 2) == 0LL) ^ (*((_DWORD *)this + 6) == 0)) != (*(_DWORD *)this == 0) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 215LL);
  return *((_QWORD *)this + 1) == 0LL;
}
