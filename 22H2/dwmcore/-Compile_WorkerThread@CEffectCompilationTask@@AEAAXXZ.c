/*
 * XREFs of ?Compile_WorkerThread@CEffectCompilationTask@@AEAAXXZ @ 0x1800DA8C0
 * Callers:
 *     _lambda_193e8a4e6d1693db3d1863bd3aa4b00f_::_lambda_invoker_cdecl_ @ 0x1800E0110 (_lambda_193e8a4e6d1693db3d1863bd3aa4b00f_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ??_GCCompiledEffectCache@@QEAAPEAXI@Z @ 0x18001FF20 (--_GCCompiledEffectCache@@QEAAPEAXI@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18005A210 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?OnTaskCompleted_AnyThread@CEffectCompilationService@@AEAAXPEAVCEffectCompilationTask@@_N@Z @ 0x1800CA4D8 (-OnTaskCompleted_AnyThread@CEffectCompilationService@@AEAAXPEAVCEffectCompilationTask@@_N@Z.c)
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x1800D42F4 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0x_EventWriteTransfer @ 0x180153F28 (McTemplateU0x_EventWriteTransfer.c)
 *     ?GetRestrictedErrorDescription@CEffectCompilationTask@@SAJPEAPEAG@Z @ 0x180182B84 (-GetRestrictedErrorDescription@CEffectCompilationTask@@SAJPEAPEAG@Z.c)
 */

void __fastcall CEffectCompilationTask::Compile_WorkerThread(CEffectCompilationTask *this)
{
  __int64 v2; // rcx
  int v3; // esi
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  void (__fastcall ***v6)(_QWORD); // rcx
  CCompiledEffectCache *v7; // rcx
  CEffectCompilationService *v8; // rcx
  OLECHAR *v9; // rbp
  DWORD LastError; // ebx
  void (__fastcall ***v11)(_QWORD); // [rsp+50h] [rbp+8h] BYREF

  v11 = 0LL;
  SetRestrictedErrorInfo(0LL);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McTemplateU0x_EventWriteTransfer(v2, &EVTDESC_COMPILE_EFFECT_Start, this);
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v11);
  v3 = CompileEffectDescription(*((_QWORD *)this + 6), &v11);
  if ( v3 < 0 )
  {
    v9 = (OLECHAR *)*((_QWORD *)this + 10);
    if ( v9 )
    {
      LastError = GetLastError();
      SysFreeString(v9);
      SetLastError(LastError);
    }
    *((_QWORD *)this + 10) = 0LL;
    CEffectCompilationTask::GetRestrictedErrorDescription((unsigned __int16 **)this + 10);
  }
  else
  {
    v4 = DefaultHeap::Alloc(0x28uLL);
    v5 = v4;
    if ( v4 )
    {
      v6 = v11;
      *v4 = 0LL;
      v4[1] = 0LL;
      *((_DWORD *)v4 + 4) = 0;
      v4[3] = v6;
      if ( v6 )
        (**v6)(v6);
      v5[4] = this;
    }
    else
    {
      v5 = 0LL;
    }
    v7 = (CCompiledEffectCache *)*((_QWORD *)this + 9);
    *((_QWORD *)this + 9) = v5;
    if ( v7 )
    {
      CCompiledEffectCache::`scalar deleting destructor'(v7);
      v5 = (_QWORD *)*((_QWORD *)this + 9);
    }
    if ( !v5 )
    {
      v3 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast((__int64)v7, 0LL, 0, -2147024882, 0xB8u, 0LL);
    }
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McTemplateU0x_EventWriteTransfer(v7, &EVTDESC_COMPILE_EFFECT_Stop, this);
  v8 = (CEffectCompilationService *)*((_QWORD *)this + 1);
  *((_DWORD *)this + 22) = v3;
  *((_DWORD *)this + 16) = (v3 >> 31) + 3;
  CEffectCompilationService::OnTaskCompleted_AnyThread(v8, this, 0);
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v11);
}
