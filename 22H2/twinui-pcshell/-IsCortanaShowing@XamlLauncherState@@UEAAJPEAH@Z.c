/*
 * XREFs of ?IsCortanaShowing@XamlLauncherState@@UEAAJPEAH@Z @ 0x1803A43A0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsCortanaVisible@XamlLauncherState@@UEAA_NXZ @ 0x180014AA0 (-IsCortanaVisible@XamlLauncherState@@UEAA_NXZ.c)
 */

__int64 __fastcall XamlLauncherState::IsCortanaShowing(XamlLauncherState *this, int *a2)
{
  BOOL v3; // ecx
  __int64 result; // rax

  v3 = XamlLauncherState::IsCortanaVisible((XamlLauncherState *)((char *)this - 8)) != 0;
  result = 0LL;
  *a2 = v3;
  return result;
}
