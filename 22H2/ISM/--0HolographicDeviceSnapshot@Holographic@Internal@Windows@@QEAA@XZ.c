/*
 * XREFs of ??0HolographicDeviceSnapshot@Holographic@Internal@Windows@@QEAA@XZ @ 0x1800C56A4
 * Callers:
 *     ?Instance@HolographicDeviceSnapshot@Holographic@Internal@Windows@@KAAEAV1234@XZ @ 0x1800C6424 (-Instance@HolographicDeviceSnapshot@Holographic@Internal@Windows@@KAAEAV1234@XZ.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180012DA0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$?0V?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@UHolographicDisplaySnapshot@Holographic@Internal@Windows@@UCaseInsensitiveStringLess@456@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@UHolographicDisplaySnapshot@Holographic@Internal@Windows@@@std@@@2@@std@@$0A@@?$tuple@V?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@UHolographicDisplaySnapshot@Holographic@Internal@Windows@@UCaseInsensitiveStringLess@456@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@UHolographicDisplaySnapshot@Holographic@Internal@Windows@@@std@@@2@@std@@V?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@USpatialInteractionSnapshot@Holographic@Internal@Windows@@UCaseInsensitiveStringLess@456@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@USpatialInteractionSnapshot@Holographic@Internal@Windows@@@std@@@2@@2@V?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@UTrackedDeviceSnapshot@Holographic@Internal@Windows@@UCaseInsensitiveStringLess@456@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@UTrackedDeviceSnapshot@Holographic@Internal@Windows@@@std@@@2@@2@@std@@QEAA@XZ @ 0x1800C45CC (--$-0V-$map@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@UHolographicDisplay.c)
 */

// Hidden C++ exception states: #wind=4
Windows::Internal::Holographic::HolographicDeviceSnapshot *__fastcall Windows::Internal::Holographic::HolographicDeviceSnapshot::HolographicDeviceSnapshot(
        Windows::Internal::Holographic::HolographicDeviceSnapshot *this)
{
  char *v2; // rbx
  _QWORD *v3; // rax
  _QWORD *v4; // rax
  _QWORD *v5; // rax
  _QWORD *v6; // rax

  *(_QWORD *)this = 0LL;
  v2 = (char *)this + 8;
  ____0V__map_V__basic_string__WU__char_traits__W_std__V__allocator__W_2__std__UHolographicDisplaySnapshot_Holographic_Internal_Windows__UCaseInsensitiveStringLess_456_V__allocator_U__pair___CBV__basic_string__WU__char_traits__W_std__V__allocator__W_2__std__UHolographicDisplaySnapshot_Holographic_Internal_Windows___std___2__std___0A____tuple_V__map_V__basic_string__WU__char_traits__W_std__V__allocator__W_2__std__UHolographicDisplaySnapshot_Holographic_Internal_Windows__UCaseInsensitiveStringLess_456_V__allocator_U__pair___CBV__basic_string__WU__char_traits__W_std__V__allocator__W_2__std__UHolographicDisplaySnapshot_Holographic_Internal_Windows___std___2__std__V__map_V__basic_string__WU__char_traits__W_std__V__allocator__W_2__std__USpatialInteractionSnapshot_Holographic_Internal_Windows__UCaseInsensitiveStringLess_456_V__allocator_U__pair___CBV__basic_string__WU__char_traits__W_std__V__allocator__W_2__std__USpatialInteractionSnapshot_Holographic_Internal_Windows___std___2__2_V__map_V__basic_string__WU__char_traits__W_std__V__allocator__W_2__std__UTrackedDeviceSnapshot_Holographic_Internal_Windows__UCaseInsensitiveStringLess_456_V__allocator_U__pair___CBV__basic_string__WU__char_traits__W_std__V__allocator__W_2__std__UTrackedDeviceSnapshot_Holographic_Internal_Windows___std___2__2__std__QEAA_XZ((_QWORD *)this + 1);
  *((_QWORD *)v2 + 6) = 0LL;
  *((_QWORD *)v2 + 7) = 0LL;
  v3 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x88uLL);
  *v3 = v3;
  v3[1] = v3;
  v3[2] = v3;
  *((_WORD *)v3 + 12) = 257;
  *((_QWORD *)v2 + 6) = v3;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  v4 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x50uLL);
  *v4 = v4;
  v4[1] = v4;
  v4[2] = v4;
  *((_WORD *)v4 + 12) = 257;
  *((_QWORD *)this + 9) = v4;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  v5 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x50uLL);
  *v5 = v5;
  v5[1] = v5;
  v5[2] = v5;
  *((_WORD *)v5 + 12) = 257;
  *((_QWORD *)this + 11) = v5;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  v6 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x48uLL);
  *v6 = v6;
  v6[1] = v6;
  v6[2] = v6;
  *((_WORD *)v6 + 12) = 257;
  *((_QWORD *)this + 13) = v6;
  *((_BYTE *)this + 120) = 0;
  return this;
}
