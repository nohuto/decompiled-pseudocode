/*
 * XREFs of ?CleanupManipulationMap@InteractionSourceManager@@AEAAXAEBV?$vector@PEAVCManipulation@@V?$allocator@PEAVCManipulation@@@std@@@std@@@Z @ 0x180270BF8
 * Callers:
 *     ?ProcessSetManipulations@InteractionSourceManager@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTRACKER_SETMANIPULATIONS@@PEBUMarshaledManipulationInfo@@@Z @ 0x18027195C (-ProcessSetManipulations@InteractionSourceManager@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERA.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800234BC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x1801BB140 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@@s.c)
 *     ??$_Emplace_reallocate@AEBV?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@QEAV23@AEBV23@@Z @ 0x1802701E0 (--$_Emplace_reallocate@AEBV-$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@-$vect.c)
 *     ??0?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCManipulation@@@Z @ 0x180270A38 (--0-$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCManipulation@@@Z.c)
 *     ?IsManipulationActive@InteractionSourceManager@@AEAA_NPEBVCManipulation@@@Z @ 0x180271430 (-IsManipulationActive@InteractionSourceManager@@AEAA_NPEBVCManipulation@@@Z.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$unique_ptr@VCChainingHelper@@U?$default_delete@VCChainingHelper@@@std@@@std@@V?$_Uhash_compare@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@U?$hash@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@U?$equal_to@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@4@@4@V?$allocator@U?$pair@$$CBV?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$unique_ptr@VCChainingHelper@@U?$default_delete@VCChainingHelper@@@std@@@std@@@std@@@4@$0A@@std@@@std@@QEAA_KAEBV?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x180272414 (-erase@-$_Hash@V-$_Umap_traits@V-$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V-.c)
 *     ?erase@?$deque@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@2@V?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@2@@Z @ 0x180272620 (-erase@-$deque@V-$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V-$al_ea_180272620.c)
 *     ?ClearAllConfigurations@CChainingHelper@@QEAAXXZ @ 0x180272F40 (-ClearAllConfigurations@CChainingHelper@@QEAAXXZ.c)
 */

void __fastcall InteractionSourceManager::CleanupManipulationMap(InteractionSourceManager *this, _QWORD **a2)
{
  __int64 **v2; // r12
  __int64 *v3; // rdi
  __int64 **v5; // rbx
  __int64 *v7; // rsi
  _QWORD *v8; // rax
  __int64 *v9; // r14
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rcx
  __int64 *v13; // rbx
  __int64 *v14; // r14
  void *v15[2]; // [rsp+20h] [rbp-50h] BYREF
  __int64 *v16; // [rsp+30h] [rbp-40h]
  _QWORD v17[3]; // [rsp+38h] [rbp-38h] BYREF
  char v18[32]; // [rsp+50h] [rbp-20h] BYREF
  __int64 v19; // [rsp+B0h] [rbp+40h]
  char *v20; // [rsp+B8h] [rbp+48h]

  v2 = (__int64 **)*((_QWORD *)this + 3);
  v20 = (char *)this + 16;
  v3 = 0LL;
  *(_OWORD *)v15 = 0LL;
  v5 = (__int64 **)*v2;
  v7 = 0LL;
  v16 = 0LL;
  while ( v5 != v2 )
  {
    v8 = *a2;
    v9 = (__int64 *)(v5 + 2);
    if ( *a2 == a2[1] )
    {
LABEL_6:
      if ( v7 == v3 )
      {
        std::vector<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<CManipulation,wil::err_returncode_policy> const &>(
          (__int64 **)v15,
          v7,
          v5 + 2);
        v3 = v16;
        v7 = (__int64 *)v15[1];
      }
      else
      {
        wil::com_ptr_t<CManipulation,wil::err_returncode_policy>::com_ptr_t<CManipulation,wil::err_returncode_policy>(
          v7++,
          *v9);
        v15[1] = v7;
      }
      if ( InteractionSourceManager::IsManipulationActive(this, (const struct CManipulation *)*v9) )
      {
        CChainingHelper::ClearAllConfigurations((CChainingHelper *)v5[3]);
        v10 = 0LL;
        v11 = *((_QWORD *)this + 13);
        v19 = *v9;
        if ( *((_QWORD *)this + 14) )
        {
          while ( 1 )
          {
            v9 = (__int64 *)(v5 + 2);
            if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 11)
                                       + 8 * ((*((_QWORD *)this + 12) - 1LL) & ((unsigned __int64)(v11 + v10) >> 1)))
                           + 8LL * (((_DWORD)v11 + (_DWORD)v10) & 1)) == v19 )
              break;
            if ( (unsigned __int64)++v10 >= *((_QWORD *)this + 14) )
              goto LABEL_13;
          }
        }
        else
        {
LABEL_13:
          LODWORD(v10) = *((_DWORD *)this + 28);
        }
        v12 = *((_QWORD *)this + 10);
        v17[1] = 0LL;
        v17[0] = v12;
        v17[2] = v11 + (int)v10;
        std::deque<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>::erase((char *)this + 80, v18, v17);
        *((_BYTE *)this + 120) = 1;
      }
      CResource::UnRegisterNotifierInternal(*(CResource **)(*((_QWORD *)this + 1) + 16LL), (struct CResource *)*v9);
    }
    else
    {
      while ( *v9 != *v8 )
      {
        if ( ++v8 == a2[1] )
          goto LABEL_6;
      }
    }
    v5 = (__int64 **)*v5;
  }
  v13 = (__int64 *)v15[0];
  v14 = (__int64 *)v15[0];
  if ( v15[0] != v7 )
  {
    do
      std::_Hash<std::_Umap_traits<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>,std::unique_ptr<CChainingHelper>,std::_Uhash_compare<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>,std::hash<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>,std::equal_to<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>>,std::allocator<std::pair<wil::com_ptr_t<CManipulation,wil::err_returncode_policy> const,std::unique_ptr<CChainingHelper>>>,0>>::erase(
        v20,
        v14++);
    while ( v14 != v7 );
    v13 = (__int64 *)v15[0];
  }
  if ( v13 )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<IDXGIResource,wil::err_returncode_policy>>>(v13, v7);
    std::_Deallocate<16,0>(v13, ((char *)v3 - (char *)v13) & 0xFFFFFFFFFFFFFFF8uLL);
  }
}
