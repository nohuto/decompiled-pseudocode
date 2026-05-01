/*
 * XREFs of ?RegisterView@CDropFeedbackList@@UEAAJKPEAUIApplicationView@@PEBUtagRECT@@@Z @ 0x180491790
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006D6C0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x18015DEAC (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V-$C.c)
 *     ?CDropFeedbackItem_CreateInstance@@YAJKW4DROP_FEEDBACK_ACTION@@PEAUIApplicationView@@W4DROP_FEEDBACK_TYPE@@PEBUtagRECT@@3NW4DROP_FEEDBACK_FLAGS@@AEBU_GUID@@PEAPEAX@Z @ 0x18049A5F8 (-CDropFeedbackItem_CreateInstance@@YAJKW4DROP_FEEDBACK_ACTION@@PEAUIApplicationView@@W4DROP_FEED.c)
 */

__int64 __fastcall CDropFeedbackList::RegisterView(
        CDropFeedbackList *this,
        unsigned int a2,
        struct IApplicationView *a3,
        const struct tagRECT *a4)
{
  int Instance; // esi
  __int64 v8; // rbx
  void *v9; // r8
  __int64 v10; // rdx
  __int64 *v11; // rdx
  __int64 v13; // [rsp+50h] [rbp-18h] BYREF
  __int64 v14; // [rsp+58h] [rbp-10h] BYREF

  v14 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
  Instance = CDropFeedbackItem_CreateInstance(a2, 0LL, a3);
  if ( Instance >= 0 )
  {
    v8 = v14;
    v13 = v14;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v13);
    v10 = *((_QWORD *)this + 3);
    Instance = 0;
    if ( v10 != *((_QWORD *)this + 5)
      || (Instance = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
                       (__int64)this + 16,
                       v10 + 1,
                       v9),
          Instance >= 0) )
    {
      v11 = (__int64 *)(*((_QWORD *)this + 2) + 8 * (*((_QWORD *)this + 3))++);
      if ( v11 )
      {
        *v11 = 0LL;
        if ( v11 != &v13 )
        {
          v13 = 0LL;
          *v11 = v8;
        }
      }
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
  return (unsigned int)Instance;
}
