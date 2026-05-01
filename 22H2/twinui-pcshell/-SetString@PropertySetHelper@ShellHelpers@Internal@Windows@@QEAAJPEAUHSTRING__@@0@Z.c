/*
 * XREFs of ?SetString@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@0@Z @ 0x1801A7650
 * Callers:
 *     ?NotifyAppWithTransitionType@SearchAppDesktopExperienceView@@AEAAJPEBGW4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@PEAUHSTRING__@@@Z @ 0x180010F24 (-NotifyAppWithTransitionType@SearchAppDesktopExperienceView@@AEAAJPEBGW4CortanaAppTransitionType.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::ShellHelpers::PropertySetHelper::SetString(
        Windows::Internal::ShellHelpers::PropertySetHelper *this,
        HSTRING a2,
        __int64 a3)
{
  return Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<HSTRING__ *>(this, a2, a3, a3);
}
