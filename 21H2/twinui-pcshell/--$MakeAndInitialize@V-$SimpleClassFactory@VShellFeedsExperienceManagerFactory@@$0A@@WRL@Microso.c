/*
 * XREFs of ??$MakeAndInitialize@V?$SimpleClassFactory@VShellFeedsExperienceManagerFactory@@$0A@@WRL@Microsoft@@V123@$$V@Details@WRL@Microsoft@@YAJPEAPEAV?$SimpleClassFactory@VShellFeedsExperienceManagerFactory@@$0A@@12@@Z @ 0x1800AFED8
 * Callers:
 *     ??$CreateClassFactory@V?$SimpleClassFactory@VShellFeedsExperienceManagerFactory@@$0A@@WRL@Microsoft@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x1800AFD90 (--$CreateClassFactory@V-$SimpleClassFactory@VShellFeedsExperienceManagerFactory@@$0A@@WRL@Micros.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008FD64 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180096F1C (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<Microsoft::WRL::SimpleClassFactory<ShellFeedsExperienceManagerFactory,0>,Microsoft::WRL::SimpleClassFactory<ShellFeedsExperienceManagerFactory,0>,>(
        _QWORD *a1)
{
  unsigned int v1; // edi
  _DWORD *v3; // rax
  _DWORD *v4; // rbx
  void *v6; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  *a1 = 0LL;
  v3 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = v3;
  v4 = v3;
  if ( v3 )
  {
    v3[3] = 1;
    v3[5] = 4;
    *(_QWORD *)v3 = &Microsoft::WRL::SimpleClassFactory<ShellFeedsExperienceManagerFactory,0>::`vftable';
    v6 = 0LL;
    ((void (__fastcall *)(_DWORD *))*(&Microsoft::WRL::SimpleClassFactory<ShellFeedsExperienceManagerFactory,0>::`vftable'
                                    + 1))(v3);
    *a1 = v4;
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v4 + 16LL))(v4);
  }
  else
  {
    v1 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v6);
  return v1;
}
