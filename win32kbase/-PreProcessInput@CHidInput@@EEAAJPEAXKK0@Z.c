__int64 __fastcall CHidInput::PreProcessInput(CHidInput *this, void *a2, char a3)
{
  __int64 v4; // rax
  __int64 *v5; // rcx

  if ( (a3 & 0x1C) != 0 )
  {
    v4 = *((_QWORD *)this + 2);
    if ( v4 )
    {
      if ( *(_QWORD *)(v4 + 48) )
      {
        HMAssignmentUnlockWorker((__int64 *)(v4 + 48));
        *(_QWORD *)(*((_QWORD *)this + 2) + 48LL) = 0LL;
      }
      v5 = (__int64 *)(*((_QWORD *)this + 2) + 56LL);
      if ( *v5 )
      {
        HMAssignmentUnlockWorker(v5);
        *(_QWORD *)(*((_QWORD *)this + 2) + 56LL) = 0LL;
      }
    }
  }
  return CHidInput::OnFlushDelayZonePalmRejectInputTimerNotification(this);
}
