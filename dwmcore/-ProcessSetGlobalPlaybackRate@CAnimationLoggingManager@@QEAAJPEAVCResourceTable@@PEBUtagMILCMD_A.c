/*
 * XREFs of ?ProcessSetGlobalPlaybackRate@CAnimationLoggingManager@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_ANIMATIONLOGGINGMANAGER_SETGLOBALPLAYBACKRATE@@@Z @ 0x1800FC1FC
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ??$_Try_emplace@AEBQEAVCChannelContext@@$$V@?$_Hash@V?$_Umap_traits@PEAVCChannelContext@@MV?$_Uhash_compare@PEAVCChannelContext@@U?$hash@PEAVCChannelContext@@@std@@U?$equal_to@PEAVCChannelContext@@@3@@std@@V?$allocator@U?$pair@QEAVCChannelContext@@M@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@QEAVCChannelContext@@M@std@@PEAX@std@@_N@1@AEBQEAVCChannelContext@@@Z @ 0x180024388 (--$_Try_emplace@AEBQEAVCChannelContext@@$$V@-$_Hash@V-$_Umap_traits@PEAVCChannelContext@@MV-$_Uh.c)
 */

__int64 __fastcall CAnimationLoggingManager::ProcessSetGlobalPlaybackRate(
        CAnimationLoggingManager *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_ANIMATIONLOGGINGMANAGER_SETGLOBALPLAYBACKRATE *a3)
{
  int v3; // xmm6_4
  __int64 v4; // rcx
  __int64 result; // rax
  __int64 v6; // [rsp+20h] [rbp-28h] BYREF
  struct CResourceTable *v7; // [rsp+58h] [rbp+10h] BYREF

  v7 = a2;
  v7 = (struct CResourceTable *)*((_QWORD *)this + 6);
  v3 = *((_DWORD *)a3 + 2);
  v4 = *(_QWORD *)std::_Hash<std::_Umap_traits<CChannelContext *,float,std::_Uhash_compare<CChannelContext *,std::hash<CChannelContext *>,std::equal_to<CChannelContext *>>,std::allocator<std::pair<CChannelContext * const,float>>,0>>::_Try_emplace<CChannelContext * const &,>(
                    (float *)(*(_QWORD *)(*((_QWORD *)this + 2) + 424LL) + 464LL),
                    (__int64)&v6,
                    (const unsigned __int8 *)&v7);
  result = 0LL;
  *(_DWORD *)(v4 + 24) = v3;
  return result;
}
