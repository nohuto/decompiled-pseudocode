/*
 * XREFs of ?OnIdleStateChanged@CApplicationManager@@UEAAJH@Z @ 0x1801BE570
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     CActivationBasedCollection_Microsoft::WRL::ComPtr_IImmersiveApplicationInternal___::ForEach__lambda_411250802cdb3160aae0589ea22cc741___ @ 0x1801B34F4 (CActivationBasedCollection_Microsoft--WRL--ComPtr_IImmersiveApplicationInternal___-_ea_1801B34F4.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::OnIdleStateChanged(CApplicationManager *this, unsigned int a2)
{
  unsigned int v4; // edi
  int v5; // esi
  int (__fastcall ***v6)(_QWORD, GUID *, __int64 *); // rsi
  int (__fastcall *v7)(_QWORD, GUID *, __int64 *); // rbx
  int v9; // [rsp+20h] [rbp-18h] BYREF
  char *v10; // [rsp+28h] [rbp-10h]
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0;
  v5 = 2 - (a2 != 0);
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  if ( v5 != *((_DWORD *)this + 172) )
  {
    v9 = v5;
    v10 = (char *)this - 272;
    CActivationBasedCollection_Microsoft::WRL::ComPtr_IImmersiveApplicationInternal___::ForEach__lambda_411250802cdb3160aae0589ea22cc741___(
      (__int64)this + 352,
      (unsigned int *)&v9);
    *((_DWORD *)this + 172) = v5;
  }
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v11 = 0LL;
  v6 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 59);
  if ( v6 )
  {
    v7 = **v6;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
    if ( v7(v6, &GUID_985c98a3_21f6_4585_9e13_f708cb0de4f2, &v11) >= 0 )
      v4 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v11 + 24LL))(v11, a2);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
  return v4;
}
