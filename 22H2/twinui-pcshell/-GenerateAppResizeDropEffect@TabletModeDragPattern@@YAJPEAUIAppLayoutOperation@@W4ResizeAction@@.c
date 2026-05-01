/*
 * XREFs of ?GenerateAppResizeDropEffect@TabletModeDragPattern@@YAJPEAUIAppLayoutOperation@@W4ResizeAction@@PEAV?$CSimpleHashTable@PEAUIApplicationView@@PEBGV?$CDefaultHashPolicy@PEAUIApplicationView@@@@V?$CDefaultKeyCompare@PEAUIApplicationView@@@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@PEAPEAG@Z @ 0x180487F0C
 * Callers:
 *     ?UpdateUIADropEffect@AppResizeView@@AEAAJPEAUIAppLayoutOperation@@W4ResizeAction@@@Z @ 0x180483920 (-UpdateUIADropEffect@AppResizeView@@AEAAJPEAUIAppLayoutOperation@@W4ResizeAction@@@Z.c)
 * Callees:
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800133E0 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     TabletModeDragPattern::GenerateStringWithMap @ 0x180488268 (TabletModeDragPattern--GenerateStringWithMap.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall TabletModeDragPattern::GenerateAppResizeDropEffect(__int64 a1, int a2, __int64 a3, _QWORD *a4)
{
  unsigned int v7; // r14d
  int v8; // eax
  unsigned int v9; // ebx
  int v10; // edi
  int v11; // eax
  int v12; // r13d
  __int64 v13; // rbx
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rbx
  __int64 v17; // rbx
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rbx
  int StringWithMap; // eax
  int v23[2]; // [rsp+40h] [rbp-20h] BYREF
  int v24[2]; // [rsp+48h] [rbp-18h] BYREF
  __int64 v25; // [rsp+50h] [rbp-10h] BYREF
  __int64 v26; // [rsp+58h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]
  __int64 v28; // [rsp+A8h] [rbp+48h] BYREF

  *a4 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  if ( a2 < 0 )
    goto LABEL_29;
  if ( a2 <= 3 )
  {
    v10 = 2004;
    v7 = 2;
    v28 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v28);
    v11 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a1 + 48LL))(a1, &v28);
    v9 = v11;
    if ( v11 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xEC,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\dragpattern.cpp",
        (const char *)(unsigned int)v11);
LABEL_24:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v28);
      goto LABEL_30;
    }
    v12 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v28 + 80LL))(v28, 1LL);
    *(_QWORD *)v24 = 0LL;
    v13 = v28;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v24);
    v14 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, GUID *, int *))(*(_QWORD *)v13 + 104LL))(
            v13,
            0LL,
            1LL,
            &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98,
            v24);
    v9 = v14;
    if ( v14 < 0 )
    {
      v15 = 239LL;
LABEL_16:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v15,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\dragpattern.cpp",
        (const char *)(unsigned int)v14);
LABEL_23:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v24);
      goto LABEL_24;
    }
    v16 = *(_QWORD *)v24;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v25);
    v14 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v16 + 48LL))(
            v16,
            &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513,
            &v25);
    v9 = v14;
    if ( v14 < 0 )
    {
      v15 = 240LL;
      goto LABEL_16;
    }
    if ( v12 == 2 )
    {
      *(_QWORD *)v23 = 0LL;
      v17 = v28;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v23);
      v18 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, GUID *, int *))(*(_QWORD *)v17 + 104LL))(
              v17,
              1LL,
              1LL,
              &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98,
              v23);
      v9 = v18;
      if ( v18 < 0 )
      {
        v19 = 244LL;
LABEL_22:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v19,
          (__int64)"pcshell\\twinui\\tabletmode\\lib\\dragpattern.cpp",
          (const char *)(unsigned int)v18);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v23);
        goto LABEL_23;
      }
      v20 = *(_QWORD *)v23;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v26);
      v18 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v20 + 48LL))(
              v20,
              &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513,
              &v26);
      v9 = v18;
      if ( v18 < 0 )
      {
        v19 = 245LL;
        goto LABEL_22;
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v23);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v24);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v28);
    goto LABEL_27;
  }
  if ( a2 > 5 )
  {
LABEL_29:
    v9 = 0;
    goto LABEL_30;
  }
  v7 = 1;
  *(_QWORD *)v23 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v23);
  v8 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)a1 + 112LL))(a1, v23);
  v9 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xD6,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\dragpattern.cpp",
      (const char *)(unsigned int)v8);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v23);
    goto LABEL_30;
  }
  if ( *(_QWORD *)v23 )
  {
    v10 = 2003;
    Microsoft::WRL::ComPtr<IApplicationView>::operator=(&v25, (__int64 *)v23);
  }
  else
  {
    v10 = 2002;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v23);
LABEL_27:
  StringWithMap = TabletModeDragPattern::GenerateStringWithMap(v7, v25, v26, a3, v10, 0, a4);
  v9 = StringWithMap;
  if ( StringWithMap < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xFD,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\dragpattern.cpp",
      (const char *)(unsigned int)StringWithMap);
LABEL_30:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v26);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v25);
  return v9;
}
