/*
 * XREFs of ?v_ShutdownServices@CApplicationManager@@MEAAJPEAUIProfferService@@@Z @ 0x1801C9A20
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800901A4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1?$CCoSimpleArray@URecoveredWindowForViewWrapper@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@URecoveredWindowForViewWrapper@@@@@@QEAA@XZ @ 0x180152BCC (--1-$CCoSimpleArray@URecoveredWindowForViewWrapper@@$0PPPPPPPO@V-$CSimpleArrayStandardCompareHel.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?_ShutdownServiceProviders@CApplicationManager@@AEAAXXZ @ 0x1801C9088 (-_ShutdownServiceProviders@CApplicationManager@@AEAAXXZ.c)
 */

__int64 __fastcall CApplicationManager::v_ShutdownServices(CApplicationManager *this, struct IProfferService *a2)
{
  _QWORD *v3; // rbx
  __int64 v4; // rdi
  __int64 v5; // rcx
  HWND v6; // rax
  __int64 *v7; // rdi
  unsigned __int64 v8; // rbp
  unsigned __int64 i; // rbx
  void (__fastcall ***v10)(_QWORD, __int64); // rcx

  v3 = &unk_180646F88;
  v4 = 11LL;
  do
  {
    if ( *v3 )
    {
      (*(void (__fastcall **)(_QWORD, struct IProfferService *))(*(_QWORD *)*v3 + 32LL))(*v3, a2);
      v5 = *v3;
      if ( *v3 )
      {
        *v3 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
      }
    }
    v3 += 2;
    --v4;
  }
  while ( v4 );
  CApplicationManager::_ShutdownServiceProviders((CApplicationManager *)((char *)this - 88));
  v6 = (HWND)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 83) + 24LL))(*((_QWORD *)this + 83));
  RemovePropW(v6, L"AllowConsentToStealFocus");
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 83);
  v7 = (__int64 *)*((_QWORD *)this + 89);
  if ( v7 )
  {
    v8 = v7[4];
    for ( i = 0LL; i < v8; ++i )
    {
      v10 = *(void (__fastcall ****)(_QWORD, __int64))(v7[3] + 8 * i);
      if ( v10 )
        (**v10)(v10, 1LL);
    }
    CCoSimpleArray<RecoveredWindowForViewWrapper,4294967294,CSimpleArrayStandardCompareHelper<RecoveredWindowForViewWrapper>>::~CCoSimpleArray<RecoveredWindowForViewWrapper,4294967294,CSimpleArrayStandardCompareHelper<RecoveredWindowForViewWrapper>>((__int64)(v7 + 3));
    CCoSimpleArray<RecoveredWindowForViewWrapper,4294967294,CSimpleArrayStandardCompareHelper<RecoveredWindowForViewWrapper>>::~CCoSimpleArray<RecoveredWindowForViewWrapper,4294967294,CSimpleArrayStandardCompareHelper<RecoveredWindowForViewWrapper>>((__int64)(v7 + 3));
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v7 + 1);
    operator delete(v7, (const struct std::nothrow_t *)0x40);
  }
  *((_QWORD *)this + 89) = 0LL;
  return 0LL;
}
