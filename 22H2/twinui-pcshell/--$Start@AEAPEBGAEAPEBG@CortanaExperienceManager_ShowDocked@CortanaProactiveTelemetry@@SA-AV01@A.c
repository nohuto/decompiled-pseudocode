/*
 * XREFs of ??$Start@AEAPEBGAEAPEBG@CortanaExperienceManager_ShowDocked@CortanaProactiveTelemetry@@SA?AV01@AEAPEBG0@Z @ 0x18009DB7C
 * Callers:
 *     ?Show@SearchAppExperienceManager@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@@Z @ 0x180073C10 (-Show@SearchAppExperienceManager@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Shel.c)
 * Callees:
 *     ?StartActivity@CortanaExperienceManager_ShowDocked@CortanaProactiveTelemetry@@QEAAXPEBG0@Z @ 0x180074C40 (-StartActivity@CortanaExperienceManager_ShowDocked@CortanaProactiveTelemetry@@QEAAXPEBG0@Z.c)
 *     ??0?$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180074FE0 (--0-$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Par.c)
 */

CortanaProactiveTelemetry::CortanaExperienceManager_ShowDocked *__fastcall CortanaProactiveTelemetry::CortanaExperienceManager_ShowDocked::Start<unsigned short const * &,unsigned short const * &>(
        CortanaProactiveTelemetry::CortanaExperienceManager_ShowDocked *this,
        const unsigned __int16 **a2,
        const unsigned __int16 **a3)
{
  wil::ActivityBase<CortanaProactiveLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CortanaProactiveLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    this,
    (__int64)"CortanaExperienceManager_ShowDocked");
  *(_QWORD *)this = &CortanaProactiveTelemetry::CortanaExperienceManager_ShowDocked::`vftable';
  CortanaProactiveTelemetry::CortanaExperienceManager_ShowDocked::StartActivity(this, *a2, *a3);
  return this;
}
