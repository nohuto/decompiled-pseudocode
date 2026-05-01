/*
 * XREFs of ?GetAnimationTelemetryGuid@SnapAssistViewDismissalAnimationCoordinator@@UEAA?AU_GUID@@XZ @ 0x18008E380
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _GUID *__fastcall SnapAssistViewDismissalAnimationCoordinator::GetAnimationTelemetryGuid(
        SnapAssistViewDismissalAnimationCoordinator *this,
        struct _GUID *__return_ptr retstr)
{
  struct _GUID *result; // rax

  result = retstr;
  *retstr = (struct _GUID)xmmword_18056EB80;
  return result;
}
