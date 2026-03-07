void __fastcall DISPLAY_SOURCE::SetPostCompositionConfigUnsafe(
        DISPLAY_SOURCE *this,
        char a2,
        const struct tagRECT *a3,
        const struct tagRECT *a4)
{
  struct _POST_COMPOSITION_CONFIG *LatestPostCompositionConfigInternal; // rax

  if ( *(struct _KTHREAD **)(*((_QWORD *)this + 1) + 632LL) != KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 9460LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"m_DisplayCore->IsDisplayStateMutexOwner()",
      9460LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  LatestPostCompositionConfigInternal = DISPLAY_SOURCE::GetLatestPostCompositionConfigInternal(this);
  if ( LatestPostCompositionConfigInternal )
  {
    if ( PostCompositionConfigsMatch(LatestPostCompositionConfigInternal, a2, a3, a4) )
      goto LABEL_8;
  }
  else if ( !a2 )
  {
    return;
  }
  DISPLAY_SOURCE::CreateNewPostCompositionConfig(this, a2, a3, a4);
LABEL_8:
  if ( a2 )
    *((_BYTE *)this + 3768) = 1;
}
