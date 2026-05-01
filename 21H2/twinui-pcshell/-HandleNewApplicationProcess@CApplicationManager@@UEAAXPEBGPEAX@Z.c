/*
 * XREFs of ?HandleNewApplicationProcess@CApplicationManager@@UEAAXPEBGPEAX@Z @ 0x1801BCA60
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?GetAllApplicationsByAppIDSafe@CApplicationManager@@UEAAJPEBGPEAPEAUIObjectArray@@@Z @ 0x1801BA590 (-GetAllApplicationsByAppIDSafe@CApplicationManager@@UEAAJPEBGPEAPEAUIObjectArray@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CApplicationManager::HandleNewApplicationProcess(
        CApplicationManager *this,
        const unsigned __int16 *a2,
        void *a3)
{
  struct IObjectArray *v6; // rbx
  HRESULT (__stdcall *GetAt)(IObjectArray *, UINT, const IID *const, void **); // rdi
  __int64 v8[2]; // [rsp+30h] [rbp-10h] BYREF
  int v9; // [rsp+60h] [rbp+20h] BYREF
  struct IObjectArray *v10; // [rsp+78h] [rbp+38h] BYREF

  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v10 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v10);
  if ( (int)CApplicationManager::GetAllApplicationsByAppIDSafe((CApplicationManager *)((char *)this + 96), a2, &v10) >= 0
    && ((int (__fastcall *)(struct IObjectArray *, int *))v10->lpVtbl->GetCount)(v10, &v9) >= 0
    && v9 == 1 )
  {
    v8[0] = 0LL;
    v6 = v10;
    GetAt = v10->lpVtbl->GetAt;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v8);
    if ( ((int (__fastcall *)(struct IObjectArray *, _QWORD, GUID *, __int64 *))GetAt)(
           v6,
           0LL,
           &GUID_c9301630_27da_428e_a432_0a5e49c0ffee,
           v8) >= 0 )
      (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v8[0] + 128LL))(v8[0], a3);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v8);
  }
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v10);
}
