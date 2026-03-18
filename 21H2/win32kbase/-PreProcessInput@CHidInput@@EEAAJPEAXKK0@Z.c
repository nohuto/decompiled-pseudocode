/*
 * XREFs of ?PreProcessInput@CHidInput@@EEAAJPEAXKK0@Z @ 0x1C01E28C0
 * Callers:
 *     <none>
 * Callees:
 *     HMAssignmentUnlockWorker @ 0x1C0038F7C (HMAssignmentUnlockWorker.c)
 *     ?GetInstance@DelayZonePalmRejection@@SAPEAV1@XZ @ 0x1C0083180 (-GetInstance@DelayZonePalmRejection@@SAPEAV1@XZ.c)
 *     ?FlushDelayZonePalmRejectInputTimerProc@DelayZonePalmRejection@@QEAAXXZ @ 0x1C00E8E0E (-FlushDelayZonePalmRejectInputTimerProc@DelayZonePalmRejection@@QEAAXXZ.c)
 */

__int64 __fastcall CHidInput::PreProcessInput(CHidInput *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  DelayZonePalmRejection *Instance; // rax

  if ( (a3 & 0x1C) != 0 )
  {
    v5 = *((_QWORD *)this + 2);
    if ( v5 )
    {
      if ( *(_QWORD *)(v5 + 48) )
      {
        HMAssignmentUnlockWorker((__int64 *)(v5 + 48), a2, a3, a4);
        *(_QWORD *)(*((_QWORD *)this + 2) + 48LL) = 0LL;
        v5 = *((_QWORD *)this + 2);
      }
      if ( *(_QWORD *)(v5 + 56) )
      {
        HMAssignmentUnlockWorker((__int64 *)(v5 + 56), a2, a3, a4);
        *(_QWORD *)(*((_QWORD *)this + 2) + 56LL) = 0LL;
      }
    }
  }
  Instance = DelayZonePalmRejection::GetInstance();
  DelayZonePalmRejection::FlushDelayZonePalmRejectInputTimerProc(Instance);
  return 0LL;
}
