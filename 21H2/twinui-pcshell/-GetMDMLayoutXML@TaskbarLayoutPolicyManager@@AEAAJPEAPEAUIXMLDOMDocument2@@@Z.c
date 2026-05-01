/*
 * XREFs of ?GetMDMLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z @ 0x18020D198
 * Callers:
 *     ?CanApplyTaskbarLayout@TaskbarLayoutPolicyManager@@UEAAJW4TaskbarLayoutType@@PEAH1@Z @ 0x18020C140 (-CanApplyTaskbarLayout@TaskbarLayoutPolicyManager@@UEAAJW4TaskbarLayoutType@@PEAH1@Z.c)
 *     ?PopulateEnterpriseLayoutItems@TaskbarLayoutPolicyManager@@AEAAJAEAV?$CCoSimpleArray@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@@@@Z @ 0x18020E370 (-PopulateEnterpriseLayoutItems@TaskbarLayoutPolicyManager@@AEAAJAEAV-$CCoSimpleArray@V-$ComPtr@U.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x180080E44 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?GetMDMStartLayoutPolicy@TaskbarLayoutPolicyManager@@AEAAJAEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@@Z @ 0x18020D3A0 (-GetMDMStartLayoutPolicy@TaskbarLayoutPolicyManager@@AEAAJAEAV-$NativeString@V-$CoTaskMemPolicy@.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TaskbarLayoutPolicyManager::GetMDMLayoutXML(
        TaskbarLayoutPolicyManager *this,
        struct IXMLDOMDocument2 **a2)
{
  int MDMStartLayoutPolicy; // eax
  unsigned int v4; // ebx
  __int64 v5; // r9
  __int64 v6; // rdx
  __int64 v7; // rdi
  HRESULT v8; // eax
  __int64 v9; // r9
  __int64 v10; // rdx
  int v11; // eax
  int v12; // eax
  struct IXMLDOMDocument2 *v13; // rcx
  _QWORD v15[4]; // [rsp+30h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  TaskbarLayoutPolicyManager *v17; // [rsp+70h] [rbp+20h] BYREF
  LPVOID ppv; // [rsp+78h] [rbp+28h] BYREF

  v17 = this;
  *a2 = 0LL;
  memset(v15, 0, 24);
  MDMStartLayoutPolicy = TaskbarLayoutPolicyManager::GetMDMStartLayoutPolicy(this, v15);
  v4 = MDMStartLayoutPolicy;
  if ( MDMStartLayoutPolicy < 0 )
  {
    v5 = (unsigned int)MDMStartLayoutPolicy;
    v6 = 438LL;
LABEL_19:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
      (const char *)v5);
    goto LABEL_20;
  }
  v7 = v15[0];
  if ( !v15[0] || !*(_WORD *)v15[0] )
  {
    v4 = -2147467259;
    v5 = 2147500037LL;
    v6 = 442LL;
    goto LABEL_19;
  }
  ppv = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
  v8 = CoCreateInstance(
         &GUID_88d96a05_f192_11d4_a65f_0040963251e5,
         0LL,
         1u,
         &GUID_2933bf95_7b36_11d2_b20e_00c04f983e60,
         &ppv);
  v4 = v8;
  if ( v8 >= 0 )
  {
    v11 = (*(__int64 (__fastcall **)(LPVOID, _QWORD))(*(_QWORD *)ppv + 504LL))(ppv, 0LL);
    v4 = v11;
    if ( v11 >= 0 )
    {
      v12 = (*(__int64 (__fastcall **)(LPVOID, __int64, TaskbarLayoutPolicyManager **))(*(_QWORD *)ppv + 520LL))(
              ppv,
              v7,
              &v17);
      v4 = v12;
      if ( v12 >= 0 )
      {
        if ( (_WORD)v17 )
        {
          v13 = (struct IXMLDOMDocument2 *)ppv;
          if ( ppv )
          {
            (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 8LL))(ppv);
            v13 = (struct IXMLDOMDocument2 *)ppv;
          }
          *a2 = v13;
          v4 = 0;
          goto LABEL_17;
        }
        v4 = -2147467259;
        v9 = 2147500037LL;
        v10 = 453LL;
      }
      else
      {
        v9 = (unsigned int)v12;
        v10 = 450LL;
      }
    }
    else
    {
      v9 = (unsigned int)v11;
      v10 = 447LL;
    }
  }
  else
  {
    v9 = (unsigned int)v8;
    v10 = 446LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
    (const char *)v9);
LABEL_17:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
LABEL_20:
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v15);
  return v4;
}
