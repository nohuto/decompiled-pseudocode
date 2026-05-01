/*
 * XREFs of ?CollapseAllViewsForApp@CAppViewManager@@UEAAJPEAUIImmersiveApplication@@@Z @ 0x1801D8500
 * Callers:
 *     <none>
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180045D28 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x180080E44 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall CAppViewManager::CollapseAllViewsForApp(CAppViewManager *this, struct IImmersiveApplication *a2)
{
  __int64 (__fastcall *v4)(struct IImmersiveApplication *, GUID **); // rbx
  int v5; // ebx
  RTL_SRWLOCK *v6; // rdi
  int (__fastcall *v7)(struct IImmersiveApplication *, GUID *, __int64 *); // rbx
  int (__fastcall ***v8)(_QWORD, _QWORD, _QWORD); // rbx
  int (__fastcall *v9)(_QWORD, GUID *, _QWORD); // rsi
  int (__fastcall ***v10)(_QWORD, _QWORD, _QWORD); // rbx
  int (__fastcall *v11)(_QWORD, GUID *, __int64 *); // rsi
  GUID *v12; // rdx
  __int64 (__fastcall *v13)(struct IImmersiveApplication *, GUID *, struct IUnknown **); // rbx
  unsigned int i; // r14d
  __int64 v15; // rbx
  __int64 (__fastcall *v16)(__int64, _QWORD, GUID *, struct IUnknown **); // rsi
  struct IUnknown *v18; // [rsp+30h] [rbp-50h] BYREF
  int (__fastcall ***v19)(_QWORD, GUID *, _QWORD); // [rsp+38h] [rbp-48h] BYREF
  int (__fastcall ***v20)(_QWORD, _QWORD, _QWORD); // [rsp+40h] [rbp-40h] BYREF
  __int64 v21; // [rsp+48h] [rbp-38h] BYREF
  _QWORD v22[2]; // [rsp+50h] [rbp-30h] BYREF
  GUID *v23; // [rsp+60h] [rbp-20h] BYREF
  __int64 v24; // [rsp+68h] [rbp-18h]
  __int64 v25; // [rsp+70h] [rbp-10h]
  unsigned int v26; // [rsp+B8h] [rbp+38h] BYREF
  __int64 v27; // [rsp+C0h] [rbp+40h] BYREF
  struct IUnknown *v28; // [rsp+C8h] [rbp+48h] BYREF

  v23 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  v4 = *(__int64 (__fastcall **)(struct IImmersiveApplication *, GUID **))(*(_QWORD *)a2 + 32LL);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v23);
  v24 = -1LL;
  v25 = -1LL;
  v5 = v4(a2, &v23);
  if ( v5 >= 0 )
  {
    v19 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v19);
    v5 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, _QWORD))this + 11))(
           *((_QWORD *)this + 11),
           &GUID_237c07c9_313b_4b5a_b98d_4f613da23e8f,
           &v19);
    if ( v5 >= 0 )
    {
      v6 = CApplicationManagerUtility::g_pIAMGlobals;
      v22[1] = CApplicationManagerUtility::g_pIAMGlobals;
      AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
      v27 = 0LL;
      v21 = 0LL;
      v20 = 0LL;
      v22[0] = 0LL;
      v7 = **(int (__fastcall ***)(struct IImmersiveApplication *, GUID *, __int64 *))a2;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
      if ( v7(a2, &GUID_b00297dd_eb90_48c8_99c0_f0b2d68213d3, &v21) < 0
        || (v8 = (int (__fastcall ***)(_QWORD, _QWORD, _QWORD))v19,
            v9 = **v19,
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v20),
            v9(v8, &GUID_af40de1b_7663_429e_9fee_6029ee6c4978, &v20) < 0)
        || (*(int (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v21 + 24LL))(v21, v22) < 0 )
      {
        v10 = (int (__fastcall ***)(_QWORD, _QWORD, _QWORD))v19;
        v11 = (int (__fastcall *)(_QWORD, GUID *, __int64 *))(*v19)[13];
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v27);
        v12 = v23;
      }
      else
      {
        v10 = v20;
        v11 = (int (__fastcall *)(_QWORD, GUID *, __int64 *))(*v20)[3];
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v27);
        v12 = (GUID *)v22[0];
      }
      v5 = v11(v10, v12, &v27);
      if ( v5 >= 0 )
      {
        v5 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v27 + 24LL))(v27, &v26);
        if ( v5 >= 0 && v26 > 1 )
        {
          v18 = 0LL;
          v13 = **(__int64 (__fastcall ***)(struct IImmersiveApplication *, GUID *, struct IUnknown **))a2;
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v18);
          v5 = v13(a2, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, &v18);
          for ( i = 0; v5 >= 0; ++i )
          {
            if ( i >= v26 )
              break;
            v28 = 0LL;
            v15 = v27;
            v16 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, struct IUnknown **))(*(_QWORD *)v27 + 32LL);
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v28);
            v5 = v16(v15, i, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, &v28);
            if ( v5 >= 0 && !(unsigned int)SHIsSameObject(v18, v28) )
              v5 = (*(__int64 (__fastcall **)(_QWORD, struct IUnknown *, struct IUnknown *, _QWORD))(**((_QWORD **)this + 11) + 104LL))(
                     *((_QWORD *)this + 11),
                     v28,
                     v18,
                     0LL);
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v28);
          }
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v18);
        }
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v20);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v27);
      if ( v6 )
        ReleaseSRWLockExclusive(v6);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v19);
  }
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v23);
  return (unsigned int)v5;
}
