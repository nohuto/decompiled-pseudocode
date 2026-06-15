/*
 * XREFs of ??$_Insert_unverified@AEAU?$pair@$$CB_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@$$CB_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@@std@@@std@@@std@@@1@@Z @ 0x18003056C
 * Callers:
 *     ?RegisterAudioStateMonitor@AudioStateMonitorManager@@QEAAJPEAW4AUDIO_DIRECTION@@PEAW4_AUDIO_STREAM_CATEGORY@@PEBGPEA_K@Z @ 0x18002FEBC (-RegisterAudioStateMonitor@AudioStateMonitorManager@@QEAAJPEAW4AUDIO_DIRECTION@@PEAW4_AUDIO_STRE.c)
 *     ?_Forced_rehash@?$_Hash@V?$_Umap_traits@_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@@std@@@4@$0A@@std@@@std@@IEAAX_K@Z @ 0x180030814 (-_Forced_rehash@-$_Hash@V-$_Umap_traits@_KV-$unique_ptr@UAudioStateMonitor@@U-$default_delete@UA.c)
 * Callees:
 *     ??1?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@QEAA@XZ @ 0x180019AE8 (--1-$unique_ptr@UAudioStateMonitor@@U-$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@QEAA@X.c)
 *     ?_Check_size@?$_Hash@V?$_Umap_traits@_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@@std@@@4@$0A@@std@@@std@@IEAAXXZ @ 0x1800306E8 (-_Check_size@-$_Hash@V-$_Umap_traits@_KV-$unique_ptr@UAudioStateMonitor@@U-$default_delete@UAudi.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180039D98 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<unsigned __int64,wistd::unique_ptr<AudioStateMonitor,wistd::default_delete<AudioStateMonitor>>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,wistd::unique_ptr<AudioStateMonitor,wistd::default_delete<AudioStateMonitor>>>>,0>>::_Insert_unverified<std::pair<unsigned __int64 const,wistd::unique_ptr<AudioStateMonitor,wistd::default_delete<AudioStateMonitor>>> &,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned __int64 const,wistd::unique_ptr<AudioStateMonitor,wistd::default_delete<AudioStateMonitor>>>>>>>(
        _QWORD *a1,
        __int64 a2,
        _QWORD *a3,
        void **a4)
{
  __int64 v8; // rcx
  unsigned __int64 i; // rdx
  __int64 v10; // r8
  _QWORD *v11; // rdi
  __int64 v12; // rcx
  _QWORD *v13; // rdx
  __int64 result; // rax
  _QWORD **v15; // rax
  _QWORD *v16; // rdx
  __int64 v17; // r10
  __int64 v18; // rdx
  _QWORD *v19; // rax
  __int64 v20; // r8
  __int64 v21; // rax
  void ***v22; // rax
  void **v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rcx
  unsigned __int8 **iter; // rax
  __int64 v28; // [rsp+20h] [rbp-18h] BYREF
  __int64 v29; // [rsp+28h] [rbp-10h] BYREF

  v8 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 8; ++i )
    v8 = 0x100000001B3LL * (*((unsigned __int8 *)a3 + i) ^ (unsigned __int64)v8);
  v10 = v8 & a1[6];
  v11 = (_QWORD *)a1[1];
  v12 = a1[3];
  v13 = *(_QWORD **)(v12 + 16 * v10);
  if ( v11 != v13 )
  {
    v11 = **(_QWORD ***)(v12 + 16 * v10 + 8);
    while ( v11 != v13 )
    {
      v11 = (_QWORD *)v11[1];
      if ( *a3 == v11[2] )
      {
        *(_QWORD *)a4[1] = *a4;
        *((_QWORD *)*a4 + 1) = a4[1];
        --a1[2];
        wistd::unique_ptr<AudioStateMonitor,wistd::default_delete<AudioStateMonitor>>::~unique_ptr<AudioStateMonitor,wistd::default_delete<AudioStateMonitor>>(a4 + 3);
        operator delete(a4, (const struct std::nothrow_t *)0x20);
        *(_QWORD *)a2 = v11;
        *(_BYTE *)(a2 + 8) = 0;
        return a2;
      }
    }
  }
  v15 = (_QWORD **)*a4;
  if ( v11 != *a4 )
  {
    *(_QWORD *)a4[1] = v15;
    *v15[1] = v11;
    *(_QWORD *)v11[1] = a4;
    v16 = (_QWORD *)v11[1];
    v11[1] = v15[1];
    v15[1] = a4[1];
    a4[1] = v16;
  }
  v17 = 2 * v10;
  v18 = a1[3];
  v19 = *(_QWORD **)(v18 + 16 * v10);
  v20 = 2 * v10;
  if ( v19 == (_QWORD *)a1[1] )
  {
    *(_QWORD *)(v18 + 8 * v20) = a4;
    v21 = a1[3];
    *(_QWORD *)(v21 + 8 * v20 + 8) = a4;
  }
  else if ( v19 == v11 )
  {
    *(_QWORD *)(v18 + 8 * v20) = a4;
  }
  else
  {
    v22 = *(void ****)(v18 + 8 * v20 + 8);
    v23 = *v22;
    *(_QWORD *)(v18 + 8 * v20 + 8) = *v22;
    if ( v23 != a4 )
    {
      v24 = a1[3];
      v25 = *(_QWORD *)(v24 + 8 * v17 + 8);
      *(_QWORD *)(v24 + 8 * v17 + 8) = *(_QWORD *)(v25 + 8);
    }
  }
  try
  {
    std::_Hash<std::_Umap_traits<unsigned __int64,wistd::unique_ptr<AudioStateMonitor,wistd::default_delete<AudioStateMonitor>>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,wistd::unique_ptr<AudioStateMonitor,wistd::default_delete<AudioStateMonitor>>>>,0>>::_Check_size();
    *(_QWORD *)a2 = a4;
    *(_BYTE *)(a2 + 8) = 1;
    result = a2;
  }
  catch ( ... )
  {
    iter = (unsigned __int8 **)std::_Hash<std::_Umap_traits<unsigned __int64,wistd::unique_ptr<AudioStateMonitor,wistd::default_delete<AudioStateMonitor>>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,wistd::unique_ptr<AudioStateMonitor,wistd::default_delete<AudioStateMonitor>>>>,0>>::_Make_iter(
                                 v26,
                                 &v28,
                                 (__int64)a4);
    std::_Hash<std::_Umap_traits<unsigned __int64,wistd::unique_ptr<AudioStateMonitor,wistd::default_delete<AudioStateMonitor>>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,wistd::unique_ptr<AudioStateMonitor,wistd::default_delete<AudioStateMonitor>>>>,0>>::erase<std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned __int64 const,wistd::unique_ptr<AudioStateMonitor,wistd::default_delete<AudioStateMonitor>>>>>>,void>(
      a1,
      &v29,
      *iter);
    throw;
  }
  return result;
}
