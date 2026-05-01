/*
 * XREFs of ?HandleTaskListDeletedChange@CClassicWindowManager@@UEAAXPEAUHWND__@@@Z @ 0x180059750
 * Callers:
 *     <none>
 * Callees:
 *     ??$FindEx@VCClassicWindowFinderByHWND@@@?$CTSimpleFixedArray@V?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@@@@@QEBAJAEBVCClassicWindowFinderByHWND@@AEBV?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@PEA_K_K@Z @ 0x180059970 (--$FindEx@VCClassicWindowFinderByHWND@@@-$CTSimpleFixedArray@V-$ComPtr@UIClassicWindow@@@WRL@Mic.c)
 *     ?_ChangeWindowType@CClassicWindowManager@@AEAA?AW4WindowChangeFlags@@PEAUIClassicWindow@@W42@@Z @ 0x18005A5A4 (-_ChangeWindowType@CClassicWindowManager@@AEAA-AW4WindowChangeFlags@@PEAUIClassicWindow@@W42@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18006C104 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CClassicWindowManager::HandleTaskListDeletedChange(CClassicWindowManager *this, HWND a2)
{
  char *v4; // rsi
  _QWORD *v5; // r14
  unsigned int PropW; // eax
  __int64 v7; // [rsp+60h] [rbp+30h] BYREF
  __int64 v8; // [rsp+68h] [rbp+38h] BYREF
  HWND v9; // [rsp+70h] [rbp+40h] BYREF
  __int64 v10; // [rsp+78h] [rbp+48h] BYREF

  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v7 = 0LL;
  v4 = (char *)this - 112;
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v7);
  v7 = 0LL;
  v9 = a2;
  v5 = (_QWORD *)((char *)this + 80);
  v8 = 0LL;
  LODWORD(this) = CTSimpleFixedArray<Microsoft::WRL::ComPtr<IClassicWindow>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IClassicWindow>>>::FindEx<CClassicWindowFinderByHWND>(
                    (int)this + 80,
                    (unsigned int)&v9,
                    (unsigned int)&v8,
                    (unsigned int)&v10);
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v8);
  if ( (int)this >= 0
    && (***(int (__fastcall ****)(_QWORD, GUID *, __int64 *))(*v5 + 8 * v10))(
         *(_QWORD *)(*v5 + 8 * v10),
         &GUID_71dafe9a_4f1f_4a1b_b6ed_fd273bc0ffee,
         &v7) >= 0 )
  {
    PropW = (unsigned int)GetPropW(a2, L"ITaskList_Deleted");
    CClassicWindowManager::_ChangeWindowType(v4, v7, PropW != 0 ? 512 : 1024);
  }
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v7);
}
