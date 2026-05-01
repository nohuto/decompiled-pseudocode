/*
 * XREFs of ?PositionNewCreatedApp@?$CActivationBasedCollection@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@@@UEAAJAEBV?$ComPtr@UITaskWindow@@@WRL@Microsoft@@@Z @ 0x1801D5810
 * Callers:
 *     <none>
 * Callees:
 *     ?_EnsureCapacity@?$CTSimpleArray@_K$0PPPPPPPO@V?$CTPolicyCoTaskMem@_K@@V?$CSimpleArrayStandardCompareHelper@_K@@V?$CSimpleArrayStandardMergeHelper@_K@@@@QEAAJ_K0@Z @ 0x18005EE50 (-_EnsureCapacity@-$CTSimpleArray@_K$0PPPPPPPO@V-$CTPolicyCoTaskMem@_K@@V-$CSimpleArrayStandardCo.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006D6C0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 __fastcall CActivationBasedCollection<Microsoft::WRL::ComPtr<ITaskWindow>>::PositionNewCreatedApp(
        _QWORD *a1,
        __int64 *a2)
{
  _QWORD *v2; // rbx
  __int64 v4; // rdx
  int v5; // edi
  __int64 *v6; // rcx

  v2 = a1 + 1;
  v4 = a1[2];
  v5 = 0;
  if ( v4 != a1[4]
    || (v5 = CTSimpleArray<unsigned __int64,4294967294,CTPolicyCoTaskMem<unsigned __int64>,CSimpleArrayStandardCompareHelper<unsigned __int64>,CSimpleArrayStandardMergeHelper<unsigned __int64>>::_EnsureCapacity(
               (__int64)(a1 + 1),
               v4 + 1),
        v5 >= 0) )
  {
    ++v2[1];
    v6 = (__int64 *)(*v2 + 8LL * v2[1] - 8);
    if ( *v2 + 8LL * v2[1] != 8 )
    {
      *v6 = *a2;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v6);
    }
  }
  return (unsigned int)v5;
}
