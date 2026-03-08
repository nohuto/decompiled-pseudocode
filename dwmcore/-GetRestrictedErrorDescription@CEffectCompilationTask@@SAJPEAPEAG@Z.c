/*
 * XREFs of ?GetRestrictedErrorDescription@CEffectCompilationTask@@SAJPEAPEAG@Z @ 0x1801E3110
 * Callers:
 *     ?ProcessUpdate@CCompiledEffectTemplate@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPILEDEFFECTTEMPLATE@@@Z @ 0x1800E32E4 (-ProcessUpdate@CCompiledEffectTemplate@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPILEDEFFECTTEM.c)
 *     ?Compile_WorkerThread@CEffectCompilationTask@@AEAAXXZ @ 0x1800F8A04 (-Compile_WorkerThread@CEffectCompilationTask@@AEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18001C8D4 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CEffectCompilationTask::GetRestrictedErrorDescription(unsigned __int16 **a1)
{
  int RestrictedErrorInfo; // eax
  __int64 v3; // rcx
  unsigned int v4; // edi
  __int64 v5; // rbx
  OLECHAR *v6; // rsi
  __int64 (__fastcall *v7)(__int64, BSTR *, char *, unsigned __int16 **, BSTR *); // r15
  DWORD LastError; // edi
  OLECHAR *v9; // rsi
  DWORD v10; // edi
  int v11; // eax
  __int64 v12; // rcx
  char v14; // [rsp+70h] [rbp+38h] BYREF
  BSTR bstrString; // [rsp+78h] [rbp+40h] BYREF
  BSTR v16; // [rsp+80h] [rbp+48h] BYREF
  __int64 v17; // [rsp+88h] [rbp+50h] BYREF

  *a1 = 0LL;
  v17 = 0LL;
  v16 = 0LL;
  bstrString = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v17);
  RestrictedErrorInfo = GetRestrictedErrorInfo(&v17);
  v4 = RestrictedErrorInfo;
  if ( RestrictedErrorInfo < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, RestrictedErrorInfo, 0x98u, 0LL);
  }
  else
  {
    v5 = v17;
    if ( v17 )
    {
      v6 = bstrString;
      v7 = *(__int64 (__fastcall **)(__int64, BSTR *, char *, unsigned __int16 **, BSTR *))(*(_QWORD *)v17 + 24LL);
      if ( bstrString )
      {
        LastError = GetLastError();
        SysFreeString(v6);
        SetLastError(LastError);
      }
      bstrString = 0LL;
      v9 = v16;
      if ( v16 )
      {
        v10 = GetLastError();
        SysFreeString(v9);
        SetLastError(v10);
      }
      v16 = 0LL;
      v11 = v7(v5, &v16, &v14, a1, &bstrString);
      v4 = v11;
      if ( v11 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x9Bu, 0LL);
    }
  }
  if ( bstrString )
    SysFreeString(bstrString);
  if ( v16 )
    SysFreeString(v16);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v17);
  return v4;
}
