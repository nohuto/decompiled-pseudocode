__int64 __fastcall CAnimationLoggingManager::ProcessSetCompositorComment(
        CAnimationLoggingManager *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_ANIMATIONLOGGINGMANAGER_SETCOMPOSITORCOMMENT *a3,
        const void *a4,
        unsigned int a5)
{
  int v5; // eax
  __int64 v6; // rcx
  unsigned int v7; // ebx

  v5 = SetCommentHelper<tagMILCMD_ANIMATIONLOGGINGMANAGER_SETCOMPOSITORCOMMENT const>((char *)this + 160, a3, a4, a5);
  v7 = v5;
  if ( v5 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x108u, 0LL);
  return v7;
}
