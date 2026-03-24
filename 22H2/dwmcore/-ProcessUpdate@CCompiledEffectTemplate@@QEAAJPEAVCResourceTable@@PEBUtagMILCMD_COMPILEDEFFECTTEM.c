/*
 * XREFs of ?ProcessUpdate@CCompiledEffectTemplate@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPILEDEFFECTTEMPLATE@@@Z @ 0x1800CA728
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800A36DC (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?ResolveAllocation@CSharedSectionBase@@QEAAPEAX_K0@Z @ 0x18005A140 (-ResolveAllocation@CSharedSectionBase@@QEAAPEAX_K0@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ShouldNotify@CNotificationResource@@IEBA_NXZ @ 0x18006645C (-ShouldNotify@CNotificationResource@@IEBA_NXZ.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800A3484 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?SignalCompileCompletedEvent@CCompiledEffectTemplate@@AEAAXXZ @ 0x1800A98D4 (-SignalCompileCompletedEvent@CCompiledEffectTemplate@@AEAAXXZ.c)
 *     ?BeginCompile@CEffectCompilationService@@QEAAJPEAVCCompiledEffectTemplate@@PEAUIEffectDescription@Composition@UI@Windows@@PEAPEAVCEffectCompilationTask@@@Z @ 0x1800CA844 (-BeginCompile@CEffectCompilationService@@QEAAJPEAVCCompiledEffectTemplate@@PEAUIEffectDescriptio.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 *     ?GetRestrictedErrorDescription@CEffectCompilationTask@@SAJPEAPEAG@Z @ 0x180182B84 (-GetRestrictedErrorDescription@CEffectCompilationTask@@SAJPEAPEAG@Z.c)
 */

__int64 __fastcall CCompiledEffectTemplate::ProcessUpdate(
        CCompiledEffectTemplate *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_COMPILEDEFFECTTEMPLATE *a3)
{
  CCompiledEffectTemplate *v4; // rdi
  int v5; // esi
  void *v6; // r15
  int v7; // eax
  unsigned int v8; // ebx
  struct Windows::UI::Composition::IEffectDescription *v9; // rcx
  int v11; // r9d
  __int64 v12; // r14
  __int64 v13; // rax
  unsigned int v14; // edx
  int v15; // eax
  __int64 v16; // rcx
  unsigned int v17; // [rsp+20h] [rbp-30h]
  _QWORD v18[2]; // [rsp+40h] [rbp-10h] BYREF
  struct Windows::UI::Composition::IEffectDescription *v19; // [rsp+80h] [rbp+30h] BYREF
  BSTR bstrString; // [rsp+98h] [rbp+48h] BYREF

  v4 = this;
  v5 = 0;
  v19 = 0LL;
  if ( *((_QWORD *)this + 9) )
  {
    v8 = -2003303422;
    v17 = 34;
LABEL_12:
    v11 = v8;
    goto LABEL_17;
  }
  this = (CCompiledEffectTemplate *)CResourceTable::GetResource((__int64)a2, *((_DWORD *)a3 + 2), 0xA9u);
  if ( !this )
  {
    v8 = -2003303421;
    v17 = 42;
    goto LABEL_12;
  }
  *((_QWORD *)v4 + 8) = *((_QWORD *)a3 + 3);
  v6 = CSharedSectionBase::ResolveAllocation(this, *((unsigned int *)a3 + 3), *((unsigned int *)a3 + 4));
  if ( !v6 )
  {
    v8 = -2147024882;
    v17 = 49;
    goto LABEL_12;
  }
  SetRestrictedErrorInfo(0LL);
  v7 = DeserializeEffectDescription(v6, *((unsigned int *)a3 + 4), &v19);
  v5 = v7;
  v8 = v7;
  if ( v7 < 0 )
  {
    v17 = 55;
  }
  else
  {
    v7 = CEffectCompilationService::BeginCompile(
           *(CEffectCompilationService **)(*((_QWORD *)v4 + 2) + 120LL),
           v4,
           v19,
           (struct CEffectCompilationTask **)v4 + 9);
    v8 = v7;
    if ( v7 >= 0 )
    {
      (*(void (__fastcall **)(CCompiledEffectTemplate *, _QWORD, _QWORD))(*(_QWORD *)v4 + 72LL))(v4, 0LL, 0LL);
      v8 = 0;
      goto LABEL_7;
    }
    v17 = 58;
  }
  v11 = v7;
LABEL_17:
  MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, v11, v17, 0LL);
  CCompiledEffectTemplate::SignalCompileCompletedEvent(v4);
  if ( CNotificationResource::ShouldNotify(v4) )
  {
    v12 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v4 + 2) + 1080LL) + 48LL);
    bstrString = 0LL;
    if ( v5 < 0 )
      CEffectCompilationTask::GetRestrictedErrorDescription(&bstrString);
    v13 = *((_QWORD *)v4 + 6);
    if ( v13 )
      v14 = *(_DWORD *)(v13 + 68);
    else
      v14 = 0;
    v18[0] = v14;
    v18[1] = *((unsigned int *)v4 + 14);
    v15 = CoreUICallSend(v12, v18, 2LL, 5LL, 1, &unk_1802CE73D);
    v8 = v15;
    if ( v15 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x5Bu, 0LL);
    SysFreeString(bstrString);
  }
  if ( v5 < 0 )
    v8 = 0;
LABEL_7:
  v9 = v19;
  if ( v19 )
  {
    v19 = 0LL;
    (*(void (__fastcall **)(struct Windows::UI::Composition::IEffectDescription *))(*(_QWORD *)v9 + 8LL))(v9);
  }
  return v8;
}
