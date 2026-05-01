/*
 * XREFs of ?HandleAppToAppLayoutChange@ScreenManager@@AEAAJPEAUIAppLayoutOperation@@PEA_N@Z @ 0x180474244
 * Callers:
 *     ?AppLayoutChanged@ScreenManager@@UEAAJPEAUIImmersiveMonitor@@PEAUIAppLayoutOperation@@@Z @ 0x180473D90 (-AppLayoutChanged@ScreenManager@@UEAAJPEAUIImmersiveMonitor@@PEAUIAppLayoutOperation@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ??$_InsertAt@AEBUCacheEntry@ScreenManager@@@?$CTSimpleArray@UCacheEntry@ScreenManager@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@UCacheEntry@ScreenManager@@@@V?$CSimpleArrayStandardCompareHelper@UCacheEntry@ScreenManager@@@@V?$CSimpleArrayStandardMergeHelper@UCacheEntry@ScreenManager@@@@@@QEAAJAEBUCacheEntry@ScreenManager@@_K@Z @ 0x180473A70 (--$_InsertAt@AEBUCacheEntry@ScreenManager@@@-$CTSimpleArray@UCacheEntry@ScreenManager@@$0PPPPPPP.c)
 *     ??1CacheEntry@ScreenManager@@QEAA@XZ @ 0x180473C5C (--1CacheEntry@ScreenManager@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ScreenManager::HandleAppToAppLayoutChange(__int64 **this, struct IAppLayoutOperation *a2, bool *a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  int v8; // eax
  __int64 v9; // rbx
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rbx
  __int128 v14; // [rsp+20h] [rbp-20h] BYREF
  __int64 v15[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  __int64 v17; // [rsp+68h] [rbp+28h] BYREF
  __int64 v18; // [rsp+70h] [rbp+30h] BYREF

  *a3 = 0;
  v18 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
  v6 = (*(__int64 (__fastcall **)(struct IAppLayoutOperation *, __int64 *))(*(_QWORD *)a2 + 40LL))(a2, &v18);
  v7 = v6;
  if ( v6 >= 0 )
  {
    if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v18 + 48LL))(v18) )
    {
      v17 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
      v8 = (*(__int64 (__fastcall **)(struct IAppLayoutOperation *, __int64 *))(*(_QWORD *)a2 + 48LL))(a2, &v17);
      v7 = v8;
      if ( v8 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x10A,
          (__int64)"pcshell\\twinui\\tabletmode\\lib\\screenmanager.cpp",
          (const char *)(unsigned int)v8);
LABEL_15:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
        goto LABEL_18;
      }
      v14 = 0LL;
      v15[0] = 0LL;
      v9 = v18;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v14);
      v10 = (*(__int64 (__fastcall **)(__int64, GUID *, __int128 *))(*(_QWORD *)v9 + 192LL))(
              v9,
              &GUID_7baad876_2fc5_4561_93e1_17e868a174ed,
              &v14);
      v7 = v10;
      if ( v10 < 0 )
      {
        v11 = 269LL;
LABEL_14:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v11,
          (__int64)"pcshell\\twinui\\tabletmode\\lib\\screenmanager.cpp",
          (const char *)(unsigned int)v10);
        ScreenManager::CacheEntry::~CacheEntry((ScreenManager::CacheEntry *)&v14);
        goto LABEL_15;
      }
      v12 = v17;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v14 + 1);
      v10 = (*(__int64 (__fastcall **)(__int64, GUID *, char *))(*(_QWORD *)v12 + 192LL))(
              v12,
              &GUID_7baad876_2fc5_4561_93e1_17e868a174ed,
              (char *)&v14 + 8);
      v7 = v10;
      if ( v10 < 0 )
      {
        v11 = 270LL;
        goto LABEL_14;
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v15);
      v10 = (*(__int64 (__fastcall **)(struct IAppLayoutOperation *, __int64 *))(*(_QWORD *)a2 + 64LL))(a2, v15);
      v7 = v10;
      if ( v10 < 0 )
      {
        v11 = 271LL;
        goto LABEL_14;
      }
      v10 = CTSimpleArray<ScreenManager::CacheEntry,4294967294,CTPolicyCoTaskMem<ScreenManager::CacheEntry>,CSimpleArrayStandardCompareHelper<ScreenManager::CacheEntry>,CSimpleArrayStandardMergeHelper<ScreenManager::CacheEntry>>::_InsertAt<ScreenManager::CacheEntry const &>(
              this + 39,
              (__int64 *)&v14);
      v7 = v10;
      if ( v10 < 0 )
      {
        v11 = 272LL;
        goto LABEL_14;
      }
      *a3 = 1;
      ScreenManager::CacheEntry::~CacheEntry((ScreenManager::CacheEntry *)&v14);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
    }
    v7 = 0;
    goto LABEL_18;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x106,
    (__int64)"pcshell\\twinui\\tabletmode\\lib\\screenmanager.cpp",
    (const char *)(unsigned int)v6);
LABEL_18:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
  return v7;
}
