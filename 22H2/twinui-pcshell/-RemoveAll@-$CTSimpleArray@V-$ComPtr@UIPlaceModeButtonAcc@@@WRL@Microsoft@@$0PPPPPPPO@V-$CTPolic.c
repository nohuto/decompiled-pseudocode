/*
 * XREFs of ?RemoveAll@?$CTSimpleArray@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@@@QEAAXXZ @ 0x18049DF48
 * Callers:
 *     ??1CDragVisualAcc@@EEAA@XZ @ 0x18049C714 (--1CDragVisualAcc@@EEAA@XZ.c)
 *     ?_DismissPlaceModeButtons@CDragVisualAcc@@AEAAXXZ @ 0x18049E22C (-_DismissPlaceModeButtons@CDragVisualAcc@@AEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::RemoveAll(
        __int64 a1)
{
  _QWORD *v2; // rcx
  unsigned __int64 i; // rdi
  __int64 v4; // rdx

  v2 = *(_QWORD **)a1;
  if ( v2 )
  {
    for ( i = 0LL; i < *(_QWORD *)(a1 + 8); ++i )
    {
      v2 = *(_QWORD **)a1;
      v4 = *(_QWORD *)(*(_QWORD *)a1 + 8 * i);
      if ( v4 )
      {
        v2[i] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
        v2 = *(_QWORD **)a1;
      }
    }
    CoTaskMemFree(v2);
    *(_QWORD *)a1 = 0LL;
  }
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
}
