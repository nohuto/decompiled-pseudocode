/*
 * XREFs of ?ReleaseReference@DXGVAILGUESTOBJECT@@QEAAXXZ @ 0x1C035D858
 * Callers:
 *     ?ReleaseVailGuestReference@DXGSESSIONDATA@@QEAAXXZ @ 0x1C035D8E8 (-ReleaseVailGuestReference@DXGSESSIONDATA@@QEAAXXZ.c)
 *     ?VailGuestConnect@DXGSESSIONDATA@@QEAAJXZ @ 0x1C035DC88 (-VailGuestConnect@DXGSESSIONDATA@@QEAAJXZ.c)
 *     ?VailSendCompositionObjectTestCommand@DXGSESSIONDATA@@QEAAJPEAXI0PEAIH@Z @ 0x1C035E270 (-VailSendCompositionObjectTestCommand@DXGSESSIONDATA@@QEAAJPEAXI0PEAIH@Z.c)
 *     ?VailSendRemoteObjectTestCommand@DXGSESSIONDATA@@QEAAJPEAXI0PEAIH@Z @ 0x1C035F2E8 (-VailSendRemoteObjectTestCommand@DXGSESSIONDATA@@QEAAJPEAXI0PEAIH@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C00077E0 (--3@YAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGVAILGUESTOBJECT@@IEAA@XZ @ 0x1C0059D2C (--1DXGVAILGUESTOBJECT@@IEAA@XZ.c)
 */

void __fastcall DXGVAILGUESTOBJECT::ReleaseReference(DXGVAILGUESTOBJECT *this)
{
  if ( *(struct _KTHREAD **)(*(_QWORD *)this + 18928LL) != KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 2022LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"m_pSessionData->GetVailGuestMutex()->IsOwner()",
      2022LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( (*((_DWORD *)this + 2))-- == 1 )
  {
    DXGVAILGUESTOBJECT::~DXGVAILGUESTOBJECT(this);
    operator delete(this);
  }
}
