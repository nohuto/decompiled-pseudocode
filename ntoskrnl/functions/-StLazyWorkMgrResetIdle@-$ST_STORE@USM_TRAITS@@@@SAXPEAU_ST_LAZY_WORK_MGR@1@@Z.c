void __fastcall ST_STORE<SM_TRAITS>::StLazyWorkMgrResetIdle(__int64 a1)
{
  __int64 v1; // rbx
  unsigned __int64 UnbiasedInterruptTime; // rax
  __int64 v3; // r11

  v1 = *(_QWORD *)(a1 + 184);
  *(_QWORD *)(a1 + 184) = 0LL;
  if ( *(_QWORD *)(a1 + 168) != -1LL )
  {
    UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime();
    if ( *(_QWORD *)(v3 + 168) <= UnbiasedInterruptTime )
    {
      ST_STORE<SM_TRAITS>::StLazyWorkMgrRunExpiredWork(v3, UnbiasedInterruptTime);
    }
    else if ( v1 )
    {
      ST_STORE<SM_TRAITS>::StLazyWorkMgrSetSchedule(v3, UnbiasedInterruptTime);
    }
  }
}
