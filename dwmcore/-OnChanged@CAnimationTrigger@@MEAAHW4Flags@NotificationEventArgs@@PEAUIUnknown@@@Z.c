/*
 * XREFs of ?OnChanged@CAnimationTrigger@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18001F4C0
 * Callers:
 *     <none>
 * Callees:
 *     ?ShouldSendAnimationNotification@CAnimationTrigger@@AEBA_NXZ @ 0x18001F4F8 (-ShouldSendAnimationNotification@CAnimationTrigger@@AEBA_NXZ.c)
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x1800D7984 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ?TryNotify@DataProviderManager@@QEAAXPEAVCResource@@_K1W4DataProviderNotificationEventArg@@@Z @ 0x1801B4C20 (-TryNotify@DataProviderManager@@QEAAXPEAVCResource@@_K1W4DataProviderNotificationEventArg@@@Z.c)
 *     ??$_Find_last@PEAUIUnknown@@@?$_Hash@V?$_Uset_traits@PEAUIUnknown@@V?$_Uhash_compare@PEAUIUnknown@@U?$hash@PEAUIUnknown@@@std@@U?$equal_to@PEAUIUnknown@@@3@@std@@V?$allocator@PEAUIUnknown@@@3@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@PEAUIUnknown@@PEAX@std@@@1@AEBQEAUIUnknown@@_K@Z @ 0x18021C960 (--$_Find_last@PEAUIUnknown@@@-$_Hash@V-$_Uset_traits@PEAUIUnknown@@V-$_Uhash_compare@PEAUIUnknow.c)
 *     ?erase@?$_Hash@V?$_Uset_traits@PEAUIUnknown@@V?$_Uhash_compare@PEAUIUnknown@@U?$hash@PEAUIUnknown@@@std@@U?$equal_to@PEAUIUnknown@@@3@@std@@V?$allocator@PEAUIUnknown@@@3@$0A@@std@@@std@@QEAA_KAEBQEAUIUnknown@@@Z @ 0x18021CD28 (-erase@-$_Hash@V-$_Uset_traits@PEAUIUnknown@@V-$_Uhash_compare@PEAUIUnknown@@U-$hash@PEAUIUnknow.c)
 */

__int64 __fastcall CAnimationTrigger::OnChanged(CAnimationTrigger *a1, __int64 a2, __int64 a3)
{
  int v4; // edx
  unsigned __int64 v5; // rcx
  __int64 v6; // r8
  unsigned __int64 v8; // rdi
  unsigned __int64 appended; // rax
  __int64 v10; // rcx
  _BYTE v11[24]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v12; // [rsp+60h] [rbp+18h] BYREF

  v12 = a3;
  if ( CAnimationTrigger::ShouldSendAnimationNotification(a1)
    && *(_QWORD *)(v5 + 152)
    && (unsigned int)(v4 - 8) <= 1
    && v6 )
  {
    v8 = v5 + 136;
    appended = std::_Fnv1a_append_bytes(v5, (const unsigned __int8 *const)&v12, 8uLL);
    v10 = *(_QWORD *)(std::_Hash<std::_Uset_traits<IUnknown *,std::_Uhash_compare<IUnknown *,std::hash<IUnknown *>,std::equal_to<IUnknown *>>,std::allocator<IUnknown *>,0>>::_Find_last<IUnknown *>(
                        v8,
                        v11,
                        &v12,
                        appended)
                    + 8);
    if ( !v10 )
      v10 = *(_QWORD *)(v8 + 8);
    if ( v10 != *((_QWORD *)a1 + 18) )
      std::_Hash<std::_Uset_traits<IUnknown *,std::_Uhash_compare<IUnknown *,std::hash<IUnknown *>,std::equal_to<IUnknown *>>,std::allocator<IUnknown *>,0>>::erase(
        v8,
        &v12);
    if ( !*((_QWORD *)a1 + 19) )
      DataProviderManager::TryNotify(
        *(_QWORD *)(*((_QWORD *)a1 + 2) + 1256LL),
        a1,
        *((_QWORD *)a1 + 10),
        *((_QWORD *)a1 + 11),
        1);
  }
  return 1LL;
}
