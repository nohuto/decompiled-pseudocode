/*
 * XREFs of ??$emplace_front@AEBW4GameInputGamepadButtons@@AEAG@?$list@U?$pair@$$CBW4GameInputGamepadButtons@@G@std@@V?$allocator@U?$pair@$$CBW4GameInputGamepadButtons@@G@std@@@2@@std@@QEAAAEAU?$pair@$$CBW4GameInputGamepadButtons@@G@1@AEBW4GameInputGamepadButtons@@AEAG@Z @ 0x180038030
 * Callers:
 *     ?OnTargetWithFocusChanged@InputStateManager@@UEAAJPEAUIInputTarget@@0@Z @ 0x180019070 (-OnTargetWithFocusChanged@InputStateManager@@UEAAJPEAUIInputTarget@@0@Z.c)
 *     ?SetControllerVirtualKeyMappings@ControllerProcessor@@SAJ_N@Z @ 0x180122894 (-SetControllerVirtualKeyMappings@ControllerProcessor@@SAJ_N@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180012DA0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0BI@@std@@YA_K_K@Z @ 0x180012DD0 (--$_Get_size_of_n@$0BI@@std@@YA_K_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::list<std::pair<enum GameInputGamepadButtons const,unsigned short>>::emplace_front<enum GameInputGamepadButtons const &,unsigned short &>(
        __int64 **a1,
        _DWORD *a2,
        _WORD *a3)
{
  __int64 v6; // rbx
  _QWORD *v7; // rdi
  size_t size_of; // rax
  _QWORD *v9; // rax

  v6 = **a1;
  if ( a1[1] == (__int64 *)0xAAAAAAAAAAAAAAALL )
    std::_Xlength_error("list<T> too long");
  v7 = *(_QWORD **)(v6 + 8);
  size_of = std::_Get_size_of_n<24>(1uLL);
  v9 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  *((_DWORD *)v9 + 4) = *a2;
  *((_WORD *)v9 + 10) = *a3;
  *v9 = v6;
  v9[1] = v7;
  a1[1] = (__int64 *)((char *)a1[1] + 1);
  *(_QWORD *)(v6 + 8) = v9;
  *v7 = v9;
  return **a1 + 16;
}
