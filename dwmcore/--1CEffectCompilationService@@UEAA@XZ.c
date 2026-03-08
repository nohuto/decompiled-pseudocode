/*
 * XREFs of ??1CEffectCompilationService@@UEAA@XZ @ 0x1801B90C4
 * Callers:
 *     ??_GCEffectCompilationService@@UEAAPEAXI@Z @ 0x1801B9220 (--_GCEffectCompilationService@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180034BB4 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180097680 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1801B9060 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBUEffectDescriptionKey@@PEAVCEffectCompi.c)
 *     ??1?$deque@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x1801B9098 (--1-$deque@V-$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VCEffectCom.c)
 *     ?_Tidy@?$deque@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@AEAAXXZ @ 0x1801B926C (-_Tidy@-$deque@V-$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VCEffec.c)
 *     ?Cancel_RenderThread@CEffectCompilationTask@@AEAAXXZ @ 0x1801E30B4 (-Cancel_RenderThread@CEffectCompilationTask@@AEAAXXZ.c)
 */

void __fastcall CEffectCompilationService::~CEffectCompilationService(CEffectCompilationService *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // rsi
  __int64 i; // rbx
  __int64 v4; // rcx
  __int64 v5; // rcx
  struct _RTL_CRITICAL_SECTION *v6; // [rsp+30h] [rbp+8h] BYREF

  v1 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  v6 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  *(_QWORD *)this = &CEffectCompilationService::`vftable';
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  *((_BYTE *)this + 72) = 1;
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v6);
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 26); i = (unsigned int)(i + 1) )
    CEffectCompilationTask::Cancel_RenderThread(*(CEffectCompilationTask **)(*((_QWORD *)this + 10) + 8 * i));
  if ( *((_QWORD *)this + 3) )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 280LL))(*((_QWORD *)this + 2));
    CloseHandle(*((HANDLE *)this + 3));
  }
  v4 = *((_QWORD *)this + 2);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  std::deque<Microsoft::WRL::ComPtr<CEffectCompilationTask>>::_Tidy((char *)this + 176);
  std::deque<Microsoft::WRL::ComPtr<CEffectCompilationTask>>::~deque<Microsoft::WRL::ComPtr<CEffectCompilationTask>>((void **)this + 22);
  std::_Deallocate<16,0>(
    *((void **)this + 17),
    (*((_QWORD *)this + 18) - *((_QWORD *)this + 17)) & 0xFFFFFFFFFFFFFFF8uLL);
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  std::_List_node<std::pair<EffectDescriptionKey const,CEffectCompilationTask *>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<EffectDescriptionKey const,CEffectCompilationTask *>,void *>>>(
    v5,
    *((_QWORD ***)this + 15));
  std::_Deallocate<16,0>(*((void **)this + 15), 0x28uLL);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 80);
  DeleteCriticalSection(v1);
}
