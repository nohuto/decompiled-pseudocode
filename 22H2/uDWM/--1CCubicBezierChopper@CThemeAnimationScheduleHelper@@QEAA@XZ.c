/*
 * XREFs of ??1CCubicBezierChopper@CThemeAnimationScheduleHelper@@QEAA@XZ @ 0x1800A919C
 * Callers:
 *     ?CreateAndAddChoppedCubicBezierTransition@CThemeAnimationScheduleHelper@@QEAAJPEAUIUIAnimationStoryboard2@@PEAUIUIAnimationVariable2@@PEAUIUIAnimationTransitionLibrary2@@NPEAN3I33IMMMMPEAU__MIDL___MIDL_itf_UIAnimation_0000_0002_0003@@@Z @ 0x1800A979C (-CreateAndAddChoppedCubicBezierTransition@CThemeAnimationScheduleHelper@@QEAAJPEAUIUIAnimationSt.c)
 *     ?Release@CCubicBezierChopper@CThemeAnimationScheduleHelper@@UEAAKXZ @ 0x1800A9C60 (-Release@CCubicBezierChopper@CThemeAnimationScheduleHelper@@UEAAKXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180057EB0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CThemeAnimationScheduleHelper::CCubicBezierChopper::~CCubicBezierChopper(
        CThemeAnimationScheduleHelper::CCubicBezierChopper *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx

  *(_QWORD *)this = &CThemeAnimationScheduleHelper::CCubicBezierChopper::`vftable';
  v2 = *((_QWORD *)this + 2);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  v3 = *((_QWORD *)this + 3);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  v4 = *((_QWORD *)this + 4);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
}
