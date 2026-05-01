/*
 * XREFs of _WindowEventDispatcher::AppViewActivationRequested_::_1_::dtor$73 @ 0x180173C60
 * Callers:
 *     <none>
 * Callees:
 *     ??1CopyableHString@ExperienceManagerUtils@@QEAA@XZ @ 0x180073BDC (--1CopyableHString@ExperienceManagerUtils@@QEAA@XZ.c)
 */

void __fastcall WindowEventDispatcher::AppViewActivationRequested_::_1_::dtor_73(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 92) & 0x100) != 0 )
  {
    *(_DWORD *)(a2 + 92) &= ~0x100u;
    ExperienceManagerUtils::CopyableHString::~CopyableHString((HSTRING *)(a2 + 152));
  }
}
