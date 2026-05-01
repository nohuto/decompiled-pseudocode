/*
 * XREFs of ?GetApplicationByWindow@CApplicationManager@@UEAAJPEAUHWND__@@PEAPEAUIImmersiveApplication@@@Z @ 0x180045E90
 * Callers:
 *     <none>
 * Callees:
 *     ??$FindEx@VCImmersiveAppFinderByHwnd@@@?$CTSimpleFixedArray@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@@@QEBAJAEBVCImmersiveAppFinderByHwnd@@AEBV?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@PEA_K_K@Z @ 0x180043CE0 (--$FindEx@VCImmersiveAppFinderByHwnd@@@-$CTSimpleFixedArray@V-$ComPtr@UIImmersiveApplicationInte.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CApplicationManager::GetApplicationByWindow(
        CApplicationManager *this,
        __int64 a2,
        struct IImmersiveApplication **a3)
{
  RTL_SRWLOCK *v6; // rbx
  int v7; // edi
  __int64 (__fastcall ***v8)(_QWORD, GUID *, _QWORD); // rcx
  __int64 (__fastcall ***v9)(_QWORD, GUID *, struct IImmersiveApplication **); // rcx
  __int64 v11; // [rsp+20h] [rbp-20h]
  __int64 v12; // [rsp+30h] [rbp-10h] BYREF
  int v13; // [rsp+38h] [rbp-8h]
  __int64 (__fastcall ***v14)(_QWORD, GUID *, struct IImmersiveApplication **); // [rsp+70h] [rbp+30h] BYREF
  __int64 v15; // [rsp+78h] [rbp+38h] BYREF
  __int64 v16; // [rsp+80h] [rbp+40h] BYREF
  PSRWLOCK v17; // [rsp+88h] [rbp+48h]

  v6 = CApplicationManagerUtility::g_pIAMGlobals;
  v17 = CApplicationManagerUtility::g_pIAMGlobals;
  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  *a3 = 0LL;
  v12 = a2;
  v13 = 2;
  v14 = 0LL;
  v15 = 0LL;
  v7 = CTSimpleFixedArray<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>>::FindEx<CImmersiveAppFinderByHwnd>(
         (_QWORD *)this + 58,
         &v12,
         &v15,
         &v16,
         v11);
  if ( v7 >= 0 )
  {
    v8 = *(__int64 (__fastcall ****)(_QWORD, GUID *, _QWORD))(*((_QWORD *)this + 58) + 8 * v16);
    v7 = (**v8)(v8, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, &v14);
  }
  if ( v7 >= 0 )
    v7 = (**v14)(v14, &GUID_8b14e88b_5663_4caf_b196_c31479262831, a3);
  v9 = v14;
  if ( v14 )
  {
    v14 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, struct IImmersiveApplication **)))(*v9)[2])(v9);
  }
  if ( v6 )
    ReleaseSRWLockShared(v6);
  return (unsigned int)v7;
}
