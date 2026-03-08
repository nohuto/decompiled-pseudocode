/*
 * XREFs of ??$_Find_last@PEAVCChannelContext@@@?$_Hash@V?$_Umap_traits@PEAVCChannelContext@@MV?$_Uhash_compare@PEAVCChannelContext@@U?$hash@PEAVCChannelContext@@@std@@U?$equal_to@PEAVCChannelContext@@@3@@std@@V?$allocator@U?$pair@QEAVCChannelContext@@M@std@@@3@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@QEAVCChannelContext@@M@std@@PEAX@std@@@1@AEBQEAVCChannelContext@@_K@Z @ 0x18002455C
 * Callers:
 *     ?erase@?$_Hash@V?$_Umap_traits@PEAVCChannelContext@@MV?$_Uhash_compare@PEAVCChannelContext@@U?$hash@PEAVCChannelContext@@@std@@U?$equal_to@PEAVCChannelContext@@@3@@std@@V?$allocator@U?$pair@QEAVCChannelContext@@M@std@@@3@$0A@@std@@@std@@QEAA_KAEBQEAVCChannelContext@@@Z @ 0x1800242D8 (-erase@-$_Hash@V-$_Umap_traits@PEAVCChannelContext@@MV-$_Uhash_compare@PEAVCChannelContext@@U-$h.c)
 *     ??$_Try_emplace@AEBQEAVCChannelContext@@$$V@?$_Hash@V?$_Umap_traits@PEAVCChannelContext@@MV?$_Uhash_compare@PEAVCChannelContext@@U?$hash@PEAVCChannelContext@@@std@@U?$equal_to@PEAVCChannelContext@@@3@@std@@V?$allocator@U?$pair@QEAVCChannelContext@@M@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@QEAVCChannelContext@@M@std@@PEAX@std@@_N@1@AEBQEAVCChannelContext@@@Z @ 0x180024388 (--$_Try_emplace@AEBQEAVCChannelContext@@$$V@-$_Hash@V-$_Umap_traits@PEAVCChannelContext@@MV-$_Uh.c)
 *     ?GetGlobalPlaybackRate@CExpressionManager@@QEAAMPEAVCChannelContext@@@Z @ 0x1800244E0 (-GetGlobalPlaybackRate@CExpressionManager@@QEAAMPEAVCChannelContext@@@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Hash<std::_Umap_traits<CChannelContext *,float,std::_Uhash_compare<CChannelContext *,std::hash<CChannelContext *>,std::equal_to<CChannelContext *>>,std::allocator<std::pair<CChannelContext * const,float>>,0>>::_Find_last<CChannelContext *>(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3,
        __int64 a4)
{
  __int64 v4; // r11
  _QWORD *v5; // r10
  __int64 v6; // rax
  _QWORD *v7; // r9

  v4 = a1[3];
  v5 = (_QWORD *)a1[1];
  v6 = 2 * (a4 & a1[6]);
  v7 = *(_QWORD **)(v4 + 16 * (a4 & a1[6]) + 8);
  if ( v7 == v5 )
  {
    *a2 = v5;
  }
  else
  {
    while ( 1 )
    {
      if ( *a3 == v7[2] )
      {
        *a2 = *v7;
        a2[1] = v7;
        return a2;
      }
      if ( v7 == *(_QWORD **)(v4 + 8 * v6) )
        break;
      v7 = (_QWORD *)v7[1];
    }
    *a2 = v7;
  }
  a2[1] = 0LL;
  return a2;
}
