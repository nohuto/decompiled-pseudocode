/*
 * XREFs of ?GetLastError@ThreadErrorContext@wil@@QEAA_NAEAUFailureInfo@2@J@Z @ 0x180281B10
 * Callers:
 *     ?ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z @ 0x180281C20 (-ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z.c)
 * Callees:
 *     ?GetLastError@ThreadLocalData@details_abi@wil@@QEAA_NAEAUFailureInfo@3@IJ@Z @ 0x18020CFE0 (-GetLastError@ThreadLocalData@details_abi@wil@@QEAA_NAEAUFailureInfo@3@IJ@Z.c)
 */

char __fastcall wil::ThreadErrorContext::GetLastError(
        wil::ThreadErrorContext *this,
        struct wil::FailureInfo *a2,
        int a3)
{
  if ( *(_QWORD *)this )
    return wil::details_abi::ThreadLocalData::GetLastError(
             *(wil::details_abi::ThreadLocalData **)this,
             a2,
             *((_DWORD *)this + 2),
             a3);
  else
    return 0;
}
