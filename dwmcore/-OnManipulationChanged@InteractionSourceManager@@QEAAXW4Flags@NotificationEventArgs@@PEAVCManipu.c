/*
 * XREFs of ?OnManipulationChanged@InteractionSourceManager@@QEAAXW4Flags@NotificationEventArgs@@PEAVCManipulation@@@Z @ 0x180271824
 * Callers:
 *     ?OnChanged@CInteractionTracker@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18022FD00 (-OnChanged@CInteractionTracker@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180004700 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?AreInteractionAnimationsAlive@CInteractionTracker@@QEBA_NXZ @ 0x18012E802 (-AreInteractionAnimationsAlive@CInteractionTracker@@QEBA_NXZ.c)
 *     ?ShouldChainAllForAxis@CInteractionTracker@@QEBA_NW4ScrollAxis@@PEBVCManipulation@@@Z @ 0x18023207C (-ShouldChainAllForAxis@CInteractionTracker@@QEBA_NW4ScrollAxis@@PEBVCManipulation@@@Z.c)
 *     ?ShouldChainForAxis@CInteractionTracker@@QEBA_NW4ScrollAxis@@PEBVCManipulation@@_N@Z @ 0x18023213C (-ShouldChainForAxis@CInteractionTracker@@QEBA_NW4ScrollAxis@@PEBVCManipulation@@_N@Z.c)
 *     ??0?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCManipulation@@@Z @ 0x180270A38 (--0-$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCManipulation@@@Z.c)
 *     ?AddActiveManipulation@InteractionSourceManager@@AEAAXPEAVCManipulation@@@Z @ 0x180270BA4 (-AddActiveManipulation@InteractionSourceManager@@AEAAXPEAVCManipulation@@@Z.c)
 *     ?IsManipulationActive@InteractionSourceManager@@AEAA_NPEBVCManipulation@@@Z @ 0x180271430 (-IsManipulationActive@InteractionSourceManager@@AEAA_NPEBVCManipulation@@@Z.c)
 *     ?ReconfigureAllManipulations@InteractionSourceManager@@QEAAXXZ @ 0x180271C7C (-ReconfigureAllManipulations@InteractionSourceManager@@QEAAXXZ.c)
 *     ?at@?$unordered_map@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$unique_ptr@VCChainingHelper@@U?$default_delete@VCChainingHelper@@@std@@@std@@U?$hash@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@4@U?$equal_to@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@4@V?$allocator@U?$pair@$$CBV?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$unique_ptr@VCChainingHelper@@U?$default_delete@VCChainingHelper@@@std@@@std@@@std@@@4@@std@@QEAAAEAV?$unique_ptr@VCChainingHelper@@U?$default_delete@VCChainingHelper@@@std@@@2@AEBV?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x180272338 (-at@-$unordered_map@V-$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V-$unique_ptr.c)
 */

void __fastcall InteractionSourceManager::OnManipulationChanged(__int64 a1, int a2, const struct CManipulation *a3)
{
  int v5; // edx
  int v6; // edx
  int v7; // edx
  const struct CManipulation *v8; // r8
  _QWORD *v9; // rax
  __int64 v10; // rcx
  int v11; // r11d
  _BYTE *v12; // rsi
  _BYTE *v13; // rbx
  int v14; // r11d
  bool v15; // dl
  struct CManipulation *v16; // rdx
  __int64 v17; // [rsp+48h] [rbp+20h] BYREF

  v5 = a2 - 7;
  if ( v5 )
  {
    v6 = v5 - 3;
    if ( v6 )
    {
      v7 = v6 - 2;
      if ( v7 )
      {
        if ( v7 == 1
          && CInteractionTracker::AreInteractionAnimationsAlive(*(CInteractionTracker **)(*(_QWORD *)(a1 + 8) + 16LL)) )
        {
          if ( InteractionSourceManager::IsManipulationActive((InteractionSourceManager *)a1, v8) )
            *(_BYTE *)(*(_QWORD *)(*(_QWORD *)a1 + 424LL) + 448LL) |= 4u;
        }
      }
      else
      {
        wil::com_ptr_t<CManipulation,wil::err_returncode_policy>::com_ptr_t<CManipulation,wil::err_returncode_policy>(
          &v17,
          (__int64)a3);
        v9 = (_QWORD *)std::unordered_map<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>,std::unique_ptr<CChainingHelper>>::at(
                         a1 + 16,
                         &v17);
        v11 = 0;
        v12 = (_BYTE *)*v9;
        v13 = (_BYTE *)*v9;
        do
        {
          v15 = CInteractionTracker::ShouldChainForAxis(v10, v11, (__int64)a3, 1u)
             && CInteractionTracker::ShouldChainAllForAxis(v10, v14, (__int64)a3);
          LOBYTE(v10) = *v13;
          if ( (*v13 & 1) != v15 )
          {
            LOBYTE(v10) = v15 | v10 & 0xFE;
            *v13 = v10;
            v12[36] |= 1u;
          }
          v11 = v14 + 1;
          v13 += 12;
        }
        while ( v11 < 3 );
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v17);
      }
    }
    else if ( !*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL) + 176LL) )
    {
      InteractionSourceManager::ReconfigureAllManipulations((InteractionSourceManager *)a1);
    }
  }
  else
  {
    if ( !InteractionSourceManager::IsManipulationActive((InteractionSourceManager *)a1, a3) )
      InteractionSourceManager::AddActiveManipulation((InteractionSourceManager *)a1, v16);
    *(_BYTE *)(a1 + 120) = 1;
  }
}
