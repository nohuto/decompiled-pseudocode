/*
 * XREFs of CDelayIAMOperations::AddOperation__lambda_27d5c6bd3555df46180c2775e5ad1d68___ @ 0x18005AE00
 * Callers:
 *     ?OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z @ 0x18003E070 (-OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z.c)
 *     ?_HandleWindowCreation@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z @ 0x1801C7014 (-_HandleWindowCreation@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z.c)
 * Callees:
 *     ?IsValidWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x18005B014 (-IsValidWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@PEAUHWND__@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEAUHWND__@@@@V?$CSimpleArrayStandardCompareHelper@PEAUHWND__@@@@V?$CSimpleArrayStandardMergeHelper@PEAUHWND__@@@@@@QEAAJ_K0@Z @ 0x18005EB60 (-_EnsureCapacity@-$CTSimpleArray@PEAUHWND__@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@PEAUHWND__@@@@V-$CS.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008FD64 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDelayIAMOperations::AddOperation__lambda_27d5c6bd3555df46180c2775e5ad1d68___(int *a1, HWND a2)
{
  unsigned int v4; // edi
  void (__fastcall ***v5)(_QWORD, __int64); // rax
  void (__fastcall ***v6)(_QWORD, __int64); // rbx
  __int64 v7; // rdx
  __int64 v8; // rax
  int v9; // ebp
  _QWORD *v10; // rdx
  __int64 v11; // rcx

  v4 = 0;
  if ( CApplicationManagerUtility::IsValidWindow(*((CApplicationManagerUtility **)a1 + 2), a2) || *((_QWORD *)a1 + 1) )
  {
    v5 = (void (__fastcall ***)(_QWORD, __int64))operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
    v6 = v5;
    if ( v5 )
    {
      *((_DWORD *)v5 + 2) = *a1;
      *v5 = (void (__fastcall **)(_QWORD, __int64))off_1804FD4F0;
      *((_DWORD *)v5 + 3) = 3;
      *((_OWORD *)v5 + 1) = *(_OWORD *)a2;
    }
    else
    {
      v6 = 0LL;
    }
    if ( v6 )
    {
      v7 = *((_QWORD *)a1 + 4);
      if ( v7 == *((_QWORD *)a1 + 6)
        && (int)CTSimpleArray<HWND__ *,4294967294,CTPolicyCoTaskMem<HWND__ *>,CSimpleArrayStandardCompareHelper<HWND__ *>,CSimpleArrayStandardMergeHelper<HWND__ *>>::_EnsureCapacity(
                  a1 + 6,
                  v7 + 1) < 0 )
      {
        (**v6)(v6, 1LL);
      }
      else
      {
        v8 = *((_QWORD *)a1 + 3);
        v9 = 1;
        v10 = (_QWORD *)(v8 + 8 * (*((_QWORD *)a1 + 4))++);
        if ( v10 )
          *v10 = v6;
        v11 = *((_QWORD *)a1 + 1);
        ++a1[14];
        v4 = *a1;
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 56LL))(v11, 65534LL);
        if ( *a1 != -1 )
          v9 = *a1 + 1;
        *a1 = v9;
      }
    }
  }
  return v4;
}
