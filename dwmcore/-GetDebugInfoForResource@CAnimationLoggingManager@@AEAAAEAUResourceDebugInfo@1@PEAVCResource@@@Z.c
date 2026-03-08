/*
 * XREFs of ?GetDebugInfoForResource@CAnimationLoggingManager@@AEAAAEAUResourceDebugInfo@1@PEAVCResource@@@Z @ 0x18003E800
 * Callers:
 *     ?ProcessSetComment@CAnimationLoggingManager@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_ANIMATIONLOGGINGMANAGER_SETCOMMENT@@PEBXI@Z @ 0x18003E76C (-ProcessSetComment@CAnimationLoggingManager@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_ANIMATIONLOG.c)
 *     ?ProcessSetDiagnosticItemId@CAnimationLoggingManager@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_ANIMATIONLOGGINGMANAGER_SETDIAGNOSTICITEMID@@@Z @ 0x180212F6C (-ProcessSetDiagnosticItemId@CAnimationLoggingManager@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_ANI.c)
 * Callees:
 *     ?TryGetDebugInfoForResource@CAnimationLoggingManager@@AEAAPEAUResourceDebugInfo@1@PEAVCResource@@@Z @ 0x18003E85C (-TryGetDebugInfoForResource@CAnimationLoggingManager@@AEAAPEAUResourceDebugInfo@1@PEAVCResource@.c)
 *     ??$_Try_emplace@AEBQEAVCResource@@$$V@?$_Hash@V?$_Umap_traits@PEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@V?$_Uhash_compare@PEAVCResource@@U?$hash@PEAVCResource@@@std@@U?$equal_to@PEAVCResource@@@3@@std@@V?$allocator@U?$pair@QEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@@std@@@5@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@QEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@@std@@PEAX@std@@_N@1@AEBQEAVCResource@@@Z @ 0x18003EAD0 (--$_Try_emplace@AEBQEAVCResource@@$$V@-$_Hash@V-$_Umap_traits@PEAVCResource@@UResourceDebugInfo@.c)
 */

struct CAnimationLoggingManager::ResourceDebugInfo *__fastcall CAnimationLoggingManager::GetDebugInfoForResource(
        CAnimationLoggingManager *this,
        struct CResource *a2)
{
  struct CAnimationLoggingManager::ResourceDebugInfo *DebugInfoForResource; // rdx
  __int64 v4; // rdx
  _BYTE v6[24]; // [rsp+20h] [rbp-18h] BYREF
  struct CResource *v7; // [rsp+48h] [rbp+10h] BYREF

  v7 = a2;
  DebugInfoForResource = CAnimationLoggingManager::TryGetDebugInfoForResource(this, a2);
  if ( !DebugInfoForResource )
  {
    v4 = *(_QWORD *)std::_Hash<std::_Umap_traits<CResource *,CAnimationLoggingManager::ResourceDebugInfo,std::_Uhash_compare<CResource *,std::hash<CResource *>,std::equal_to<CResource *>>,std::allocator<std::pair<CResource * const,CAnimationLoggingManager::ResourceDebugInfo>>,0>>::_Try_emplace<CResource * const &,>(
                      (char *)this + 96,
                      v6,
                      &v7);
    ++*((_DWORD *)this + 48);
    DebugInfoForResource = (struct CAnimationLoggingManager::ResourceDebugInfo *)(v4 + 24);
    *(_DWORD *)DebugInfoForResource = *((_DWORD *)this + 48);
    *((_DWORD *)v7 + 8) |= 0x10u;
  }
  return DebugInfoForResource;
}
