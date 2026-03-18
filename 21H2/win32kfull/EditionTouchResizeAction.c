/*
 * XREFs of EditionTouchResizeAction @ 0x1C02101C0
 * Callers:
 *     <none>
 * Callees:
 *     ?ExtendedBehaviorEnabled@ShellWindowManagement@@YA_NK@Z @ 0x1C010DB58 (-ExtendedBehaviorEnabled@ShellWindowManagement@@YA_NK@Z.c)
 *     ?Feature_Wmasfot__private_IsEnabledPreCheck@@YAHXZ @ 0x1C015AE04 (-Feature_Wmasfot__private_IsEnabledPreCheck@@YAHXZ.c)
 *     DwmAsyncNotifyIsInMoveSizeChange @ 0x1C027286C (DwmAsyncNotifyIsInMoveSizeChange.c)
 */

char __fastcall EditionTouchResizeAction(__int64 a1, int a2)
{
  char result; // al
  __int64 v4; // rcx
  void *v5; // rax

  Feature_Wmasfot__private_IsEnabledPreCheck();
  result = ShellWindowManagement::ExtendedBehaviorEnabled((ShellWindowManagement *)0x4000000);
  if ( result )
  {
    v5 = (void *)ReferenceDwmApiPort(v4);
    return DwmAsyncNotifyIsInMoveSizeChange(v5, a2);
  }
  return result;
}
