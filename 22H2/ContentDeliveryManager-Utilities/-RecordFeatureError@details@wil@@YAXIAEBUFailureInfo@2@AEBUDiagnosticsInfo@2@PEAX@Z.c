/*
 * XREFs of ?RecordFeatureError@details@wil@@YAXIAEBUFailureInfo@2@AEBUDiagnosticsInfo@2@PEAX@Z @ 0x18000C2D4
 * Callers:
 *     ?ReportFeatureCaughtException@details@wil@@YAXAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@PEAX@Z @ 0x18000CA48 (-ReportFeatureCaughtException@details@wil@@YAXAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@PE.c)
 *     ?ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z @ 0x18000CB08 (-ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z.c)
 * Callees:
 *     ?StringCchPrintfA@details@wil@@YAJPEAD_KPEBDZZ @ 0x1800049B0 (-StringCchPrintfA@details@wil@@YAJPEAD_KPEBDZZ.c)
 *     __security_check_cookie @ 0x1800CF780 (__security_check_cookie.c)
 *     memset_0 @ 0x1800CFEF1 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800D0BC0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall wil::details::RecordFeatureError(
        wil::details *this,
        __int64 a2,
        const struct wil::FailureInfo *a3,
        const struct DiagnosticsInfo *a4)
{
  unsigned int v6; // esi
  DWORD LastError; // r14d
  bool (*v8)(void *, unsigned int *, char *, unsigned __int64); // r10
  char v9; // cl
  _BYTE *v10; // rax
  char v11; // cl
  _BYTE *v12; // rax
  const char *v13; // r9
  char v14; // cl
  _BYTE *v15; // rax
  void (__fastcall *v16)(_QWORD, int *); // rax
  int v17; // [rsp+40h] [rbp-C0h] BYREF
  __int16 v18; // [rsp+44h] [rbp-BCh]
  __int64 v19; // [rsp+48h] [rbp-B8h]
  _BYTE *v20; // [rsp+50h] [rbp-B0h]
  __int64 v21; // [rsp+58h] [rbp-A8h]
  int v22; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE *v23; // [rsp+68h] [rbp-98h]
  _BYTE *v24; // [rsp+70h] [rbp-90h]
  __int16 v25; // [rsp+78h] [rbp-88h]
  __int64 v26; // [rsp+80h] [rbp-80h]
  const char *ModuleName; // [rsp+88h] [rbp-78h]
  int v28; // [rsp+90h] [rbp-70h] BYREF
  _BYTE *v29; // [rsp+98h] [rbp-68h]
  __int64 v30; // [rsp+A0h] [rbp-60h]
  _BYTE v31[64]; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v32[64]; // [rsp+E8h] [rbp-18h] BYREF
  _BYTE v33[64]; // [rsp+128h] [rbp+28h] BYREF
  _BYTE v34[104]; // [rsp+168h] [rbp+68h] BYREF

  v6 = (unsigned int)this;
  LastError = GetLastError();
  memset_0(&v17, 0, 0x68uLL);
  v17 = *(_DWORD *)(a2 + 4);
  v18 = *(_WORD *)(a2 + 56);
  v19 = *(_QWORD *)(a2 + 48);
  v31[0] = 0;
  v8 = wil::details::g_pfnGetModuleInformation;
  if ( wil::details::g_pfnGetModuleInformation )
  {
    v9 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _BYTE *, __int64))wil::details::g_pfnGetModuleInformation)(
           0LL,
           0LL,
           v31,
           64LL);
    v8 = wil::details::g_pfnGetModuleInformation;
  }
  else
  {
    v9 = 0;
  }
  v10 = v31;
  if ( !v9 )
    v10 = v20;
  v20 = v10;
  v21 = *(_QWORD *)(a2 + 120);
  v32[0] = 0;
  v22 = 0;
  if ( v8 )
  {
    v11 = ((__int64 (__fastcall *)(_QWORD, int *, _BYTE *, __int64))v8)(*(_QWORD *)(a2 + 136), &v22, v32, 64LL);
    v8 = wil::details::g_pfnGetModuleInformation;
  }
  else
  {
    v11 = 0;
  }
  v12 = v32;
  if ( !v11 )
    v12 = v23;
  v23 = v12;
  v13 = *(const char **)(a2 + 16);
  if ( v13 && *(_WORD *)v13 )
  {
    wil::details::StringCchPrintfA((wil::details *)v34, (char *)0x60, "%ws", v13);
    v24 = v34;
    v8 = wil::details::g_pfnGetModuleInformation;
  }
  v25 = *((_WORD *)a3 + 12);
  v26 = *((_QWORD *)a3 + 1);
  if ( wil::details::g_pfnGetModuleName )
  {
    ModuleName = wil::details::g_pfnGetModuleName();
    v8 = wil::details::g_pfnGetModuleInformation;
  }
  v33[0] = 0;
  v28 = 0;
  if ( v8 )
    v14 = ((__int64 (__fastcall *)(_QWORD, int *, _BYTE *, __int64))v8)(*(_QWORD *)a3, &v28, v33, 64LL);
  else
    v14 = 0;
  v15 = v33;
  if ( !v14 )
    v15 = v29;
  v29 = v15;
  v30 = *((_QWORD *)a3 + 2);
  SetLastError(LastError);
  v16 = (void (__fastcall *)(_QWORD, int *))g_wil_details_internalRecordFeatureError;
  if ( g_wil_details_internalRecordFeatureError
    || (v16 = (void (__fastcall *)(_QWORD, int *))g_wil_details_apiRecordFeatureError) != 0LL )
  {
    v16(v6, &v17);
  }
}
