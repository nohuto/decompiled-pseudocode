/*
 * XREFs of ??$_Find_last@PEAUIUnknown@@@?$_Hash@V?$_Uset_traits@PEAUIUnknown@@V?$_Uhash_compare@PEAUIUnknown@@U?$hash@PEAUIUnknown@@@std@@U?$equal_to@PEAUIUnknown@@@3@@std@@V?$allocator@PEAUIUnknown@@@3@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@PEAUIUnknown@@PEAX@std@@@1@AEBQEAUIUnknown@@_K@Z @ 0x18021C960
 * Callers:
 *     ?OnChanged@CAnimationTrigger@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18001F4C0 (-OnChanged@CAnimationTrigger@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ??$emplace@AEBQEAVCBaseExpression@@@?$_Hash@V?$_Uset_traits@PEAUIUnknown@@V?$_Uhash_compare@PEAUIUnknown@@U?$hash@PEAUIUnknown@@@std@@U?$equal_to@PEAUIUnknown@@@3@@std@@V?$allocator@PEAUIUnknown@@@3@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@PEAUIUnknown@@@std@@@std@@@std@@_N@1@AEBQEAVCBaseExpression@@@Z @ 0x18021C9B8 (--$emplace@AEBQEAVCBaseExpression@@@-$_Hash@V-$_Uset_traits@PEAUIUnknown@@V-$_Uhash_compare@PEAU.c)
 *     ?erase@?$_Hash@V?$_Uset_traits@PEAUIUnknown@@V?$_Uhash_compare@PEAUIUnknown@@U?$hash@PEAUIUnknown@@@std@@U?$equal_to@PEAUIUnknown@@@3@@std@@V?$allocator@PEAUIUnknown@@@3@$0A@@std@@@std@@QEAA_KAEBQEAUIUnknown@@@Z @ 0x18021CD28 (-erase@-$_Hash@V-$_Uset_traits@PEAUIUnknown@@V-$_Uhash_compare@PEAUIUnknown@@U-$hash@PEAUIUnknow.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Hash<std::_Uset_traits<IUnknown *,std::_Uhash_compare<IUnknown *,std::hash<IUnknown *>,std::equal_to<IUnknown *>>,std::allocator<IUnknown *>,0>>::_Find_last<IUnknown *>(
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
LABEL_3:
    a2[1] = 0LL;
  }
  else
  {
    while ( *a3 != v7[2] )
    {
      if ( v7 == *(_QWORD **)(v4 + 8 * v6) )
      {
        *a2 = v7;
        goto LABEL_3;
      }
      v7 = (_QWORD *)v7[1];
    }
    *a2 = *v7;
    a2[1] = v7;
  }
  return a2;
}
