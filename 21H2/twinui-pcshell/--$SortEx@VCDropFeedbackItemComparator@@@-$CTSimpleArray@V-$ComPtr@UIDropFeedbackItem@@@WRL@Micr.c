/*
 * XREFs of ??$SortEx@VCDropFeedbackItemComparator@@@?$CTSimpleArray@V?$ComPtr@UIDropFeedbackItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIDropFeedbackItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIDropFeedbackItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIDropFeedbackItem@@@WRL@Microsoft@@@@@@QEAAJAEBVCDropFeedbackItemComparator@@@Z @ 0x180490D08
 * Callers:
 *     ?Sort@CDropFeedbackList@@UEAAJXZ @ 0x180491A20 (-Sort@CDropFeedbackList@@UEAAJXZ.c)
 * Callees:
 *     ?Realloc@CTCoAllocPolicy@@SAJPEAXK0_KPEAPEAX@Z @ 0x18005EF4C (-Realloc@CTCoAllocPolicy@@SAJPEAXK0_KPEAPEAX@Z.c)
 *     ??$_MergeSort@VCDropFeedbackItemComparator@@@?$CTSimpleArray@V?$ComPtr@UIDropFeedbackItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIDropFeedbackItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIDropFeedbackItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIDropFeedbackItem@@@WRL@Microsoft@@@@@@QEAAXAEBVCDropFeedbackItemComparator@@_K1@Z @ 0x180490DA4 (--$_MergeSort@VCDropFeedbackItemComparator@@@-$CTSimpleArray@V-$ComPtr@UIDropFeedbackItem@@@WRL@.c)
 */

__int64 __fastcall CTSimpleArray<Microsoft::WRL::ComPtr<IDropFeedbackItem>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IDropFeedbackItem>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IDropFeedbackItem>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IDropFeedbackItem>>>::SortEx<CDropFeedbackItemComparator>(
        __int64 a1,
        __int64 a2)
{
  int v3; // ebx
  unsigned __int64 v4; // rcx
  unsigned __int64 v6; // rcx
  LPVOID *v7; // rsi

  v3 = 0;
  v4 = *(_QWORD *)(a1 + 8);
  if ( v4 > 1 )
  {
    v6 = v4 >> 1;
    v7 = (LPVOID *)(a1 + 16);
    *(_QWORD *)(a1 + 16) = 0LL;
    if ( is_mul_ok(v6, 8uLL) )
    {
      v3 = CTCoAllocPolicy::Realloc((void *)v6, (v6 * (unsigned __int128)8u) >> 64, 0LL, 8 * v6, (void **)(a1 + 16));
      if ( v3 >= 0 )
      {
        CTSimpleArray<Microsoft::WRL::ComPtr<IDropFeedbackItem>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IDropFeedbackItem>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IDropFeedbackItem>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IDropFeedbackItem>>>::_MergeSort<CDropFeedbackItemComparator>(
          a1,
          a2,
          0LL,
          *(_QWORD *)(a1 + 8));
        CoTaskMemFree(*v7);
        *v7 = 0LL;
      }
    }
    else
    {
      return (unsigned int)-2147024362;
    }
  }
  return (unsigned int)v3;
}
