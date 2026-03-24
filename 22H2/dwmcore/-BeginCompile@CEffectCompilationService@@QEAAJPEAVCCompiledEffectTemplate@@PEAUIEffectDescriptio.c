/*
 * XREFs of ?BeginCompile@CEffectCompilationService@@QEAAJPEAVCCompiledEffectTemplate@@PEAUIEffectDescription@Composition@UI@Windows@@PEAPEAVCEffectCompilationTask@@@Z @ 0x1800CA844
 * Callers:
 *     ?ProcessUpdate@CCompiledEffectTemplate@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPILEDEFFECTTEMPLATE@@@Z @ 0x1800CA728 (-ProcessUpdate@CCompiledEffectTemplate@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPILEDEFFECTTEM.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x18005DBFC (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x18009F7D8 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800B8944 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ??4?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@QEAAAEAV012@PEAVCEffectCompilationTask@@@Z @ 0x1800CAB08 (--4-$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@QEAAAEAV012@PEAVCEffectCompilationTask@@@Z.c)
 *     ?TryReviveDeadTask@CEffectCompilationService@@AEAAXPEBVCEffectCompilationTask@@@Z @ 0x1800CAB64 (-TryReviveDeadTask@CEffectCompilationService@@AEAAXPEBVCEffectCompilationTask@@@Z.c)
 *     ??$emplace@AEAUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@?$_Hash@V?$_Umap_traits@UEffectDescriptionKey@@PEAVCEffectCompilationTask@@V?$_Uhash_compare@UEffectDescriptionKey@@U?$hash@UEffectDescriptionKey@@@std@@U?$equal_to@UEffectDescriptionKey@@@3@@std@@V?$allocator@U?$pair@$$CBUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@std@@@std@@@std@@@std@@_N@1@AEAUEffectDescriptionKey@@$$QEAPEAVCEffectCompilationTask@@@Z @ 0x1800CAC44 (--$emplace@AEAUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@-$_Hash@V-$_Umap_traits@UEffec.c)
 *     ?lower_bound@?$_Hash@V?$_Umap_traits@UEffectDescriptionKey@@PEAVCEffectCompilationTask@@V?$_Uhash_compare@UEffectDescriptionKey@@U?$hash@UEffectDescriptionKey@@@std@@U?$equal_to@UEffectDescriptionKey@@@3@@std@@V?$allocator@U?$pair@$$CBUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@std@@@std@@@std@@@2@AEBUEffectDescriptionKey@@@Z @ 0x1800CADE4 (-lower_bound@-$_Hash@V-$_Umap_traits@UEffectDescriptionKey@@PEAVCEffectCompilationTask@@V-$_Uhas.c)
 *     ??0CEffectCompilationTask@@AEAA@PEAVCEffectCompilationService@@PEAUIEffectDescription@Composition@UI@Windows@@@Z @ 0x1800CAF40 (--0CEffectCompilationTask@@AEAA@PEAVCEffectCompilationService@@PEAUIEffectDescription@Compositio.c)
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x1800D42F4 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@UEffectDescriptionKey@@PEAVCEffectCompilationTask@@V?$_Uhash_compare@UEffectDescriptionKey@@U?$hash@UEffectDescriptionKey@@@std@@U?$equal_to@UEffectDescriptionKey@@@3@@std@@V?$allocator@U?$pair@$$CBUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@std@@@4@$0A@@std@@@std@@QEAA_KAEBUEffectDescriptionKey@@@Z @ 0x180167E68 (-erase@-$_Hash@V-$_Umap_traits@UEffectDescriptionKey@@PEAVCEffectCompilationTask@@V_ea_180167E68.c)
 *     McTemplateU0pdsddt_EventWriteTransfer @ 0x180167FA0 (McTemplateU0pdsddt_EventWriteTransfer.c)
 *     ModuleFailFastForHRESULT @ 0x18020F8B4 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CEffectCompilationService::BeginCompile(
        CEffectCompilationService *this,
        struct CCompiledEffectTemplate *a2,
        struct Windows::UI::Composition::IEffectDescription *a3,
        struct CEffectCompilationTask **a4)
{
  __int64 v4; // rax
  char v8; // r12
  char *v9; // r15
  PTP_WORK *v10; // rbx
  __int64 v11; // rax
  unsigned int v12; // edx
  int v13; // eax
  __int64 v14; // rcx
  signed int v15; // edi
  __int64 *v16; // rsi
  unsigned int v17; // edx
  __int64 v18; // rax
  __int64 v19; // r8
  __int64 v20; // rcx
  __int64 v21; // r9
  __int64 v22; // r8
  __int64 v23; // rcx
  struct CEffectCompilationTask *v24; // rax
  PVOID *v26; // rcx
  CEffectCompilationTask *v27; // rax
  CEffectCompilationTask *v28; // rax
  __int64 v29; // rcx
  PTP_WORK ThreadpoolWork; // rax
  __int64 v31; // rcx
  int v32; // eax
  __int64 v33; // rcx
  signed int LastError; // eax
  __int64 v35; // rax
  const char *v36; // r15
  int (__fastcall *v37)(struct Windows::UI::Composition::IEffectDescription *, PVOID *); // rdi
  char v38; // di
  int v39; // eax
  __int64 v40; // rcx
  int v41; // r9d
  __int64 v42; // rcx
  int v43; // [rsp+40h] [rbp-20h] BYREF
  struct Windows::UI::Composition::IEffectDescription *v44; // [rsp+48h] [rbp-18h]
  _BYTE v45[16]; // [rsp+50h] [rbp-10h] BYREF
  void *retaddr; // [rsp+98h] [rbp+38h]
  PVOID pv; // [rsp+A0h] [rbp+40h] BYREF
  PTP_WORK *v48; // [rsp+B0h] [rbp+50h] BYREF
  struct CEffectCompilationTask **v49; // [rsp+B8h] [rbp+58h]

  v49 = a4;
  v4 = *(_QWORD *)a3;
  pv = 0LL;
  v44 = a3;
  v8 = 1;
  v9 = (char *)this + 112;
  v43 = (*(__int64 (__fastcall **)(struct Windows::UI::Composition::IEffectDescription *))(v4 + 104))(a3);
  std::_Hash<std::_Umap_traits<EffectDescriptionKey,CEffectCompilationTask *,std::_Uhash_compare<EffectDescriptionKey,std::hash<EffectDescriptionKey>,std::equal_to<EffectDescriptionKey>>,std::allocator<std::pair<EffectDescriptionKey const,CEffectCompilationTask *>>,0>>::lower_bound(
    v9,
    &v48,
    &v43);
  if ( v48 == *((PTP_WORK **)this + 15) )
  {
    v27 = (CEffectCompilationTask *)DefaultHeap::AllocClear(0x68uLL);
    if ( !v27 )
      ModuleFailFastForHRESULT(2147942414LL, retaddr);
    v28 = CEffectCompilationTask::CEffectCompilationTask(v27, this, a3);
    Microsoft::WRL::ComPtr<CEffectCompilationTask>::operator=(&pv, v28);
    v10 = (PTP_WORK *)pv;
    if ( !pv )
    {
      v15 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0, -2147024882, 0x8Au, 0LL);
      return (unsigned int)v15;
    }
    if ( CCommonRegistryData::EnableEffectCaching )
      std::_Hash<std::_Umap_traits<EffectDescriptionKey,CEffectCompilationTask *,std::_Uhash_compare<EffectDescriptionKey,std::hash<EffectDescriptionKey>,std::equal_to<EffectDescriptionKey>>,std::allocator<std::pair<EffectDescriptionKey const,CEffectCompilationTask *>>,0>>::emplace<EffectDescriptionKey &,CEffectCompilationTask *>(
        (char *)this + 112,
        v45,
        &v43,
        &pv);
    ThreadpoolWork = CreateThreadpoolWork(lambda_193e8a4e6d1693db3d1863bd3aa4b00f_::_lambda_invoker_cdecl_, v10, 0LL);
    v10[7] = ThreadpoolWork;
    if ( ThreadpoolWork )
    {
      v15 = 0;
    }
    else
    {
      LastError = GetLastError();
      v15 = LastError;
      if ( LastError > 0 )
        v15 = (unsigned __int16)LastError | 0x80070000;
    }
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v31, 0LL, 0, v15, 0x91u, 0LL);
      goto LABEL_18;
    }
    v8 = 0;
  }
  else
  {
    Microsoft::WRL::ComPtr<CEffectCompilationTask>::operator=(&pv, v48[4]);
    v10 = (PTP_WORK *)pv;
    CEffectCompilationService::TryReviveDeadTask(this, (const struct CEffectCompilationTask *)pv);
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
  {
    v35 = *(_QWORD *)a3;
    pv = 0LL;
    v36 = "null";
    v37 = *(int (__fastcall **)(struct Windows::UI::Composition::IEffectDescription *, PVOID *))(v35 + 88);
    Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease(&pv);
    if ( v37(a3, &pv) >= 0 )
      v36 = (const char *)(*(__int64 (__fastcall **)(PVOID))(*(_QWORD *)pv + 16LL))(pv);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    {
      v38 = (*(__int64 (__fastcall **)(struct Windows::UI::Composition::IEffectDescription *))(*(_QWORD *)a3 + 32LL))(a3);
      v39 = (*(__int64 (__fastcall **)(struct Windows::UI::Composition::IEffectDescription *))(*(_QWORD *)a3 + 80LL))(a3);
      v40 = *((_QWORD *)a2 + 6);
      if ( v40 )
        v41 = *(_DWORD *)(v40 + 68);
      else
        v41 = 0;
      McTemplateU0pdsddt_EventWriteTransfer(v40, v39, (_DWORD)v10, v41, (__int64)v36, v39, v38, v8);
    }
    Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease(&pv);
    v9 = (char *)this + 112;
  }
  v11 = *((unsigned int *)v10 + 10);
  pv = a2;
  v12 = v11 + 1;
  if ( (int)v11 + 1 < (unsigned int)v11 )
  {
    v15 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(2147942934LL, 0LL, 0, -2147024362, 0xB5u, 0LL);
    goto LABEL_8;
  }
  if ( v12 > *((_DWORD *)v10 + 9) )
  {
    v13 = DynArrayImpl<0>::AddMultipleAndSet((__int64)(v10 + 2), 8, 1, &pv);
    v15 = v13;
    if ( v13 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0xC0u, 0LL);
LABEL_8:
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v15, 0x7Eu, 0LL);
      MilInstrumentationCheckHR_MaybeFailFast(v42, 0LL, 0, v15, 0xAEu, 0LL);
      goto LABEL_18;
    }
    goto LABEL_9;
  }
  *((_QWORD *)v10[2] + v11) = a2;
  v15 = 0;
  *((_DWORD *)v10 + 10) = v12;
LABEL_9:
  pv = (char *)this + 32;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  v16 = (__int64 *)((char *)this + 80);
  v17 = 0;
  v18 = *((unsigned int *)this + 26);
  v19 = *((_QWORD *)this + 10);
  if ( (_DWORD)v18 )
  {
    v26 = (PVOID *)*((_QWORD *)this + 10);
    while ( v10 != *v26 )
    {
      ++v17;
      ++v26;
      if ( v17 >= (unsigned int)v18 )
        goto LABEL_10;
    }
    goto LABEL_15;
  }
LABEL_10:
  v20 = (unsigned int)(v18 + 1);
  v48 = v10;
  if ( (unsigned int)v20 < (unsigned int)v18 )
  {
    v15 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, -2147024362, 0xB5u, 0LL);
  }
  else
  {
    if ( (unsigned int)v20 <= *((_DWORD *)this + 25) )
    {
      *(_QWORD *)(v19 + 8 * v18) = v10;
      v15 = 0;
      *((_DWORD *)this + 26) = v20;
      goto LABEL_13;
    }
    v32 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 80, 8, 1, &v48);
    v15 = v32;
    if ( v32 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v33, 0LL, 0, v32, 0xC0u, 0LL);
  }
  if ( v15 >= 0 )
  {
LABEL_13:
    if ( *((_BYTE *)v10 + 92) )
    {
      v21 = *v16;
      v22 = *((unsigned int *)this + 19);
      v23 = *(_QWORD *)(*v16 + 8LL * (unsigned int)(*((_DWORD *)this + 26) - 1));
      *(_QWORD *)(v21 + 8LL * (unsigned int)(*((_DWORD *)this + 26) - 1)) = *(_QWORD *)(*v16 + 8 * v22);
      *(_QWORD *)(v21 + 8 * v22) = v23;
      ++*((_DWORD *)this + 19);
      SetEvent(*((HANDLE *)this + 3));
    }
LABEL_15:
    CGuard<CCriticalSection>::~CGuard<CCriticalSection>((struct _RTL_CRITICAL_SECTION **)&pv);
    if ( !v8 )
      SubmitThreadpoolWork(v10[7]);
    v24 = (struct CEffectCompilationTask *)v10;
    v10 = 0LL;
    *v49 = v24;
    goto LABEL_18;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v33, 0LL, 0, v15, 0xB6u, 0LL);
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>((struct _RTL_CRITICAL_SECTION **)&pv);
LABEL_18:
  if ( v15 < 0 )
  {
    if ( !v10 )
      return (unsigned int)v15;
    std::_Hash<std::_Umap_traits<EffectDescriptionKey,CEffectCompilationTask *,std::_Uhash_compare<EffectDescriptionKey,std::hash<EffectDescriptionKey>,std::equal_to<EffectDescriptionKey>>,std::allocator<std::pair<EffectDescriptionKey const,CEffectCompilationTask *>>,0>>::erase(
      v9,
      &v43);
  }
  if ( v10 )
    (*((void (__fastcall **)(PTP_WORK *))*v10 + 1))(v10);
  return (unsigned int)v15;
}
