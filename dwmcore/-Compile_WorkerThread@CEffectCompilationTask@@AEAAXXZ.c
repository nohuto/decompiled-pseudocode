/*
 * XREFs of ?Compile_WorkerThread@CEffectCompilationTask@@AEAAXXZ @ 0x1800F8A04
 * Callers:
 *     _lambda_193e8a4e6d1693db3d1863bd3aa4b00f_::_lambda_invoker_cdecl_ @ 0x1801033D0 (_lambda_193e8a4e6d1693db3d1863bd3aa4b00f_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180044B4C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?OnTaskCompleted_AnyThread@CEffectCompilationService@@AEAAXPEAVCEffectCompilationTask@@_N@Z @ 0x1800E2FC4 (-OnTaskCompleted_AnyThread@CEffectCompilationService@@AEAAXPEAVCEffectCompilationTask@@_N@Z.c)
 *     ?InternalRelease@?$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ @ 0x1800F2FE0 (-InternalRelease@-$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0p_EventWriteTransfer @ 0x18019F364 (McTemplateU0p_EventWriteTransfer.c)
 *     ??_GCCompiledEffectCache@@QEAAPEAXI@Z @ 0x1801E3010 (--_GCCompiledEffectCache@@QEAAPEAXI@Z.c)
 *     ?GetRestrictedErrorDescription@CEffectCompilationTask@@SAJPEAPEAG@Z @ 0x1801E3110 (-GetRestrictedErrorDescription@CEffectCompilationTask@@SAJPEAPEAG@Z.c)
 */

void __fastcall CEffectCompilationTask::Compile_WorkerThread(CEffectCompilationTask *this)
{
  __int64 v2; // rcx
  int v3; // esi
  _QWORD *v4; // rax
  unsigned int v5; // edx
  _QWORD *v6; // rbx
  void (__fastcall ***v7)(_QWORD); // rcx
  CCompiledEffectCache *v8; // rcx
  CEffectCompilationService *v9; // rcx
  OLECHAR *v10; // rbp
  DWORD LastError; // ebx
  void (__fastcall ***v12)(_QWORD); // [rsp+50h] [rbp+8h] BYREF

  v12 = 0LL;
  SetRestrictedErrorInfo(0LL);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    McTemplateU0p_EventWriteTransfer(v2, &EVTDESC_COMPILE_EFFECT_Start, this);
  Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease((__int64 *)&v12);
  v3 = CompileEffectDescription(*((_QWORD *)this + 6), &v12);
  if ( v3 < 0 )
  {
    v10 = (OLECHAR *)*((_QWORD *)this + 10);
    if ( v10 )
    {
      LastError = GetLastError();
      SysFreeString(v10);
      SetLastError(LastError);
    }
    *((_QWORD *)this + 10) = 0LL;
    CEffectCompilationTask::GetRestrictedErrorDescription((unsigned __int16 **)this + 10);
  }
  else
  {
    v4 = DefaultHeap::Alloc(0x28uLL);
    v6 = v4;
    if ( v4 )
    {
      v7 = v12;
      *v4 = 0LL;
      v4[1] = 0LL;
      *((_DWORD *)v4 + 4) = 0;
      v4[3] = this;
      v4[4] = v7;
      if ( v7 )
        (**v7)(v7);
    }
    else
    {
      v6 = 0LL;
    }
    v8 = (CCompiledEffectCache *)*((_QWORD *)this + 9);
    *((_QWORD *)this + 9) = v6;
    if ( v8 )
      CCompiledEffectCache::`scalar deleting destructor'(v8, v5);
    if ( !*((_QWORD *)this + 9) )
    {
      v3 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast((__int64)v8, 0LL, 0, -2147024882, 0xB8u, 0LL);
    }
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    McTemplateU0p_EventWriteTransfer(v8, &EVTDESC_COMPILE_EFFECT_Stop, this);
  v9 = (CEffectCompilationService *)*((_QWORD *)this + 1);
  *((_DWORD *)this + 22) = v3;
  *((_DWORD *)this + 16) = (v3 >> 31) + 3;
  CEffectCompilationService::OnTaskCompleted_AnyThread(v9, this, 0);
  Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease((__int64 *)&v12);
}
