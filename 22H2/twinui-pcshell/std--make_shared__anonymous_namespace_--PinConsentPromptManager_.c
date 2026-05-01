/*
 * XREFs of std::make_shared__anonymous_namespace_::PinConsentPromptManager_ @ 0x18013423C
 * Callers:
 *     ??0PinManager@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18013564C (--0PinManager@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180026BF4 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1800904CC (--2@YAPEAX_K@Z.c)
 *     std::_Ref_count_obj__anonymous_namespace_::PinConsentPromptManager_::_Ref_count_obj__anonymous_namespace_::PinConsentPromptManager___ @ 0x180129810 (std--_Ref_count_obj__anonymous_namespace_--PinConsentPromptManager_--_Ref_count_obj__anonymous_n.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x18020F990 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 */

__int64 __fastcall std::make_shared__anonymous_namespace_::PinConsentPromptManager_(__int64 a1)
{
  __int64 v2; // rax
  _QWORD *v3; // rcx
  __int64 v4; // rdx
  volatile signed __int32 *v5; // rbx
  std::_Ref_count_base *v7; // rax
  void *v9; // [rsp+20h] [rbp-18h]

  v9 = operator new(0x40uLL);
  v2 = std::_Ref_count_obj__anonymous_namespace_::PinConsentPromptManager_::_Ref_count_obj__anonymous_namespace_::PinConsentPromptManager___((__int64)v9);
  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = v2;
  v3 = (_QWORD *)(v2 + 16);
  *(_QWORD *)a1 = v2 + 16;
  if ( v2 != -16 )
  {
    v4 = *(_QWORD *)(v2 + 24);
    v5 = (volatile signed __int32 *)v2;
    if ( !(v4 ? *(_DWORD *)(v4 + 8) : 0) )
    {
      if ( v2 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
        v5 = *(volatile signed __int32 **)(a1 + 8);
      }
      if ( v5 )
        _InterlockedIncrement(v5 + 3);
      v7 = *(std::_Ref_count_base **)(v2 + 24);
      *v3 = v3;
      v3[1] = v5;
      if ( v7 )
        std::_Ref_count_base::_Decwref(v7);
      if ( v5 )
        std::_Ref_count_base::_Decref((std::_Ref_count_base *)v5);
    }
  }
  return a1;
}
