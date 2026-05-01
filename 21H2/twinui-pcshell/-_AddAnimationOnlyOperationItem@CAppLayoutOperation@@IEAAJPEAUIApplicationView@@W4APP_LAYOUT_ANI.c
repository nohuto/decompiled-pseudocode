/*
 * XREFs of ?_AddAnimationOnlyOperationItem@CAppLayoutOperation@@IEAAJPEAUIApplicationView@@W4APP_LAYOUT_ANIMATION_TYPE@@@Z @ 0x1804EE950
 * Callers:
 *     ?_GenerateOperationItemList@CAppLayoutOperation@@IEAAJXZ @ 0x1804EFD50 (-_GenerateOperationItemList@CAppLayoutOperation@@IEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006D6C0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x18015DEAC (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V-$C.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ??$Make@VCAppLayoutOperationItem@@AEAPEAUIApplicationView@@AEAPEAUAPPLICATION_VIEW_DATA@@AEAPEAU3@AEAUCAppLayoutOperationItemConstructorRects@1@AEAHAEAHAEAW4APP_LAYOUT_ANIMATION_TYPE@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCAppLayoutOperationItem@@@12@AEAPEAUIApplicationView@@AEAPEAUAPPLICATION_VIEW_DATA@@1AEAUCAppLayoutOperationItemConstructorRects@CAppLayoutOperationItem@@AEAH3AEAW4APP_LAYOUT_ANIMATION_TYPE@@@Z @ 0x1804F52BC (--$Make@VCAppLayoutOperationItem@@AEAPEAUIApplicationView@@AEAPEAUAPPLICATION_VIEW_DATA@@AEAPEAU.c)
 */

__int64 __fastcall CAppLayoutOperation::_AddAnimationOnlyOperationItem(_QWORD *a1, __int64 a2, int a3)
{
  __int64 (__fastcall ***v6)(_QWORD, GUID *, __int64 *); // rbx
  int v7; // esi
  __int64 v8; // rbx
  void *v9; // r8
  __int64 v10; // rdx
  __int64 *v11; // rdx
  __int64 v13; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v14; // [rsp+50h] [rbp-B8h] BYREF
  int v15; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v16; // [rsp+60h] [rbp-A8h] BYREF
  __int128 *v17; // [rsp+68h] [rbp-A0h] BYREF
  __int128 *v18; // [rsp+70h] [rbp-98h] BYREF
  __int64 v19; // [rsp+78h] [rbp-90h] BYREF
  __int64 (__fastcall ***v20)(_QWORD, GUID *, __int64 *); // [rsp+80h] [rbp-88h] BYREF
  _QWORD v21[4]; // [rsp+88h] [rbp-80h] BYREF
  __int128 v22; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v23; // [rsp+B8h] [rbp-50h] BYREF
  __int128 v24; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v25; // [rsp+D8h] [rbp-30h]
  __m128i v26; // [rsp+E0h] [rbp-28h]
  int v27; // [rsp+F0h] [rbp-18h]
  __int128 v28; // [rsp+F8h] [rbp-10h] BYREF
  __int64 v29; // [rsp+108h] [rbp+0h]
  __m128i si128; // [rsp+110h] [rbp+8h]
  int v31; // [rsp+120h] [rbp+18h]

  v28 = 0LL;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v29 = 0LL;
  v31 = 0;
  v24 = 0LL;
  v25 = 0LL;
  v26 = si128;
  v27 = 0;
  v14 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
  v15 = a3;
  v17 = &v24;
  LODWORD(v16) = 0;
  v18 = &v28;
  LODWORD(v13) = 0;
  v21[0] = &v22;
  v19 = a2;
  v21[1] = &v22;
  v14 = 0LL;
  v21[2] = &v23;
  v21[3] = &v23;
  Microsoft::WRL::Details::Make<CAppLayoutOperationItem,IApplicationView * &,APPLICATION_VIEW_DATA * &,APPLICATION_VIEW_DATA * &,CAppLayoutOperationItem::CAppLayoutOperationItemConstructorRects &,int &,int &,enum APP_LAYOUT_ANIMATION_TYPE &>(
    (unsigned int)&v20,
    (unsigned int)&v19,
    (unsigned int)&v18,
    (unsigned int)&v17,
    (__int64)v21,
    (__int64)&v13,
    (__int64)&v16,
    (__int64)&v15);
  v6 = v20;
  if ( v20 )
  {
    v7 = (**v20)(v20, &GUID_f1e97d9c_cb12_4e92_88d4_cfbda2f4f34e, &v14);
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v6)[2])(v6);
    if ( v7 >= 0 )
    {
      v8 = v14;
      v13 = v14;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v13);
      v10 = a1[16];
      v7 = 0;
      if ( v10 != a1[18]
        || (v7 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
                   (__int64)(a1 + 15),
                   v10 + 1,
                   v9),
            v7 >= 0) )
      {
        v11 = (__int64 *)(a1[15] + 8 * a1[16]++);
        if ( v11 )
        {
          *v11 = 0LL;
          if ( v11 != &v13 )
          {
            *v11 = v8;
            v13 = 0LL;
          }
        }
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
    }
  }
  else
  {
    v7 = -2147024882;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
  return (unsigned int)v7;
}
