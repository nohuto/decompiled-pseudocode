/*
 * XREFs of ??0StagingFailureInformation@details@wil@@QEAA@AEBUFailureInfo@2@AEBUDiagnosticsInfo@2@PEAX@Z @ 0x18020B7F4
 * Callers:
 *     ?ReportFeatureCaughtException@details@wil@@YAXAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@PEAX@Z @ 0x18020E854 (-ReportFeatureCaughtException@details@wil@@YAXAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@PE.c)
 *     ?ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z @ 0x180281C20 (-ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z.c)
 * Callees:
 *     memset_0 @ 0x180090978 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ??0last_error_context@wil@@QEAA@XZ @ 0x1801A8DF4 (--0last_error_context@wil@@QEAA@XZ.c)
 *     ??1last_error_context@wil@@QEAA@XZ @ 0x1801A9198 (--1last_error_context@wil@@QEAA@XZ.c)
 *     ?StringCchPrintfA@details@wil@@YAJPEAD_KPEBDZZ @ 0x1801AC560 (-StringCchPrintfA@details@wil@@YAJPEAD_KPEBDZZ.c)
 *     ?GetModuleInformationFromAddress@details@wil@@YA_NPEAXPEAIPEAD_K@Z @ 0x18020D53C (-GetModuleInformationFromAddress@details@wil@@YA_NPEAXPEAIPEAD_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
struct DiagnosticsInfo *__fastcall wil::details::StagingFailureInformation::StagingFailureInformation(
        struct DiagnosticsInfo *this,
        const struct wil::FailureInfo *a2,
        const struct DiagnosticsInfo *a3,
        void *a4)
{
  char *v7; // r9
  char *v8; // r9
  char *v9; // r9
  unsigned __int64 v11; // [rsp+20h] [rbp-18h]
  unsigned __int64 v12; // [rsp+20h] [rbp-18h]
  unsigned __int64 v13; // [rsp+20h] [rbp-18h]
  void *v14; // [rsp+58h] [rbp+20h] BYREF

  v14 = a4;
  wil::last_error_context::last_error_context((wil::last_error_context *)&v14);
  memset_0(this, 0, 0x68uLL);
  this->cost = *((_DWORD *)a2 + 1);
  LOWORD(this->flags) = *((_WORD *)a2 + 28);
  this[1] = *(struct DiagnosticsInfo *)((char *)a2 + 48);
  if ( wil::details::GetModuleInformationFromAddress(0LL, 0LL, (unsigned int *)&this[13], v7, v11) )
    this[2] = (struct DiagnosticsInfo)&this[13];
  this[3] = *(struct DiagnosticsInfo *)((char *)a2 + 120);
  if ( wil::details::GetModuleInformationFromAddress(
         *((wil::details **)a2 + 17),
         &this[4],
         (unsigned int *)&this[21],
         v8,
         v12) )
  {
    this[5] = (struct DiagnosticsInfo)&this[21];
  }
  v9 = (char *)*((_QWORD *)a2 + 2);
  if ( v9 && *(_WORD *)v9 )
  {
    wil::details::StringCchPrintfA((wil::details *)&this[37], (char *)0x60, "%ws", v9);
    this[6] = (struct DiagnosticsInfo)&this[37];
  }
  LOWORD(this[7].cost) = a3[3].cost;
  this[8] = a3[1];
  if ( wil::details::g_pfnGetModuleName )
    this[9] = (struct DiagnosticsInfo)wil::details::g_pfnGetModuleName();
  if ( wil::details::GetModuleInformationFromAddress(
         *(wil::details **)a3,
         &this[10],
         (unsigned int *)&this[29],
         v9,
         v13) )
  {
    this[11] = (struct DiagnosticsInfo)&this[29];
  }
  this[12] = a3[2];
  wil::last_error_context::~last_error_context((wil::last_error_context *)&v14);
  return this;
}
