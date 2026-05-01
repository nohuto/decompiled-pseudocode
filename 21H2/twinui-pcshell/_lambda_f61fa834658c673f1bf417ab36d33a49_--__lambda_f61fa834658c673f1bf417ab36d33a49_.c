/*
 * XREFs of _lambda_f61fa834658c673f1bf417ab36d33a49_::__lambda_f61fa834658c673f1bf417ab36d33a49_ @ 0x1800CEA6C
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_f61fa834658c673f1bf417ab36d33a49___::_scalar_deleting_destructor_ @ 0x1800D01A0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_f61fa834658c673f1bf417ab36d33a49___--_scala.c)
 *     ?OnCommand@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@PEBU_GUID@@K@Z @ 0x1803BCE50 (-OnCommand@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@PEBU_GUID@@K@Z.c)
 * Callees:
 *     ??1OnApplicationFrameCommand@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x1803B742C (--1OnApplicationFrameCommand@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 */

void __fastcall lambda_f61fa834658c673f1bf417ab36d33a49_::__lambda_f61fa834658c673f1bf417ab36d33a49_(__int64 a1)
{
  TouchKeyboardExperienceTelemetryLogger::OnApplicationFrameCommand::~OnApplicationFrameCommand((TouchKeyboardExperienceTelemetryLogger::OnApplicationFrameCommand *)(a1 + 32));
  Microsoft::WRL::WeakRef::~WeakRef((Microsoft::WRL::WeakRef *)(a1 + 16));
}
