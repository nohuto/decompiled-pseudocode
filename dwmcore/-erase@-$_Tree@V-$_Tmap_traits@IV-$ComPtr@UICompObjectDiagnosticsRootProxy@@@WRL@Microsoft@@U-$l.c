/*
 * XREFs of ?erase@?$_Tree@V?$_Tmap_traits@IV?$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL@Microsoft@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIV?$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@QEAA_KAEBI@Z @ 0x1801B8FAC
 * Callers:
 *     ?OnPeerDisconnected@DiagnosticCallbacksManager@@MEAAJPEAVBamoPeer@DiagnosticCallbacks_AutoBamos@@_N@Z @ 0x1801B7400 (-OnPeerDisconnected@DiagnosticCallbacksManager@@MEAAJPEAVBamoPeer@DiagnosticCallbacks_AutoBamos@.c)
 * Callees:
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVCProjectedShadowCaster@@V?$com_ptr_t@VCProjectedShadow@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1801A3B98 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@QEAVCProjectedSha.c)
 *     ?_Erase_unchecked@?$_Tree@V?$_Tmap_traits@IV?$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL@Microsoft@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIV?$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@AEAAPEAU?$_Tree_node@U?$pair@$$CBIV?$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL@Microsoft@@@std@@PEAX@2@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL@Microsoft@@@std@@@std@@@std@@U_Iterator_base0@2@@2@0@Z @ 0x1801B8E2C (-_Erase_unchecked@-$_Tree@V-$_Tmap_traits@IV-$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL@Micr.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<unsigned int,Microsoft::WRL::ComPtr<ICompObjectDiagnosticsRootProxy>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,Microsoft::WRL::ComPtr<ICompObjectDiagnosticsRootProxy>>>,0>>::erase(
        __int64 *a1,
        unsigned int *a2)
{
  __int64 v2; // r10
  __int64 v3; // rbx
  __int64 v5; // r9
  __int64 v6; // rax
  __int64 v7; // r8
  unsigned int v8; // r11d
  __int64 v9; // rax
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a1;
  v3 = 0LL;
  v5 = *a1;
  v6 = *(_QWORD *)(*a1 + 8);
  v7 = v6;
  if ( !*(_BYTE *)(v6 + 25) )
  {
    v8 = *a2;
    do
    {
      if ( *(_DWORD *)(v7 + 32) >= v8 )
      {
        if ( *(_BYTE *)(v5 + 25) && v8 < *(_DWORD *)(v7 + 32) )
          v5 = v7;
        v2 = v7;
        v7 = *(_QWORD *)v7;
      }
      else
      {
        v7 = *(_QWORD *)(v7 + 16);
      }
    }
    while ( !*(_BYTE *)(v7 + 25) );
  }
  if ( !*(_BYTE *)(v5 + 25) )
    v6 = *(_QWORD *)v5;
  while ( !*(_BYTE *)(v6 + 25) )
  {
    if ( *a2 >= *(_DWORD *)(v6 + 32) )
    {
      v6 = *(_QWORD *)(v6 + 16);
    }
    else
    {
      v5 = v6;
      v6 = *(_QWORD *)v6;
    }
  }
  v9 = v2;
  v11 = v2;
  while ( v9 != v5 )
  {
    ++v3;
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<CProjectedShadowCaster * const,wil::com_ptr_t<CProjectedShadow,wil::err_returncode_policy>>>>,std::_Iterator_base0>::operator++(&v11);
    v9 = v11;
  }
  std::_Tree<std::_Tmap_traits<unsigned int,Microsoft::WRL::ComPtr<ICompObjectDiagnosticsRootProxy>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,Microsoft::WRL::ComPtr<ICompObjectDiagnosticsRootProxy>>>,0>>::_Erase_unchecked(
    a1,
    v2,
    v5);
  return v3;
}
