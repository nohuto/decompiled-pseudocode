__int64 __fastcall CAnimationLoggingManager::ProcessSetComment(
        CAnimationLoggingManager *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_ANIMATIONLOGGINGMANAGER_SETCOMMENT *a3,
        const void *a4,
        unsigned int a5)
{
  struct CResource *ResourceWithoutType; // rax
  struct CResource *v9; // rdi
  struct CAnimationLoggingManager::ResourceDebugInfo *DebugInfoForResource; // rsi
  unsigned int v11; // ebp
  int v13; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  ResourceWithoutType = CResourceTable::GetResourceWithoutType(
                          *(CResourceTable **)(*((_QWORD *)this + 6) + 32LL),
                          *((_DWORD *)a3 + 2));
  v9 = ResourceWithoutType;
  if ( ResourceWithoutType )
  {
    DebugInfoForResource = CAnimationLoggingManager::GetDebugInfoForResource(this, ResourceWithoutType);
    v11 = SetCommentHelper<tagMILCMD_ANIMATIONLOGGINGMANAGER_SETCOMMENT const>(
            (char *)DebugInfoForResource + 8,
            a3,
            a4,
            a5);
    if ( !*((_QWORD *)DebugInfoForResource + 3) && !*((_DWORD *)DebugInfoForResource + 10) )
      CAnimationLoggingManager::RemoveResourceDebugInfo(this, v9);
    return v11;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xE6,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\animationloggingmanager.cpp",
      (const char *)0x88980403LL,
      v13);
    return 2291663875LL;
  }
}
