/*
 * XREFs of ??0InputInfoMetadata@InfoMetadata@@QEAA@$$QEAU01@@Z @ 0x1801A46E0
 * Callers:
 *     ??$_Emplace_reallocate@AEAW4InputType@@AEAUInputInfoMetadata@InfoMetadata@@@?$vector@U?$pair@W4InputType@@UInputInfoMetadata@InfoMetadata@@@std@@V?$allocator@U?$pair@W4InputType@@UInputInfoMetadata@InfoMetadata@@@std@@@2@@std@@QEAAPEAU?$pair@W4InputType@@UInputInfoMetadata@InfoMetadata@@@1@QEAU21@AEAW4InputType@@AEAUInputInfoMetadata@InfoMetadata@@@Z @ 0x1801A41B8 (--$_Emplace_reallocate@AEAW4InputType@@AEAUInputInfoMetadata@InfoMetadata@@@-$vector@U-$pair@W4I.c)
 *     ??0InfoMetadata@@QEAA@XZ @ 0x1801A457C (--0InfoMetadata@@QEAA@XZ.c)
 * Callees:
 *     ?_Tidy@?$_Func_class@XPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@std@@IEAAXXZ @ 0x180036A54 (-_Tidy@-$_Func_class@XPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@std@@IEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     ??0?$function@$$A6AXPEAUInputInfo@@AEAV?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@0@Z@std@@QEAA@$$QEAV01@@Z @ 0x1801A450C (--0-$function@$$A6AXPEAUInputInfo@@AEAV-$unordered_set@KU-$hash@K@std@@U-$equal_to@K@2@V-$alloca.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall InfoMetadata::InputInfoMetadata::InputInfoMetadata(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx

  std::function<void (InputInfo *,std::unordered_set<unsigned long> &,InputInfo *)>::function<void (InputInfo *,std::unordered_set<unsigned long> &,InputInfo *)>(
    a1,
    a2);
  std::function<void (InputInfo *,std::unordered_set<unsigned long> &,InputInfo *)>::function<void (InputInfo *,std::unordered_set<unsigned long> &,InputInfo *)>(
    a1 + 64,
    a2 + 64);
  *(_QWORD *)(a1 + 184) = 0LL;
  v4 = *(_QWORD *)(a2 + 184);
  if ( v4 )
  {
    if ( v4 == a2 + 128 )
    {
      *(_QWORD *)(a1 + 184) = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 8LL))(v4, a1 + 128);
      std::_Func_class<void,_MIT_KEYBOARD_INPUT_MESSAGE const *>::_Tidy(a2 + 128, v5);
    }
    else
    {
      *(_QWORD *)(a1 + 184) = v4;
      *(_QWORD *)(a2 + 184) = 0LL;
    }
  }
  *(_QWORD *)(a1 + 248) = 0LL;
  v6 = *(_QWORD *)(a2 + 248);
  if ( v6 )
  {
    if ( v6 == a2 + 192 )
    {
      *(_QWORD *)(a1 + 248) = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 8LL))(v6, a1 + 192);
      std::_Func_class<void,_MIT_KEYBOARD_INPUT_MESSAGE const *>::_Tidy(a2 + 192, v7);
    }
    else
    {
      *(_QWORD *)(a1 + 248) = v6;
      *(_QWORD *)(a2 + 248) = 0LL;
    }
  }
  std::function<void (InputInfo *,std::unordered_set<unsigned long> &,InputInfo *)>::function<void (InputInfo *,std::unordered_set<unsigned long> &,InputInfo *)>(
    a1 + 256,
    a2 + 256);
  return a1;
}
