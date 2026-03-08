/*
 * XREFs of ?ProcessUpdate@CCompiledEffectTemplate@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPILEDEFFECTTEMPLATE@@@Z @ 0x1800E32E4
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?ResolveAllocation@CSharedSectionBase@@QEAAPEAX_K0@Z @ 0x1800981C8 (-ResolveAllocation@CSharedSectionBase@@QEAAPEAX_K0@Z.c)
 *     ?ShouldNotify@CNotificationResource@@IEBA_NXZ @ 0x180098AA0 (-ShouldNotify@CNotificationResource@@IEBA_NXZ.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18009EE80 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?BeginCompile@CEffectCompilationService@@QEAAJPEAVCCompiledEffectTemplate@@PEAUIEffectDescription@Composition@UI@Windows@@PEAPEAVCEffectCompilationTask@@@Z @ 0x1800E3414 (-BeginCompile@CEffectCompilationService@@QEAAJPEAVCCompiledEffectTemplate@@PEAUIEffectDescriptio.c)
 *     ?SignalCompileCompletedEvent@CCompiledEffectTemplate@@AEAAXXZ @ 0x1800EAAE0 (-SignalCompileCompletedEvent@CCompiledEffectTemplate@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetRestrictedErrorDescription@CEffectCompilationTask@@SAJPEAPEAG@Z @ 0x1801E3110 (-GetRestrictedErrorDescription@CEffectCompilationTask@@SAJPEAPEAG@Z.c)
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
  int v12; // ebx
  __int64 v13; // r14
  __int64 v14; // rax
  unsigned int v15; // edx
  int v16; // eax
  __int64 v17; // rcx
  unsigned int v18; // [rsp+20h] [rbp-30h]
  __int64 v19; // [rsp+30h] [rbp-20h]
  _QWORD v20[2]; // [rsp+40h] [rbp-10h] BYREF
  struct Windows::UI::Composition::IEffectDescription *v21; // [rsp+80h] [rbp+30h] BYREF
  BSTR bstrString; // [rsp+98h] [rbp+48h] BYREF

  v4 = this;
  v5 = 0;
  v21 = 0LL;
  if ( *((_QWORD *)this + 10) )
  {
    v8 = -2003303422;
    v18 = 34;
LABEL_12:
    v11 = v8;
    goto LABEL_17;
  }
  this = (CCompiledEffectTemplate *)CResourceTable::GetResource((__int64)a2, *((_DWORD *)a3 + 2), 0xA9u);
  if ( !this )
  {
    v8 = -2003303421;
    v18 = 42;
    goto LABEL_12;
  }
  *((_QWORD *)v4 + 9) = *((_QWORD *)a3 + 3);
  v6 = CSharedSectionBase::ResolveAllocation(this, *((unsigned int *)a3 + 3), *((unsigned int *)a3 + 4));
  if ( !v6 )
  {
    v8 = -2147024882;
    v18 = 49;
    goto LABEL_12;
  }
  SetRestrictedErrorInfo(0LL);
  v7 = DeserializeEffectDescription(v6, *((unsigned int *)a3 + 4), &v21);
  v5 = v7;
  v8 = v7;
  if ( v7 < 0 )
  {
    v18 = 55;
  }
  else
  {
    v7 = CEffectCompilationService::BeginCompile(
           *(CEffectCompilationService **)(*((_QWORD *)v4 + 2) + 248LL),
           v4,
           v21,
           (struct CEffectCompilationTask **)v4 + 10);
    v8 = v7;
    if ( v7 >= 0 )
    {
      (*(void (__fastcall **)(CCompiledEffectTemplate *, _QWORD, _QWORD))(*(_QWORD *)v4 + 72LL))(v4, 0LL, 0LL);
      v8 = 0;
      goto LABEL_7;
    }
    v18 = 58;
  }
  v11 = v7;
LABEL_17:
  MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, v11, v18, 0LL);
  CCompiledEffectTemplate::SignalCompileCompletedEvent(v4);
  if ( CNotificationResource::ShouldNotify(v4) )
  {
    v12 = -2147467259;
    v13 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v4 + 2) + 1240LL) + 40LL);
    bstrString = 0LL;
    if ( v5 < 0 )
    {
      v12 = v5;
      CEffectCompilationTask::GetRestrictedErrorDescription(&bstrString);
    }
    v14 = *((_QWORD *)v4 + 6);
    if ( v14 )
      v15 = *(_DWORD *)(v14 + 76);
    else
      v15 = 0;
    v20[0] = v15;
    v20[1] = *((unsigned int *)v4 + 16);
    LODWORD(v19) = v12;
    v16 = CoreUICallSend(v13, v20, 2LL, 8LL, 1, &unk_180339418, v19);
    v8 = v16;
    if ( v16 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x5Bu, 0LL);
    SysFreeString(bstrString);
  }
  if ( v5 < 0 )
    v8 = 0;
LABEL_7:
  v9 = v21;
  if ( v21 )
  {
    v21 = 0LL;
    (*(void (__fastcall **)(struct Windows::UI::Composition::IEffectDescription *))(*(_QWORD *)v9 + 8LL))(v9);
  }
  return v8;
}
