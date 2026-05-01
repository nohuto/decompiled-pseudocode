/*
 * XREFs of ?_Dispose_@?QIDisposable@Platform@@?$Array@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@2@UE$AAAXXZ @ 0x18036598C
 * Callers:
 *     ?_Dispose_@?QIDisposable@Platform@@?$Array@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@2@WBI@E$AAAXXZ @ 0x18016ACE0 (-_Dispose_@-QIDisposable@Platform@@-$Array@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experie.c)
 *     ?_Dispose_@?QIDisposable@Platform@@?$Array@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@2@WCI@E$AAAXXZ @ 0x18016ACF0 (-_Dispose_@-QIDisposable@Platform@@-$Array@PE$AAUISwitchItemContextMenuMetadata@Swi_ea_18016ACF0.c)
 * Callees:
 *     ??1?$WriteOnlyArray@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@QE$AAA@XZ @ 0x18036C62C (--1-$WriteOnlyArray@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@Wi.c)
 */

__int64 __fastcall __Dispose___QIDisposable_Platform____Array_PE_AAUISwitchItemContextMenuMetadata_Switcher_Experiences_ComposableShell_WindowsInternal___00_2_UE_AAAXXZ(
        __int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  if ( !*(_BYTE *)(a1 + 128) )
  {
    *(_BYTE *)(a1 + 128) = 1;
    v1 = a1 + 32;
    if ( v1 )
    {
      if ( !*(_BYTE *)(v1 + 72) )
      {
        *(_BYTE *)(v1 + 72) = 1;
        return Platform::WriteOnlyArray<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata __gc *,1>::~WriteOnlyArray<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata __gc *,1>();
      }
    }
  }
  return result;
}
