/*
 * XREFs of ??$make_shared@IH@std@@YA?AV?$shared_ptr@I@0@$$QEAH@Z @ 0x1803699C4
 * Callers:
 *     ??$Init@V?$vector@V?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@V?$allocator@V?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@@std@@@std@@@Details@Collections@Platform@@YAXAEAV?$shared_ptr@I@std@@AEAV?$shared_ptr@V?$vector@V?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@V?$allocator@V?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@@std@@@std@@@4@@Z @ 0x18036770C (--$Init@V-$vector@V-$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@.c)
 *     ?IncrementCounter@Details@Collections@Platform@@YAXAEAV?$shared_ptr@I@std@@@Z @ 0x180372138 (-IncrementCounter@Details@Collections@Platform@@YAXAEAV-$shared_ptr@I@std@@@Z.c)
 *     ??$Init@V?$vector@V?$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@V?$allocator@V?$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@@std@@@std@@@Details@Collections@Platform@@YAXAEAV?$shared_ptr@I@std@@AEAV?$shared_ptr@V?$vector@V?$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@V?$allocator@V?$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@@std@@@std@@@4@@Z @ 0x180385D70 (--$Init@V-$vector@V-$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableS.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1800904CC (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::make_shared<unsigned int,int>(_QWORD *a1, _DWORD *a2)
{
  _QWORD *result; // rax
  _DWORD *v5; // [rsp+30h] [rbp+8h]

  v5 = operator new(0x18uLL);
  v5[2] = 1;
  v5[3] = 1;
  *(_QWORD *)v5 = &std::_Ref_count_obj<unsigned int>::`vftable';
  v5[4] = *a2;
  a1[1] = v5;
  result = a1;
  *a1 = v5 + 4;
  return result;
}
