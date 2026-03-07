__int64 __fastcall CAnimationLoggingManager::ProcessRegisterWithChannel(
        CAnimationLoggingManager *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_ANIMATIONLOGGINGMANAGER_REGISTERWITHCHANNEL *a3)
{
  *(_QWORD *)(*((_QWORD *)this + 6) + 64LL) = this;
  (*(void (__fastcall **)(CAnimationLoggingManager *, struct CResourceTable *, const struct tagMILCMD_ANIMATIONLOGGINGMANAGER_REGISTERWITHCHANNEL *))(*(_QWORD *)this + 8LL))(
    this,
    a2,
    a3);
  return 0LL;
}
