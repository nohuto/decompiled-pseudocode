/*
 * XREFs of ?_ReplaceView@CAppLayout@@AEAAJPEAUIApplicationView@@0W4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@@Z @ 0x1804F3748
 * Callers:
 *     ?ReplaceView@CAppLayout@@UEAAJPEAUIApplicationView@@0W4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@@Z @ 0x1804F25E0 (-ReplaceView@CAppLayout@@UEAAJPEAUIApplicationView@@0W4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006D6C0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?RemoveAt@?$CTSimpleArray@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@@@@QEAAJ_K@Z @ 0x1801D5910 (-RemoveAt@-$CTSimpleArray@V-$ComPtr@UIApplicationView@@@WRL@Microsoft@@$0PPPPPPPO@V-$CTPolicyCoT.c)
 *     ??$_InsertAt@$$QEAV?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@@?$CTSimpleArray@V?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@@@@@QEAAJ$$QEAV?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@_K@Z @ 0x180411904 (--$_InsertAt@$$QEAV-$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@@-$CTSimpleArray@V-$ComPtr@UIAppLay.c)
 *     ??$FindEx@VCAppLayoutItemFinderByView@AppLayoutFinders@@@?$CTSimpleFixedArray@V?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@@@@@QEBAJAEBVCAppLayoutItemFinderByView@AppLayoutFinders@@AEBV?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@PEA_K_K@Z @ 0x1804F0430 (--$FindEx@VCAppLayoutItemFinderByView@AppLayoutFinders@@@-$CTSimpleFixedArray@V-$ComPtr@UIAppLay.c)
 *     ?_FindBufferItem@CAppLayout@@AEAAJPEAPEAUIAppLayoutItem@@PEAI@Z @ 0x1804F33A0 (-_FindBufferItem@CAppLayout@@AEAAJPEAPEAUIAppLayoutItem@@PEAI@Z.c)
 *     ?_RemoveView@CAppLayout@@AEAAJPEAUIApplicationView@@@Z @ 0x1804F36D4 (-_RemoveView@CAppLayout@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?s_CreateInstance_Buffer@CAppLayoutItem@@SAJAEBU_GUID@@PEAPEAX@Z @ 0x1804F48A8 (-s_CreateInstance_Buffer@CAppLayoutItem@@SAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?s_CreateInstance_View@CAppLayoutItem@@SAJPEAUIApplicationView@@W4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@AEBU_GUID@@PEAPEAX@Z @ 0x1804F4B30 (-s_CreateInstance_View@CAppLayoutItem@@SAJPEAUIApplicationView@@W4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS.c)
 */

__int64 __fastcall CAppLayout::_ReplaceView(__int64 *a1, __int64 a2, struct IUnknown *a3, unsigned int a4)
{
  unsigned int v7; // ebx
  int BufferItem; // edi
  __int64 v9; // rdx
  unsigned __int64 v10; // rdi
  struct IUnknown *v11; // r8
  _QWORD *v13; // r15
  __int64 v14; // rax
  int v15; // eax
  unsigned int v16; // esi
  int v17; // eax
  unsigned __int64 v18; // r9
  __int64 v19; // rdx
  int v20; // eax
  unsigned int v21[2]; // [rsp+30h] [rbp-40h] BYREF
  void *v22; // [rsp+38h] [rbp-38h] BYREF
  __int64 v23; // [rsp+40h] [rbp-30h] BYREF
  unsigned __int64 v24; // [rsp+48h] [rbp-28h] BYREF
  __int128 v25; // [rsp+50h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]

  if ( a2 )
  {
    v23 = 0LL;
    *(_QWORD *)v21 = a2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)v21);
    BufferItem = CTSimpleFixedArray<Microsoft::WRL::ComPtr<IAppLayoutItem>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IAppLayoutItem>>>::FindEx<AppLayoutFinders::CAppLayoutItemFinderByView>(
                   a1 + 13,
                   (struct IUnknown **)v21,
                   v11,
                   &v24);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v21);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
    if ( BufferItem < 0 )
    {
      v9 = 1070LL;
      goto LABEL_9;
    }
    v10 = v24;
LABEL_11:
    v13 = a1 + 13;
    v14 = a1[13];
    v25 = 0LL;
    (*(void (__fastcall **)(_QWORD, _QWORD, __int128 *))(**(_QWORD **)(v14 + 8 * v10) + 56LL))(
      *(_QWORD *)(v14 + 8 * v10),
      0LL,
      &v25);
    v15 = CTSimpleArray<Microsoft::WRL::ComPtr<IApplicationView>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IApplicationView>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IApplicationView>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IApplicationView>>>::RemoveAt(
            a1 + 13,
            v10);
    v16 = v15;
    if ( v15 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x442,
        (__int64)"pcshell\\twinui\\applayout\\lib\\applayout.cpp",
        (const char *)(unsigned int)v15);
      return v16;
    }
    v22 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v22);
    if ( a3 )
    {
      v17 = CAppLayoutItem::s_CreateInstance_View(a3, a4, &GUID_d10c2c80_0ce6_45e9_add1_2000d3246f04, &v22);
      v7 = v17;
      if ( v17 < 0 )
      {
        v18 = (unsigned int)v17;
        v19 = 1097LL;
        goto LABEL_20;
      }
    }
    else
    {
      v20 = CAppLayoutItem::s_CreateInstance_Buffer(&GUID_d10c2c80_0ce6_45e9_add1_2000d3246f04, &v22);
      v7 = v20;
      if ( v20 < 0 )
      {
        v18 = (unsigned int)v20;
        v19 = 1102LL;
        goto LABEL_20;
      }
    }
    (*(void (__fastcall **)(void *, _QWORD, __int128 *))(*(_QWORD *)v22 + 104LL))(v22, 0LL, &v25);
    *(_QWORD *)v21 = v22;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)v21);
    v7 = CTSimpleArray<Microsoft::WRL::ComPtr<IAppLayoutItem>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IAppLayoutItem>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IAppLayoutItem>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IAppLayoutItem>>>::_InsertAt<Microsoft::WRL::ComPtr<IAppLayoutItem> &&>(
           v13,
           v21,
           v10);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v21);
    if ( (v7 & 0x80000000) == 0 )
    {
      v7 = 0;
      goto LABEL_22;
    }
    v18 = v7;
    v19 = 1110LL;
LABEL_20:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v19,
      (__int64)"pcshell\\twinui\\applayout\\lib\\applayout.cpp",
      (const char *)v18);
LABEL_22:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v22);
    return v7;
  }
  if ( a3 )
  {
    CAppLayout::_RemoveView((CAppLayout *)a1, a3);
    BufferItem = CAppLayout::_FindBufferItem((CAppLayout *)a1, 0LL, v21);
    if ( BufferItem < 0 )
    {
      v9 = 1081LL;
LABEL_9:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v9,
        (__int64)"pcshell\\twinui\\applayout\\lib\\applayout.cpp",
        (const char *)(unsigned int)BufferItem);
      return (unsigned int)BufferItem;
    }
    v10 = v21[0];
    goto LABEL_11;
  }
  v7 = -2147024809;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x428,
    (__int64)"pcshell\\twinui\\applayout\\lib\\applayout.cpp",
    (const char *)0x80070057LL);
  return v7;
}
