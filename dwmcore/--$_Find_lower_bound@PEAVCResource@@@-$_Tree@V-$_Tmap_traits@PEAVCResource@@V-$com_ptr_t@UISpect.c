/*
 * XREFs of ??$_Find_lower_bound@PEAVCResource@@@?$_Tree@V?$_Tmap_traits@PEAVCResource@@V?$com_ptr_t@UISpectreTexture@@Uerr_returncode_policy@wil@@@wil@@U?$less@PEAVCResource@@@std@@V?$allocator@U?$pair@QEAVCResource@@V?$com_ptr_t@UISpectreTexture@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@QEAVCResource@@V?$com_ptr_t@UISpectreTexture@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@1@AEBQEAVCResource@@@Z @ 0x1800B038C
 * Callers:
 *     ??1CVisualSurface@@UEAA@XZ @ 0x1800B0234 (--1CVisualSurface@@UEAA@XZ.c)
 *     ??$_Try_emplace@AEBQEAVCResource@@$$V@?$map@PEAVCResource@@V?$com_ptr_t@UISpectreTexture@@Uerr_returncode_policy@wil@@@wil@@U?$less@PEAVCResource@@@std@@V?$allocator@U?$pair@QEAVCResource@@V?$com_ptr_t@UISpectreTexture@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@QEAVCResource@@V?$com_ptr_t@UISpectreTexture@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@_N@1@AEBQEAVCResource@@@Z @ 0x1801B9680 (--$_Try_emplace@AEBQEAVCResource@@$$V@-$map@PEAVCResource@@V-$com_ptr_t@UISpectreTexture@@Uerr_r.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<CResource *,wil::com_ptr_t<ISpectreTexture,wil::err_returncode_policy>,std::less<CResource *>,std::allocator<std::pair<CResource * const,wil::com_ptr_t<ISpectreTexture,wil::err_returncode_policy>>>,0>>::_Find_lower_bound<CResource *>(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 *a3)
{
  __int64 v3; // rax
  __int64 *v4; // rcx
  unsigned __int64 v6; // r8
  int v7; // eax

  v3 = *a1;
  *(_DWORD *)(a2 + 8) = 0;
  *(_QWORD *)(a2 + 16) = v3;
  v4 = *(__int64 **)(v3 + 8);
  *(_QWORD *)a2 = v4;
  if ( !*((_BYTE *)v4 + 25) )
  {
    v6 = *a3;
    do
    {
      *(_QWORD *)a2 = v4;
      if ( v4[4] >= v6 )
      {
        *(_QWORD *)(a2 + 16) = v4;
        v7 = 1;
        v4 = (__int64 *)*v4;
      }
      else
      {
        v4 = (__int64 *)v4[2];
        v7 = 0;
      }
      *(_DWORD *)(a2 + 8) = v7;
    }
    while ( !*((_BYTE *)v4 + 25) );
  }
  return a2;
}
