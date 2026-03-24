/*
 * XREFs of ??$_Insert_nohint@AEAU?$pair@$$CB_KI@std@@PEAU?$_Tree_node@U?$pair@$$CB_KI@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@_KIU?$less@_K@std@@V?$allocator@U?$pair@$$CB_KI@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KI@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@$$CB_KI@1@PEAU?$_Tree_node@U?$pair@$$CB_KI@std@@PEAX@1@@Z @ 0x180151D2C
 * Callers:
 *     ??$emplace_hint@AEBUpiecewise_construct_t@std@@V?$tuple@AEB_K@2@V?$tuple@$$V@2@@?$_Tree@V?$_Tmap_traits@_KIU?$less@_K@std@@V?$allocator@U?$pair@$$CB_KI@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KI@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KI@std@@@std@@@std@@@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEB_K@1@$$QEAV?$tuple@$$V@1@@Z @ 0x180049898 (--$emplace_hint@AEBUpiecewise_construct_t@std@@V-$tuple@AEB_K@2@V-$tuple@$$V@2@@-$_Tree@V-$_Tmap.c)
 * Callees:
 *     ??$_Insert_at@AEAU?$pair@$$CB_KI@std@@PEAU?$_Tree_node@U?$pair@$$CB_KI@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@_KIU?$less@_K@std@@V?$allocator@U?$pair@$$CB_KI@std@@@2@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KI@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@$$CB_KI@std@@PEAX@1@AEAU?$pair@$$CB_KI@1@1@Z @ 0x180049960 (--$_Insert_at@AEAU-$pair@$$CB_KI@std@@PEAU-$_Tree_node@U-$pair@$$CB_KI@std@@PEAX@2@@-$_Tree@V-$_.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C8C9C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<unsigned __int64,unsigned int,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,unsigned int>>,0>>::_Insert_nohint<std::pair<unsigned __int64 const,unsigned int> &,std::_Tree_node<std::pair<unsigned __int64 const,unsigned int>,void *> *>(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4,
        void *a5)
{
  _QWORD *v7; // r9
  __int64 *v8; // rax
  _QWORD *v9; // rbx
  _QWORD *v10; // rax
  __int64 v11; // rax
  _QWORD *i; // rax
  __int64 v14; // [rsp+20h] [rbp-18h]
  __int64 v15; // [rsp+40h] [rbp+8h] BYREF

  v7 = (_QWORD *)*a1;
  LOBYTE(a3) = 1;
  v8 = *(__int64 **)(*a1 + 8);
  while ( !*((_BYTE *)v8 + 25) )
  {
    v7 = v8;
    if ( *a4 >= (unsigned __int64)v8[4] )
    {
      v8 = (__int64 *)v8[2];
      LOBYTE(a3) = 0;
    }
    else
    {
      v8 = (__int64 *)*v8;
      LOBYTE(a3) = 1;
    }
  }
  v9 = v7;
  if ( (_BYTE)a3 )
  {
    if ( v7 == *(_QWORD **)*a1 )
    {
      LOBYTE(a3) = 1;
      goto LABEL_9;
    }
    if ( *((_BYTE *)v7 + 25) )
    {
      v9 = (_QWORD *)v7[2];
    }
    else
    {
      v11 = *v7;
      if ( *(_BYTE *)(*v7 + 25LL) )
      {
        for ( i = (_QWORD *)v7[1]; !*((_BYTE *)i + 25) && v9 == (_QWORD *)*i; i = (_QWORD *)i[1] )
          v9 = i;
        if ( *((_BYTE *)v9 + 25) )
          i = v9;
        v9 = i;
      }
      else
      {
        do
        {
          v9 = (_QWORD *)v11;
          v11 = *(_QWORD *)(v11 + 16);
        }
        while ( !*(_BYTE *)(v11 + 25) );
      }
    }
  }
  if ( v9[4] >= *a4 )
  {
    std::_Deallocate<16,0>(a5, 0x30uLL);
    *(_QWORD *)a2 = v9;
    *(_BYTE *)(a2 + 8) = 0;
    return a2;
  }
LABEL_9:
  v10 = std::_Tree<std::_Tmap_traits<unsigned __int64,unsigned int,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,unsigned int>>,0>>::_Insert_at<std::pair<unsigned __int64 const,unsigned int> &,std::_Tree_node<std::pair<unsigned __int64 const,unsigned int>,void *> *>(
          a1,
          &v15,
          a3,
          v7,
          v14,
          (__int64)a5);
  *(_BYTE *)(a2 + 8) = 1;
  *(_QWORD *)a2 = *v10;
  return a2;
}
