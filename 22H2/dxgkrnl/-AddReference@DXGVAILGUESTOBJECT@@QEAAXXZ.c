/*
 * XREFs of ?AddReference@DXGVAILGUESTOBJECT@@QEAAXXZ @ 0x1C0360A98
 * Callers:
 *     ?VailSendCompositionObjectTestCommand@DXGSESSIONDATA@@QEAAJPEAXI0PEAIH@Z @ 0x1C0362D00 (-VailSendCompositionObjectTestCommand@DXGSESSIONDATA@@QEAAJPEAXI0PEAIH@Z.c)
 *     ?VailSendRemoteObjectTestCommand@DXGSESSIONDATA@@QEAAJPEAXI0PEAIH@Z @ 0x1C0363D78 (-VailSendRemoteObjectTestCommand@DXGSESSIONDATA@@QEAAJPEAXI0PEAIH@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
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
