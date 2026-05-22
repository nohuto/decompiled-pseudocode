/*
 * XREFs of ?lower_bound@?$_Hash@V?$_Umap_traits@_KUTargetingInfo@Win32kInterop@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUTargetingInfo@Win32kInterop@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUTargetingInfo@Win32kInterop@@@std@@@std@@@std@@@2@AEB_K@Z @ 0x18000A160
 * Callers:
 *     ?DoConvergedHitTestCallback@Win32kInterop@@AEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@@Z @ 0x18000B2C0 (-DoConvergedHitTestCallback@Win32kInterop@@AEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResul.c)
 *     ?DeliverToContextualProcessing@Win32kInterop@@AEAAXPEAUInputInfo@@V?$function@$$A6AXPEAVInputContext@@@Z@std@@V?$function@$$A6AXPEAUIInputTarget@@@Z@4@@Z @ 0x1800B0040 (-DeliverToContextualProcessing@Win32kInterop@@AEAAXPEAUInputInfo@@V-$function@$$A6AXPEAVInputCon.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Hash<std::_Umap_traits<unsigned __int64,Win32kInterop::TargetingInfo,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,Win32kInterop::TargetingInfo>>,0>>::lower_bound(
        _QWORD *a1,
        _QWORD *a2,
        unsigned __int8 *a3)
{
  unsigned __int64 v5; // r9
  __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // rcx
  _QWORD *v9; // r10
  __int64 v10; // r8
  _QWORD *v11; // r9
  __int64 v12; // r8
  _QWORD *i; // rax
  _QWORD *v14; // rcx

  v5 = a3[6] ^ (0x100000001B3LL
              * (a3[5] ^ (0x100000001B3LL
                        * (a3[4] ^ (0x100000001B3LL
                                  * (a3[3] ^ (0x100000001B3LL
                                            * (a3[2] ^ (0x100000001B3LL
                                                      * (a3[1] ^ (0x100000001B3LL * (*a3 ^ 0xCBF29CE484222325uLL))))))))))));
  v6 = a3[7];
  v7 = a1[6];
  v8 = a1[3];
  v9 = (_QWORD *)a1[1];
  v10 = 16 * ((0x100000001B3LL * (v6 ^ (0x100000001B3LL * v5))) & v7);
  v11 = *(_QWORD **)(v8 + v10);
  v12 = v8 + v10;
  for ( i = v11; ; i = (_QWORD *)*i )
  {
    v14 = v11 == v9 ? v9 : **(_QWORD ***)(v12 + 8);
    if ( i == v14 )
      break;
    if ( i[2] == *(_QWORD *)a3 )
    {
      *a2 = i;
      return a2;
    }
  }
  *a2 = v9;
  return a2;
}
