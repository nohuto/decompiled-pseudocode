/*
 * XREFs of ??1CHolographicExclusiveMode@@MEAA@XZ @ 0x1802A801C
 * Callers:
 *     ??_ECHolographicExclusiveMode@@MEAAPEAXI@Z @ 0x1802A8060 (--_ECHolographicExclusiveMode@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?RemoveExclusiveModeProxy@CHolographicManager@@QEAAXPEAVCHolographicExclusiveMode@@@Z @ 0x1802A5EC8 (-RemoveExclusiveModeProxy@CHolographicManager@@QEAAXPEAVCHolographicExclusiveMode@@@Z.c)
 */

void __fastcall CHolographicExclusiveMode::~CHolographicExclusiveMode(CHolographicExclusiveMode *this)
{
  *(_QWORD *)this = &CHolographicExclusiveMode::`vftable'{for `CResource'};
  *((_QWORD *)this + 8) = &CHolographicExclusiveMode::`vftable'{for `IHolographicExclusiveModeManagerProxy'};
  CHolographicManager::RemoveExclusiveModeProxy(*((CHolographicManager **)this + 9), this);
  *((_QWORD *)this + 9) = 0LL;
  CResource::~CResource(this);
}
