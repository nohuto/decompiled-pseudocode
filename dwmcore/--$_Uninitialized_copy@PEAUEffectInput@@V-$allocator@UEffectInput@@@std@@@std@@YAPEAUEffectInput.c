/*
 * XREFs of ??$_Uninitialized_copy@PEAUEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@YAPEAUEffectInput@@QEAU1@0PEAU1@AEAV?$allocator@UEffectInput@@@0@@Z @ 0x1800E1314
 * Callers:
 *     ?_Reallocate_exactly@?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@AEAAX_K@Z @ 0x1800E1264 (-_Reallocate_exactly@-$vector@UEffectInput@@V-$allocator@UEffectInput@@@std@@@std@@AEAAX_K@Z.c)
 *     ??$_Emplace_reallocate@$$T@?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@QEAAPEAUEffectInput@@QEAU2@$$QEA$$T@Z @ 0x18025FCFC (--$_Emplace_reallocate@$$T@-$vector@UEffectInput@@V-$allocator@UEffectInput@@@std@@@std@@QEAAPEA.c)
 * Callees:
 *     ??0EffectInput@@QEAA@AEBU0@@Z @ 0x180035AF0 (--0EffectInput@@QEAA@AEBU0@@Z.c)
 *     ??$_Destroy_range@V?$allocator@UEffectInput@@@std@@@std@@YAXPEAUEffectInput@@QEAU1@AEAV?$allocator@UEffectInput@@@0@@Z @ 0x1800E5C4C (--$_Destroy_range@V-$allocator@UEffectInput@@@std@@@std@@YAXPEAUEffectInput@@QEAU1@AEAV-$allocat.c)
 */

EffectInput *__fastcall std::_Uninitialized_copy<EffectInput *>(
        struct EffectInput *a1,
        const struct EffectInput *a2,
        EffectInput *a3)
{
  const struct EffectInput *i; // rdi

  for ( i = a1; i != a2; i = (const struct EffectInput *)((char *)i + 104) )
  {
    EffectInput::EffectInput(a3, i);
    a3 = (EffectInput *)((char *)a3 + 104);
  }
  std::_Destroy_range<std::allocator<EffectInput>>(a3, a3);
  return a3;
}
