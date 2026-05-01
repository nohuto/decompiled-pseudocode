/*
 * XREFs of CDelayIAMOperations::AddOperation__lambda_8d958b4643e24e2ce219100e0108e65c___ @ 0x180096504
 * Callers:
 *     ?AsyncInvokeWithApplicationViewSerialization@CApplicationManager@@UEAAJPEAUIAsyncCallback@@@Z @ 0x1801B8800 (-AsyncInvokeWithApplicationViewSerialization@CApplicationManager@@UEAAJPEAUIAsyncCallback@@@Z.c)
 * Callees:
 *     ?IsValidWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x18005B014 (-IsValidWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@PEAUHWND__@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEAUHWND__@@@@V?$CSimpleArrayStandardCompareHelper@PEAUHWND__@@@@V?$CSimpleArrayStandardMergeHelper@PEAUHWND__@@@@@@QEAAJ_K0@Z @ 0x18005EB60 (-_EnsureCapacity@-$CTSimpleArray@PEAUHWND__@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@PEAUHWND__@@@@V-$CS.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008FD44 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDelayIAMOperations::AddOperation__lambda_8d958b4643e24e2ce219100e0108e65c___(int *a1, HWND a2)
{
  unsigned int v4; // edi
  char *v5; // rax
  void *v6; // r8
  void (__fastcall ***v7)(_QWORD, __int64); // rbx
  int v8; // ebp
  __int64 v9; // rdx
  _QWORD *v10; // rdx
  LPARAM v11; // r9
  HWND v12; // rcx

  v4 = 0;
  if ( CApplicationManagerUtility::IsValidWindow(*((CApplicationManagerUtility **)a1 + 2), a2) )
  {
    v5 = (char *)operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
    v7 = (void (__fastcall ***)(_QWORD, __int64))v5;
    v8 = 1;
    if ( v5 )
    {
      *((_DWORD *)v5 + 2) = *a1;
      *(_QWORD *)v5 = &off_180500928;
      *((_DWORD *)v5 + 3) = 1;
      *((_QWORD *)v5 + 2) = 0LL;
      if ( v5 + 16 != (char *)a2 )
      {
        *((_QWORD *)v5 + 2) = *(_QWORD *)a2;
        *(_QWORD *)a2 = 0LL;
      }
    }
    else
    {
      v7 = 0LL;
    }
    if ( v7 )
    {
      v9 = *((_QWORD *)a1 + 4);
      if ( v9 == *((_QWORD *)a1 + 6)
        && CTSimpleArray<HWND__ *,4294967294,CTPolicyCoTaskMem<HWND__ *>,CSimpleArrayStandardCompareHelper<HWND__ *>,CSimpleArrayStandardMergeHelper<HWND__ *>>::_EnsureCapacity(
             (__int64)(a1 + 6),
             v9 + 1,
             v6) < 0 )
      {
        (**v7)(v7, 1LL);
      }
      else
      {
        v10 = (_QWORD *)(*((_QWORD *)a1 + 3) + 8 * (*((_QWORD *)a1 + 4))++);
        if ( v10 )
          *v10 = v7;
        v11 = (unsigned int)*a1;
        v12 = (HWND)*((_QWORD *)a1 + 2);
        ++a1[14];
        v4 = v11;
        PostMessageW(v12, 0x402u, 0LL, v11);
        if ( *a1 != -1 )
          v8 = *a1 + 1;
        *a1 = v8;
      }
    }
  }
  return v4;
}
