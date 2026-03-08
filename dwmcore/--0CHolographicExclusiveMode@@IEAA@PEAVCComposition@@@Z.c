/*
 * XREFs of ??0CHolographicExclusiveMode@@IEAA@PEAVCComposition@@@Z @ 0x1802A482C
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18009C5A4 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ?AddExclusiveModeProxy@CHolographicManager@@QEAAXPEAVCHolographicExclusiveMode@@@Z @ 0x1802A103C (-AddExclusiveModeProxy@CHolographicManager@@QEAAXPEAVCHolographicExclusiveMode@@@Z.c)
 */

CHolographicExclusiveMode *__fastcall CHolographicExclusiveMode::CHolographicExclusiveMode(
        CHolographicExclusiveMode *this,
        struct CComposition *a2)
{
  CHolographicManager *v3; // rcx

  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = a2;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *(_QWORD *)this = &CHolographicExclusiveMode::`vftable'{for `CResource'};
  *((_QWORD *)this + 8) = &CHolographicExclusiveMode::`vftable'{for `IHolographicExclusiveModeManagerProxy'};
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = -1LL;
  *((_DWORD *)this + 24) = -1;
  *((_DWORD *)this + 25) = 1065353216;
  v3 = (CHolographicManager *)*((_QWORD *)a2 + 33);
  *((_QWORD *)this + 9) = v3;
  CHolographicManager::AddExclusiveModeProxy(v3, this);
  return this;
}
