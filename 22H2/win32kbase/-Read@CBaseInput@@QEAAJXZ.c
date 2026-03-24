/*
 * XREFs of ?Read@CBaseInput@@QEAAJXZ @ 0x1C0088E90
 * Callers:
 *     UserActivateMITInputProcessing @ 0x1C0088848 (UserActivateMITInputProcessing.c)
 *     ?OnReadNotification@CBaseInput@@AEAAJXZ @ 0x1C01A3E70 (-OnReadNotification@CBaseInput@@AEAAJXZ.c)
 * Callees:
 *     RIMReadInput @ 0x1C00542C0 (RIMReadInput.c)
 *     ?GetDispatcherHandleByName@CRIMBase@@IEBAPEAXW4DispatcherHandleName@1@W4HandleAccessMode@1@@Z @ 0x1C00892FC (-GetDispatcherHandleByName@CRIMBase@@IEBAPEAXW4DispatcherHandleName@1@W4HandleAccessMode@1@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall CBaseInput::Read(CBaseInput *this)
{
  __int64 DispatcherHandleByName; // rdi

  DispatcherHandleByName = CRIMBase::GetDispatcherHandleByName(this, 1LL, 0LL);
  if ( !DispatcherHandleByName )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 988LL);
  return RIMReadInput(
           *((_QWORD *)this + 1),
           (__int64)this + 64,
           *((_DWORD *)this + 14),
           DispatcherHandleByName,
           0,
           (__int64)this + 48,
           (__int64)this + 24,
           (__int64)this + 32);
}
