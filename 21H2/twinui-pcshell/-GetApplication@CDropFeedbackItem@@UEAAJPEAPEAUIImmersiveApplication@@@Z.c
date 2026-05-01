/*
 * XREFs of ?GetApplication@CDropFeedbackItem@@UEAAJPEAPEAUIImmersiveApplication@@@Z @ 0x18049A700
 * Callers:
 *     <none>
 * Callees:
 *     ?GetApplicationFromView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAPEAUIImmersiveApplication@@@Z @ 0x18004A838 (-GetApplicationFromView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAPEAUIImmersiveApplic.c)
 */

__int64 __fastcall CDropFeedbackItem::GetApplication(
        CDropFeedbackItem *this,
        struct IImmersiveApplication **a2,
        struct IImmersiveApplication **a3)
{
  __int64 result; // rax
  __int64 (__fastcall ***v4)(ApplicationViewHelpers *, GUID *, __int64 *); // rcx

  *a2 = 0LL;
  result = 2147943568LL;
  v4 = (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *))*((_QWORD *)this + 5);
  if ( v4 )
    return ApplicationViewHelpers::GetApplicationFromView(v4, (struct IApplicationView *)a2, a3);
  return result;
}
