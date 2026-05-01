/*
 * XREFs of ??$PositionShoulderTapStart@PEBG@ShoulderTapExperienceManagerTelemetry@@SAX$$QEAPEBG@Z @ 0x18023F2C4
 * Callers:
 *     ?PositionShoulderTap@CShoulderTapExperienceManager@@AEAAJXZ @ 0x1802401E0 (-PositionShoulderTap@CShoulderTapExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     atexit @ 0x180090184 (atexit.c)
 *     ??1Completer@?$static_lazy@VShoulderTapExperienceManagerTelemetry@@@details@wil@@QEAA@XZ @ 0x18023F928 (--1Completer@-$static_lazy@VShoulderTapExperienceManagerTelemetry@@@details@wil@@QEAA@XZ.c)
 *     ?IsEnabled@ShoulderTapExperienceManagerTelemetry@@SA_NE_K@Z @ 0x18023FE08 (-IsEnabled@ShoulderTapExperienceManagerTelemetry@@SA_NE_K@Z.c)
 *     ?PositionShoulderTapStart_@ShoulderTapExperienceManagerTelemetry@@QEAAXPEBG@Z @ 0x180240770 (-PositionShoulderTapStart_@ShoulderTapExperienceManagerTelemetry@@QEAAXPEBG@Z.c)
 */

void __fastcall ShoulderTapExperienceManagerTelemetry::PositionShoulderTapStart<unsigned short const *>(
        const unsigned __int16 **a1,
        unsigned __int64 a2)
{
  ShoulderTapExperienceManagerTelemetry *v3; // rcx
  union _RTL_RUN_ONCE *v4; // [rsp+20h] [rbp-18h] BYREF
  int v5; // [rsp+28h] [rbp-10h]
  WINBOOL fPending; // [rsp+48h] [rbp+10h] BYREF
  LPVOID Context; // [rsp+50h] [rbp+18h] BYREF

  if ( ShoulderTapExperienceManagerTelemetry::IsEnabled((unsigned __int8)a1, a2) )
  {
    Context = 0LL;
    if ( InitOnceBeginInitialize(
           &`ShoulderTapExperienceManagerTelemetry::Instance'::`2'::wrapper,
           0,
           &fPending,
           &Context) )
    {
      if ( fPending )
      {
        v4 = &`ShoulderTapExperienceManagerTelemetry::Instance'::`2'::wrapper;
        Context = &qword_1806517F8;
        qword_1806517F8 = (__int64)&IamTraceLogging::`vftable';
        atexit(_lambda_43b277c613f9e9ea449b850c5995e33f_::_lambda_invoker_cdecl_);
        v5 = 0;
        wil::details::static_lazy<ShoulderTapExperienceManagerTelemetry>::Completer::~Completer(&v4);
      }
    }
    ShoulderTapExperienceManagerTelemetry::PositionShoulderTapStart_(v3, *a1);
  }
}
