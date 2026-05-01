/*
 * XREFs of ?ParseTaskbarLayoutCollectionNode@TaskbarLayoutParser@@UEAAJAEAV?$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@AEAV?$CCoSimpleArray@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@@@@Z @ 0x180211A60
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006D6C0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18008C494 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x18015DD3C (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V-$C.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?RemoveAll@?$CTSimpleArray@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@@@@@QEAAXXZ @ 0x1801B6A50 (-RemoveAll@-$CTSimpleArray@V-$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V-$CTP.c)
 *     ??$GetSelectedItem@UParsedTaskbarLayout@@@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJAEBV?$vector@UParsedTaskbarLayout@@V?$allocator@UParsedTaskbarLayout@@@std@@@std@@USelectionData@0123@V?$function@$$A6A?AUSelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@AEBUParsedTaskbarLayout@@@Z@5@PEAUParsedTaskbarLayout@@@Z @ 0x18020FE34 (--$GetSelectedItem@UParsedTaskbarLayout@@@CuratedTileCollections@UnifiedTile@Shell@WindowsIntern.c)
 *     ??$_Destroy_range@V?$allocator@UParsedTaskbarLayout@@@std@@@std@@YAXPEAUParsedTaskbarLayout@@0AEAV?$allocator@UParsedTaskbarLayout@@@0@@Z @ 0x18021010C (--$_Destroy_range@V-$allocator@UParsedTaskbarLayout@@@std@@@std@@YAXPEAUParsedTaskbarLayout@@0AE.c)
 *     ??$emplace_back@UParsedTaskbarLayout@@@?$vector@UParsedTaskbarLayout@@V?$allocator@UParsedTaskbarLayout@@@std@@@std@@QEAAX$$QEAUParsedTaskbarLayout@@@Z @ 0x1802106EC (--$emplace_back@UParsedTaskbarLayout@@@-$vector@UParsedTaskbarLayout@@V-$allocator@UParsedTaskba.c)
 *     ??0SelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEAA@AEBU01234@@Z @ 0x1802108EC (--0SelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEAA@AEBU01234@@Z.c)
 *     ??1SelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEAA@XZ @ 0x180210B04 (--1SelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEAA@XZ.c)
 *     ?CalculateSelectionAttributes@TaskbarLayoutParser@@AEAAJXZ @ 0x180210DA4 (-CalculateSelectionAttributes@TaskbarLayoutParser@@AEAAJXZ.c)
 *     ?ParseTaskbarLayoutNode@TaskbarLayoutParser@@AEAAJPEAUIXMLDOMNode@@AEAUParsedTaskbarLayout@@@Z @ 0x180211FA8 (-ParseTaskbarLayoutNode@TaskbarLayoutParser@@AEAAJPEAUIXMLDOMNode@@AEAUParsedTaskbarLayout@@@Z.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall TaskbarLayoutParser::ParseTaskbarLayoutCollectionNode(
        TaskbarLayoutParser *this,
        __int64 *a2,
        _QWORD *a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rbx
  int v9; // eax
  __int64 v10; // rbx
  const char *v11; // r9
  void *v12; // rbx
  WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData *v13; // rax
  int Selected; // eax
  int v15; // esi
  void *v16; // rbx
  __int64 *v17; // rsi
  __int64 v18; // r15
  __int64 v19; // rbx
  void *v20; // r8
  __int64 v21; // rdx
  __int64 *v22; // rdx
  void *v23; // rbx
  struct IXMLDOMNode *v25; // [rsp+20h] [rbp-218h] BYREF
  __int128 v26; // [rsp+28h] [rbp-210h] BYREF
  __int64 v27; // [rsp+38h] [rbp-200h]
  __int64 v28[2]; // [rsp+40h] [rbp-1F8h] BYREF
  __int64 v29[4]; // [rsp+50h] [rbp-1E8h] BYREF
  __int64 v30; // [rsp+70h] [rbp-1C8h] BYREF
  char v31; // [rsp+78h] [rbp-1C0h]
  __int128 v32; // [rsp+80h] [rbp-1B8h]
  __int128 v33; // [rsp+90h] [rbp-1A8h]
  __int128 v34; // [rsp+A0h] [rbp-198h]
  __int128 v35; // [rsp+B0h] [rbp-188h]
  __int64 v36; // [rsp+C0h] [rbp-178h]
  __int64 v37; // [rsp+C8h] [rbp-170h]
  char v38; // [rsp+D0h] [rbp-168h]
  _OWORD v39[2]; // [rsp+E0h] [rbp-158h] BYREF
  __int64 v40; // [rsp+100h] [rbp-138h] BYREF
  char v41; // [rsp+108h] [rbp-130h]
  __int128 v42; // [rsp+110h] [rbp-128h]
  __int128 v43; // [rsp+120h] [rbp-118h]
  __int128 v44; // [rsp+130h] [rbp-108h]
  __int128 v45; // [rsp+140h] [rbp-F8h]
  __int64 v46; // [rsp+150h] [rbp-E8h]
  __int64 v47; // [rsp+158h] [rbp-E0h]
  char v48; // [rsp+160h] [rbp-D8h]
  _QWORD v49[8]; // [rsp+178h] [rbp-C0h] BYREF
  _BYTE v50[104]; // [rsp+1B8h] [rbp-80h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+238h] [rbp+0h]
  _QWORD *v52; // [rsp+258h] [rbp+20h] BYREF

  v6 = TaskbarLayoutParser::CalculateSelectionAttributes(this);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v28[0] = 0LL;
    v8 = *a2;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v28);
    v9 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v8 + 96LL))(v8, v28);
    v7 = v9;
    if ( v9 >= 0 )
    {
      v25 = 0LL;
      v26 = 0LL;
      v27 = 0LL;
      while ( 1 )
      {
        v10 = v28[0];
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v25);
        if ( (*(int (__fastcall **)(__int64, struct IXMLDOMNode **))(*(_QWORD *)v10 + 72LL))(v10, &v25) < 0 || !v25 )
          break;
        memset(v29, 0, sizeof(v29));
        v30 = 0LL;
        v31 = 0;
        v32 = 0LL;
        v33 = 0LL;
        v34 = 0LL;
        v35 = 0LL;
        v36 = 0LL;
        v37 = 0LL;
        v38 = 0;
        if ( (int)TaskbarLayoutParser::ParseTaskbarLayoutNode(this, v25, (struct ParsedTaskbarLayout *)v29) >= 0 )
        {
          try
          {
            std::vector<ParsedTaskbarLayout>::emplace_back<ParsedTaskbarLayout>((__int64 *)&v26, v29);
          }
          catch ( ... )
          {
            LODWORD(v52) = wil::details::in1diag3::Return_CaughtException(
                             retaddr,
                             (void *)0x6D,
                             (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutparser.cpp",
                             v11);
            WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData::~SelectionData((WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData *)&v30);
            CTSimpleArray<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>>::RemoveAll((__int64)v29);
            v12 = (void *)v26;
            if ( (_QWORD)v26 )
            {
              std::_Destroy_range<std::allocator<ParsedTaskbarLayout>>(v26, *((__int64 *)&v26 + 1));
              std::_Deallocate<16,0>(v12, (const struct std::nothrow_t *)(136 * ((v27 - (__int64)v12) / 136)));
              v26 = 0LL;
              v27 = 0LL;
            }
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v25);
            v7 = (unsigned int)v52;
            goto LABEL_29;
          }
        }
        WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData::~SelectionData((WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData *)&v30);
        CTSimpleArray<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>>::RemoveAll((__int64)v29);
      }
      memset(v39, 0, sizeof(v39));
      v40 = 0LL;
      v41 = 0;
      v42 = 0LL;
      v43 = 0LL;
      v44 = 0LL;
      v45 = 0LL;
      v46 = 0LL;
      v47 = 0LL;
      v48 = 0;
      v52 = v49;
      v49[0] = off_180510440;
      v49[7] = v49;
      v13 = WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData::SelectionData(
              (WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData *)v50,
              (TaskbarLayoutParser *)((char *)this + 48));
      Selected = WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::GetSelectedItem<ParsedTaskbarLayout>(
                   (__int64 *)&v26,
                   v13,
                   (__int64)v49,
                   (__int64)v39);
      v15 = Selected;
      if ( Selected >= 0 )
      {
        v17 = *(__int64 **)&v39[0];
        v18 = *(_QWORD *)&v39[0] + 8LL * *((_QWORD *)&v39[0] + 1);
        while ( v17 != (__int64 *)v18 )
        {
          v19 = *v17;
          v52 = (_QWORD *)*v17;
          Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v52);
          v21 = a3[1];
          if ( v21 != a3[3]
            || (int)CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
                      (__int64)a3,
                      v21 + 1,
                      v20) >= 0 )
          {
            v22 = (__int64 *)(*a3 + 8 * a3[1]++);
            if ( v22 )
            {
              *v22 = 0LL;
              if ( v22 != (__int64 *)&v52 )
              {
                *v22 = v19;
                v52 = 0LL;
              }
            }
          }
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v52);
          ++v17;
        }
        WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData::~SelectionData((WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData *)&v40);
        CTSimpleArray<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>>::RemoveAll((__int64)v39);
        v23 = (void *)v26;
        if ( (_QWORD)v26 )
        {
          std::_Destroy_range<std::allocator<ParsedTaskbarLayout>>(v26, *((__int64 *)&v26 + 1));
          std::_Deallocate<16,0>(v23, (const struct std::nothrow_t *)(136 * ((v27 - (__int64)v23) / 136)));
          v26 = 0LL;
          v27 = 0LL;
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v25);
        v7 = 0;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x75,
          (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutparser.cpp",
          (const char *)(unsigned int)Selected);
        WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData::~SelectionData((WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData *)&v40);
        CTSimpleArray<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>>::RemoveAll((__int64)v39);
        v16 = (void *)v26;
        if ( (_QWORD)v26 )
        {
          std::_Destroy_range<std::allocator<ParsedTaskbarLayout>>(v26, *((__int64 *)&v26 + 1));
          std::_Deallocate<16,0>(v16, (const struct std::nothrow_t *)(136 * ((v27 - (__int64)v16) / 136)));
          v26 = 0LL;
          v27 = 0LL;
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v25);
        v7 = v15;
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x60,
        (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutparser.cpp",
        (const char *)(unsigned int)v9);
    }
LABEL_29:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v28);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5D,
      (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutparser.cpp",
      (const char *)(unsigned int)v6);
  }
  return v7;
}
