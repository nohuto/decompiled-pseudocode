/*
 * XREFs of ?InitializeClone@CEnumerableObjectCollection@@IEAAJPEAV1@@Z @ 0x1801BD158
 * Callers:
 *     ?Clone@CEnumerableObjectCollection@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801B8DEC (-Clone@CEnumerableObjectCollection@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x18015DD3C (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V-$C.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CEnumerableObjectCollection::InitializeClone(
        CEnumerableObjectCollection *this,
        struct CEnumerableObjectCollection *a2,
        void *a3)
{
  __int64 v3; // rsi
  _QWORD *v4; // rdi
  int v5; // eax
  int v8; // ebx
  void *v9; // r8
  __int64 v10; // r15
  __int64 v11; // rsi
  __int64 v12; // r14
  __int64 v13; // rdx
  _QWORD *v14; // rcx

  v3 = *((int *)this + 12);
  v4 = (_QWORD *)((char *)a2 + 40);
  v5 = *((_DWORD *)this + 7);
  if ( v5 <= (int)v3 )
    v5 = *((_DWORD *)this + 12);
  v8 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
         (__int64)a2 + 40,
         v5,
         a3);
  if ( v8 >= 0 )
  {
    v10 = v3;
    v11 = 0LL;
    do
    {
      if ( v11 >= v10 )
        break;
      v12 = *(_QWORD *)(*((_QWORD *)this + 5) + 8 * v11);
      if ( v12 )
      {
        v13 = v4[1];
        v8 = 0;
        if ( v13 != v4[3]
          || (v8 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
                     (__int64)v4,
                     v13 + 1,
                     v9),
              v8 >= 0) )
        {
          v14 = (_QWORD *)(*v4 + 8 * v4[1]++);
          if ( v14 )
            *v14 = v12;
        }
        if ( v8 >= 0 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
          *((_DWORD *)a2 + 7) = *((_DWORD *)this + 7);
          *((_DWORD *)a2 + 8) = *((_DWORD *)this + 8);
        }
      }
      else
      {
        v8 = -2147418113;
      }
      ++v11;
    }
    while ( v8 >= 0 );
  }
  return (unsigned int)v8;
}
