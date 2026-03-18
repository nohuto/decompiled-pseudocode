/*
 * XREFs of ?OnFlushDelayZonePalmRejectInputTimerNotification@CHidInput@@EEAAJXZ @ 0x1C01E1D90
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInstance@DelayZonePalmRejection@@SAPEAV1@XZ @ 0x1C0083180 (-GetInstance@DelayZonePalmRejection@@SAPEAV1@XZ.c)
 *     ?FlushDelayZonePalmRejectInputTimerProc@DelayZonePalmRejection@@QEAAXXZ @ 0x1C00E8E0E (-FlushDelayZonePalmRejectInputTimerProc@DelayZonePalmRejection@@QEAAXXZ.c)
 */

__int64 __fastcall CHidInput::OnFlushDelayZonePalmRejectInputTimerNotification(CHidInput *this)
{
  DelayZonePalmRejection *Instance; // rax

  Instance = DelayZonePalmRejection::GetInstance();
  DelayZonePalmRejection::FlushDelayZonePalmRejectInputTimerProc(Instance);
  return 0LL;
}
