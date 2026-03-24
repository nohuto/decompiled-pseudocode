/*
 * XREFs of ?IsInputThread@CInputThread@@QEBA_NXZ @ 0x1C0042194
 * Callers:
 *     NtMITActivateInputProcessing @ 0x1C0087920 (NtMITActivateInputProcessing.c)
 *     NtMITPostMouseInputMessage @ 0x1C012B240 (NtMITPostMouseInputMessage.c)
 *     NtMITPostThreadEventMessage @ 0x1C012B360 (NtMITPostThreadEventMessage.c)
 *     NtMITPostWindowEventMessage @ 0x1C012B480 (NtMITPostWindowEventMessage.c)
 *     NtMITSynthesizeKeyboardInput @ 0x1C012BB00 (NtMITSynthesizeKeyboardInput.c)
 *     NtMITSynthesizeMouseInput @ 0x1C012BEA0 (NtMITSynthesizeMouseInput.c)
 *     NtMITSynthesizeTouchInput @ 0x1C012C050 (NtMITSynthesizeTouchInput.c)
 * Callees:
 *     ?_CalledOnInputThread@CInputThread@@AEBA_NXZ @ 0x1C0042200 (-_CalledOnInputThread@CInputThread@@AEBA_NXZ.c)
 */

bool __fastcall CInputThread::IsInputThread(CInputThread *this)
{
  CInputThread *v1; // rdi
  bool v2; // bl

  v1 = gpInputThread;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v1, 0LL);
  v2 = CInputThread::_CalledOnInputThread(v1);
  ExReleasePushLockSharedEx(v1, 0LL);
  KeLeaveCriticalRegion();
  return v2;
}
