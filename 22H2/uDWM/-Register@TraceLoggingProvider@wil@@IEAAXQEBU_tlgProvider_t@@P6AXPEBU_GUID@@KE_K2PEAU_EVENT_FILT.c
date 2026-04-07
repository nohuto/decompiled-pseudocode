/*
 * XREFs of ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x180041DF8
 * Callers:
 *     ?get@?$static_lazy@VWindowFrameLogging@@@details@wil@@QEAAPEAVWindowFrameLogging@@P6AXXZ@Z @ 0x18002CC08 (-get@-$static_lazy@VWindowFrameLogging@@@details@wil@@QEAAPEAVWindowFrameLogging@@P6AXXZ@Z.c)
 *     ?get@?$static_lazy@VAnimationClockLogging@@@details@wil@@QEAAPEAVAnimationClockLogging@@P6AXXZ@Z @ 0x18002D8E4 (-get@-$static_lazy@VAnimationClockLogging@@@details@wil@@QEAAPEAVAnimationClockLogging@@P6AXXZ@Z.c)
 *     ?get@?$static_lazy@VFeatureLogging@details@wil@@@details@wil@@QEAAPEAVFeatureLogging@23@P6AXXZ@Z @ 0x180051C88 (-get@-$static_lazy@VFeatureLogging@details@wil@@@details@wil@@QEAAPEAVFeatureLogging@23@P6AXXZ@Z.c)
 *     ?get@?$static_lazy@VUDwmTrace@@@details@wil@@QEAAPEAVUDwmTrace@@P6AXXZ@Z @ 0x1800812A8 (-get@-$static_lazy@VUDwmTrace@@@details@wil@@QEAAPEAVUDwmTrace@@P6AXXZ@Z.c)
 *     ?get@?$static_lazy@VScalingCompatLogging@@@details@wil@@QEAAPEAVScalingCompatLogging@@P6AXXZ@Z @ 0x1800C1740 (-get@-$static_lazy@VScalingCompatLogging@@@details@wil@@QEAAPEAVScalingCompatLogging@@P6AXXZ@Z.c)
 * Callees:
 *     TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation @ 0x180041E34 (TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation.c)
 */

void __fastcall wil::TraceLoggingProvider::Register(
        wil::TraceLoggingProvider *this,
        const struct _tlgProvider_t *a2,
        void (*a3)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *))
{
  __int64 v4; // rax

  *((_QWORD *)this + 1) = a2;
  *((_BYTE *)this + 16) = 1;
  TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation(a2);
  v4 = *(_QWORD *)this;
  *((_DWORD *)this + 5) = 1;
  (*(void (__fastcall **)(wil::TraceLoggingProvider *))(v4 + 8))(this);
}
