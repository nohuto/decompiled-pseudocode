/*
 * XREFs of ?AddReference@DXGVAILGUESTOBJECT@@QEAAXXZ @ 0x1C035C008
 * Callers:
 *     ?VailSendCompositionObjectTestCommand@DXGSESSIONDATA@@QEAAJPEAXI0PEAIH@Z @ 0x1C035E270 (-VailSendCompositionObjectTestCommand@DXGSESSIONDATA@@QEAAJPEAXI0PEAIH@Z.c)
 *     ?VailSendRemoteObjectTestCommand@DXGSESSIONDATA@@QEAAJPEAXI0PEAIH@Z @ 0x1C035F2E8 (-VailSendRemoteObjectTestCommand@DXGSESSIONDATA@@QEAAJPEAXI0PEAIH@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 */

void __fastcall DXGVAILGUESTOBJECT::AddReference(DXGVAILGUESTOBJECT *this)
{
  if ( *(struct _KTHREAD **)(*(_QWORD *)this + 18928LL) != KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 2014LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"m_pSessionData->GetVailGuestMutex()->IsOwner()",
      2014LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  ++*((_DWORD *)this + 2);
}
