__int64 __fastcall CEffectCompilationService::BeginCompile(
        CEffectCompilationService *this,
        struct CCompiledEffectTemplate *a2,
        struct Windows::UI::Composition::IEffectDescription *a3,
        struct CEffectCompilationTask **a4)
{
  __int64 v4; // rax
  char v8; // r12
  char *v9; // rdi
  __int64 v10; // rdx
  PVOID v11; // rbx
  __int64 v12; // rcx
  unsigned int v13; // eax
  unsigned int v14; // edx
  int v15; // esi
  signed int v16; // edi
  __int64 *v17; // r15
  unsigned int v18; // edx
  __int64 v19; // rax
  __int64 v20; // r8
  PVOID *v21; // rcx
  __int64 v22; // rcx
  int v23; // esi
  __int64 v24; // r9
  __int64 v25; // r8
  __int64 v26; // rcx
  struct CEffectCompilationTask *v27; // rax
  int v29; // eax
  __int64 v30; // rcx
  CEffectCompilationTask *v31; // rax
  CEffectCompilationTask *v32; // rax
  PTP_WORK ThreadpoolWork; // rax
  int v34; // eax
  __int64 v35; // rcx
  int v36; // r9d
  signed int LastError; // eax
  __int64 v38; // rax
  const char *v39; // r15
  int (__fastcall *v40)(struct Windows::UI::Composition::IEffectDescription *, PVOID *); // rdi
  char v41; // di
  int v42; // eax
  __int64 v43; // rcx
  int v44; // r9d
  __int64 v45; // rcx
  __int64 v46; // rcx
  unsigned int v47; // [rsp+20h] [rbp-50h]
  char *v48; // [rsp+40h] [rbp-30h]
  unsigned int v49; // [rsp+48h] [rbp-28h] BYREF
  struct Windows::UI::Composition::IEffectDescription *v50; // [rsp+50h] [rbp-20h]
  _BYTE v51[24]; // [rsp+58h] [rbp-18h] BYREF
  void *retaddr; // [rsp+A8h] [rbp+38h]
  PVOID pv; // [rsp+B0h] [rbp+40h] BYREF
  PVOID v54; // [rsp+C0h] [rbp+50h] BYREF
  struct CEffectCompilationTask **v55; // [rsp+C8h] [rbp+58h]

  v55 = a4;
  v4 = *(_QWORD *)a3;
  pv = 0LL;
  v50 = a3;
  v8 = 1;
  v9 = (char *)this + 112;
  v49 = (*(__int64 (__fastcall **)(struct Windows::UI::Composition::IEffectDescription *))(v4 + 104))(a3);
  v48 = v9;
  v10 = *(_QWORD *)(std::_Hash<std::_Umap_traits<EffectDescriptionKey,CEffectCompilationTask *,std::_Uhash_compare<EffectDescriptionKey,std::hash<EffectDescriptionKey>,std::equal_to<EffectDescriptionKey>>,std::allocator<std::pair<EffectDescriptionKey const,CEffectCompilationTask *>>,0>>::_Find_last<EffectDescriptionKey>(
                      v9,
                      v51,
                      &v49,
                      v49)
                  + 8);
  if ( !v10 )
    v10 = *((_QWORD *)this + 15);
  if ( v10 != *((_QWORD *)this + 15) )
  {
    Microsoft::WRL::ComPtr<CEffectCompilationTask>::operator=(&pv, *(_QWORD *)(v10 + 32));
    v11 = pv;
    CEffectCompilationService::TryReviveDeadTask(this, (const struct CEffectCompilationTask *)pv);
    goto LABEL_5;
  }
  v31 = (CEffectCompilationTask *)DefaultHeap::AllocClear(0x68uLL);
  if ( !v31 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  v32 = CEffectCompilationTask::CEffectCompilationTask(v31, this, a3);
  Microsoft::WRL::ComPtr<CEffectCompilationTask>::operator=(&pv, v32);
  v11 = pv;
  if ( !pv )
  {
    v16 = -2147024882;
    v47 = 143;
    goto LABEL_37;
  }
  if ( CCommonRegistryData::EnableEffectCaching )
    std::_Hash<std::_Umap_traits<EffectDescriptionKey,CEffectCompilationTask *,std::_Uhash_compare<EffectDescriptionKey,std::hash<EffectDescriptionKey>,std::equal_to<EffectDescriptionKey>>,std::allocator<std::pair<EffectDescriptionKey const,CEffectCompilationTask *>>,0>>::emplace<EffectDescriptionKey &,CEffectCompilationTask *>(
      (unsigned __int64 *)this + 14,
      (__int64)v51,
      &v49,
      &pv);
  ThreadpoolWork = CreateThreadpoolWork(lambda_193e8a4e6d1693db3d1863bd3aa4b00f_::_lambda_invoker_cdecl_, v11, 0LL);
  *((_QWORD *)v11 + 7) = ThreadpoolWork;
  if ( !ThreadpoolWork )
  {
    LastError = GetLastError();
    v16 = LastError;
    if ( LastError > 0 )
      v16 = (unsigned __int16)LastError | 0x80070000;
    if ( v16 < 0 )
    {
      v47 = 150;
LABEL_37:
      v36 = v16;
LABEL_53:
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v36, v47, 0LL);
      goto LABEL_54;
    }
  }
  v8 = 0;
LABEL_5:
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
  {
    v38 = *(_QWORD *)a3;
    pv = 0LL;
    v39 = "null";
    v40 = *(int (__fastcall **)(struct Windows::UI::Composition::IEffectDescription *, PVOID *))(v38 + 88);
    Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease(&pv);
    if ( v40(a3, &pv) >= 0 )
      v39 = (const char *)(*(__int64 (__fastcall **)(PVOID))(*(_QWORD *)pv + 16LL))(pv);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    {
      v41 = (*(__int64 (__fastcall **)(struct Windows::UI::Composition::IEffectDescription *))(*(_QWORD *)a3 + 32LL))(a3);
      v42 = (*(__int64 (__fastcall **)(struct Windows::UI::Composition::IEffectDescription *))(*(_QWORD *)a3 + 80LL))(a3);
      v43 = *((_QWORD *)a2 + 6);
      if ( v43 )
        v44 = *(_DWORD *)(v43 + 76);
      else
        v44 = 0;
      McTemplateU0pdsddt_EventWriteTransfer(v43, v42, (_DWORD)v11, v44, (__int64)v39, v42, v41, v8);
    }
    Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease(&pv);
  }
  v13 = *((_DWORD *)v11 + 10);
  pv = a2;
  v14 = v13 + 1;
  if ( v13 + 1 < v13 )
  {
    v16 = -2147024362;
    v15 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, -2147024362, 0xB5u, 0LL);
LABEL_52:
    MilInstrumentationCheckHR_MaybeFailFast(v46, 0LL, 0, v15, 0x7Eu, 0LL);
    v36 = v15;
    v47 = 179;
    goto LABEL_53;
  }
  v15 = 0;
  if ( v14 > *((_DWORD *)v11 + 9) )
  {
    v29 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v11 + 16, 8, 1, &pv);
    v15 = v29;
    v16 = v29;
    if ( v29 >= 0 )
      goto LABEL_9;
    MilInstrumentationCheckHR_MaybeFailFast(v30, 0LL, 0, v29, 0xC0u, 0LL);
    goto LABEL_52;
  }
  *(_QWORD *)(*((_QWORD *)v11 + 2) + 8LL * v13) = a2;
  *((_DWORD *)v11 + 10) = v14;
