__int64 __fastcall CAnimationLoggingManager::ProcessSetAnimationEnded(
        CAnimationLoggingManager *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_ANIMATIONLOGGINGMANAGER_SETANIMATIONENDED *a3)
{
  unsigned int v3; // r9d
  struct CResource *ResourceWithoutType; // rax
  const struct tagMILCMD_ANIMATIONLOGGINGMANAGER_SETANIMATIONENDED *v5; // r11
  CAnimationLoggingManager *v6; // r10

  v3 = *((_DWORD *)a3 + 2);
  ResourceWithoutType = 0LL;
  v5 = a3;
  v6 = this;
  if ( v3 )
    ResourceWithoutType = CResourceTable::GetResourceWithoutType(*(CResourceTable **)(*((_QWORD *)this + 6) + 32LL), v3);
  CAnimationLoggingManager::LogAnimationEnded(
    (wchar_t *)v6,
    *(_QWORD *)(*((_QWORD *)v6 + 2) + 496LL),
    ResourceWithoutType,
    v3,
    *((_DWORD *)v5 + 3),
    *((_DWORD *)v5 + 4));
  return 0LL;
}
