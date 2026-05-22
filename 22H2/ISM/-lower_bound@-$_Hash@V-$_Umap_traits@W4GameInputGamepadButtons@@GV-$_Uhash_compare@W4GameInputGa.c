/*
 * XREFs of ?lower_bound@?$_Hash@V?$_Umap_traits@W4GameInputGamepadButtons@@GV?$_Uhash_compare@W4GameInputGamepadButtons@@U?$hash@W4GameInputGamepadButtons@@@std@@U?$equal_to@W4GameInputGamepadButtons@@@3@@std@@V?$allocator@U?$pair@$$CBW4GameInputGamepadButtons@@G@std@@@3@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4GameInputGamepadButtons@@G@std@@@std@@@std@@@2@AEBW4GameInputGamepadButtons@@@Z @ 0x18000B790
 * Callers:
 *     ?OnTargetWithFocusChanged@InputStateManager@@UEAAJPEAUIInputTarget@@0@Z @ 0x180019070 (-OnTargetWithFocusChanged@InputStateManager@@UEAAJPEAUIInputTarget@@0@Z.c)
 *     ?GetControllerVirtualKeyMappingFor@ControllerProcessor@@SAGW4GameInputGamepadButtons@@@Z @ 0x180120BE4 (-GetControllerVirtualKeyMappingFor@ControllerProcessor@@SAGW4GameInputGamepadButtons@@@Z.c)
 *     ?SetControllerVirtualKeyMappings@ControllerProcessor@@SAJ_N@Z @ 0x180122894 (-SetControllerVirtualKeyMappings@ControllerProcessor@@SAJ_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 **__fastcall std::_Hash<std::_Umap_traits<enum GameInputGamepadButtons,unsigned short,std::_Uhash_compare<enum GameInputGamepadButtons,std::hash<enum GameInputGamepadButtons>,std::equal_to<enum GameInputGamepadButtons>>,std::allocator<std::pair<enum GameInputGamepadButtons const,unsigned short>>,0>>::lower_bound(
        __int64 a1,
        __int64 **a2,
        unsigned __int8 *a3)
{
  unsigned __int64 v4; // r8
  __int64 *v5; // r10
  unsigned __int64 v6; // r8
  __int64 *i; // rax
  __int64 v8; // rcx

  v4 = 16
     * ((0x100000001B3LL
       * (a3[3] ^ (0x100000001B3LL
                 * (a3[2] ^ (0x100000001B3LL * (a3[1] ^ (0x100000001B3LL * (*a3 ^ 0xCBF29CE484222325uLL)))))))) & qword_180209C50);
  v5 = *(__int64 **)(v4 + qword_180209C38);
  v6 = qword_180209C38 + v4;
  for ( i = v5; ; i = (__int64 *)*i )
  {
    v8 = v5 == (__int64 *)qword_180209C28 ? qword_180209C28 : **(_QWORD **)(v6 + 8);
    if ( i == (__int64 *)v8 )
      break;
    if ( *((_DWORD *)i + 4) == *(_DWORD *)a3 )
    {
      *a2 = i;
      return a2;
    }
  }
  *a2 = (__int64 *)qword_180209C28;
  return a2;
}
