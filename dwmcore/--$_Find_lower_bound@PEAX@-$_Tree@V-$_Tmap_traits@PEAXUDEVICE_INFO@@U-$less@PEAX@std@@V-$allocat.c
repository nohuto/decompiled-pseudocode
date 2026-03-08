/*
 * XREFs of ??$_Find_lower_bound@PEAX@?$_Tree@V?$_Tmap_traits@PEAXUDEVICE_INFO@@U?$less@PEAX@std@@V?$allocator@U?$pair@QEAXUDEVICE_INFO@@@std@@@3@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@QEAXUDEVICE_INFO@@@std@@PEAX@std@@@1@AEBQEAX@Z @ 0x18012980E
 * Callers:
 *     ??$_Try_emplace@AEBQEAX$$V@?$map@PEAXUDEVICE_INFO@@U?$less@PEAX@std@@V?$allocator@U?$pair@QEAXUDEVICE_INFO@@@std@@@3@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@QEAXUDEVICE_INFO@@@std@@PEAX@std@@_N@1@AEBQEAX@Z @ 0x1801A3AC0 (--$_Try_emplace@AEBQEAX$$V@-$map@PEAXUDEVICE_INFO@@U-$less@PEAX@std@@V-$allocator@U-$pair@QEAXUD.c)
 *     ?Query@CPointerDeviceCache@@SAAEBUDEVICE_INFO@@PEAX@Z @ 0x1801A3BE4 (-Query@CPointerDeviceCache@@SAAEBUDEVICE_INFO@@PEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<void *,DEVICE_INFO,std::less<void *>,std::allocator<std::pair<void * const,DEVICE_INFO>>,0>>::_Find_lower_bound<void *>(
        __int64 a1,
        __int64 a2,
        unsigned __int64 *a3)
{
  __int64 v3; // rax
  __int64 *v4; // rcx
  unsigned __int64 v5; // r8
  int v6; // eax

  v3 = CPointerDeviceCache::s_deviceCache;
  *(_DWORD *)(a2 + 8) = 0;
  *(_QWORD *)(a2 + 16) = v3;
  v4 = *(__int64 **)(v3 + 8);
  *(_QWORD *)a2 = v4;
  if ( !*((_BYTE *)v4 + 25) )
  {
    v5 = *a3;
    do
    {
      *(_QWORD *)a2 = v4;
      if ( v4[4] >= v5 )
      {
        *(_QWORD *)(a2 + 16) = v4;
        v6 = 1;
        v4 = (__int64 *)*v4;
      }
      else
      {
        v4 = (__int64 *)v4[2];
        v6 = 0;
      }
      *(_DWORD *)(a2 + 8) = v6;
    }
    while ( !*((_BYTE *)v4 + 25) );
  }
  return a2;
}