LABEL_9:
  v16 = v15;
  pv = (char *)this + 32;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  v17 = (__int64 *)((char *)this + 80);
  v18 = 0;
  v19 = *((unsigned int *)this + 26);
  v20 = *((_QWORD *)this + 10);
  if ( (_DWORD)v19 )
  {
    v21 = (PVOID *)*((_QWORD *)this + 10);
    while ( v11 != *v21 )
    {
      ++v18;
      ++v21;
      if ( v18 >= (unsigned int)v19 )
        goto LABEL_13;
    }
LABEL_18:
    CGuard<CCriticalSection>::~CGuard<CCriticalSection>((struct _RTL_CRITICAL_SECTION **)&pv);
    if ( !v8 )
      SubmitThreadpoolWork(*((PTP_WORK *)v11 + 7));
    v27 = (struct CEffectCompilationTask *)v11;
    v11 = 0LL;
    *v55 = v27;
    if ( v16 >= 0 )
      goto LABEL_21;
    goto LABEL_54;
  }
LABEL_13:
  v22 = (unsigned int)(v19 + 1);
  v54 = v11;
  if ( (unsigned int)v22 < (unsigned int)v19 )
  {
    v16 = -2147024362;
    v23 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, -2147024362, 0xB5u, 0LL);
  }
  else
  {
    v23 = 0;
    if ( (unsigned int)v22 <= *((_DWORD *)this + 25) )
    {
      *(_QWORD *)(v20 + 8 * v19) = v11;
      *((_DWORD *)this + 26) = v22;
      goto LABEL_16;
    }
    v34 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 80, 8, 1, &v54);
    v23 = v34;
    v16 = v34;
    if ( v34 >= 0 )
    {
LABEL_16:
      v16 = v23;
      if ( *((_BYTE *)v11 + 92) )
      {
        v24 = *v17;
        v25 = *((unsigned int *)this + 19);
        v26 = *(_QWORD *)(*v17 + 8LL * (unsigned int)(*((_DWORD *)this + 26) - 1));
        *(_QWORD *)(v24 + 8LL * (unsigned int)(*((_DWORD *)this + 26) - 1)) = *(_QWORD *)(*v17 + 8 * v25);
        *(_QWORD *)(v24 + 8 * v25) = v26;
        ++*((_DWORD *)this + 19);
        SetEvent(*((HANDLE *)this + 3));
      }
      goto LABEL_18;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v35, 0LL, 0, v34, 0xC0u, 0LL);
  }
  MilInstrumentationCheckHR_MaybeFailFast(v45, 0LL, 0, v23, 0xBBu, 0LL);
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>((struct _RTL_CRITICAL_SECTION **)&pv);
LABEL_54:
  if ( !v11 )
    return (unsigned int)v16;
  std::_Hash<std::_Umap_traits<EffectDescriptionKey,CEffectCompilationTask *,std::_Uhash_compare<EffectDescriptionKey,std::hash<EffectDescriptionKey>,std::equal_to<EffectDescriptionKey>>,std::allocator<std::pair<EffectDescriptionKey const,CEffectCompilationTask *>>,0>>::erase(
    v48,
    &v49);
LABEL_21:
  if ( v11 )
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)v11 + 8LL))(v11);
  return (unsigned int)v16;
}
