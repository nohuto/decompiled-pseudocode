/*
 * XREFs of _Windows::Services::TargetedContent::Internal::SetTriggerStateTransitions_::_1_::dtor$6 @ 0x1800D5FCA
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$basic_ios@GU?$char_traits@G@std@@@std@@UEAA@XZ @ 0x180036084 (--1-$basic_ios@GU-$char_traits@G@std@@@std@@UEAA@XZ.c)
 */

void __fastcall Windows::Services::TargetedContent::Internal::SetTriggerStateTransitions_::_1_::dtor_6(
        __int64 a1,
        __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 40) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 40) &= ~1u;
    std::basic_ios<unsigned short>::~basic_ios<unsigned short,std::char_traits<unsigned short>>((struct std::ios_base *)(a2 + 248));
  }
}
