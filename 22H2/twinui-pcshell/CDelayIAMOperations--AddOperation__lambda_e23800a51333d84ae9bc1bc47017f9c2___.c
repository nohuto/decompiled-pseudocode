/*
 * XREFs of CDelayIAMOperations::AddOperation__lambda_e23800a51333d84ae9bc1bc47017f9c2___ @ 0x1800542D0
 * Callers:
 *     ?UpdateMonitorForAppAsync@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@@Z @ 0x18005423C (-UpdateMonitorForAppAsync@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@@Z.c)
 * Callees:
 *     ?_EnsureCapacity@?$CTSimpleArray@PEAUHWND__@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEAUHWND__@@@@V?$CSimpleArrayStandardCompareHelper@PEAUHWND__@@@@V?$CSimpleArrayStandardMergeHelper@PEAUHWND__@@@@@@QEAAJ_K0@Z @ 0x18005EB60 (-_EnsureCapacity@-$CTSimpleArray@PEAUHWND__@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@PEAUHWND__@@@@V-$CS.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008FD44 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDelayIAMOperations::AddOperation__lambda_e23800a51333d84ae9bc1bc47017f9c2___(int *a1, _QWORD *a2)
{
  __int64 v2; // rbx
  unsigned int v5; // edi
  char *v6; // rax
  void (__fastcall ***v7)(_QWORD, __int64); // rbx
  _QWORD *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rax
  int v11; // ebp
  _QWORD *v12; // rdx
  __int64 v13; // rcx

  v2 = *((_QWORD *)a1 + 2);
  v5 = 0;
  SetLastError(0);
  if ( !(unsigned int)IsWindowInDestroy(v2) && GetLastError() != 1400 || *((_QWORD *)a1 + 1) )
  {
    v6 = (char *)operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
    v7 = (void (__fastcall ***)(_QWORD, __int64))v6;
    if ( v6 )
    {
      *((_DWORD *)v6 + 2) = *a1;
      v8 = a2 + 1;
      *((_DWORD *)v6 + 3) = 3;
      *(_QWORD *)v6 = &off_1804FC220;
      *((_QWORD *)v6 + 2) = *a2;
      *((_QWORD *)v6 + 3) = 0LL;
      if ( v6 + 24 != (char *)(a2 + 1) )
      {
        *((_QWORD *)v6 + 3) = *v8;
        *v8 = 0LL;
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
        && (int)CTSimpleArray<HWND__ *,4294967294,CTPolicyCoTaskMem<HWND__ *>,CSimpleArrayStandardCompareHelper<HWND__ *>,CSimpleArrayStandardMergeHelper<HWND__ *>>::_EnsureCapacity(
                  a1 + 6,
                  v9 + 1) < 0 )
      {
        (**v7)(v7, 1LL);
      }
      else
      {
        v10 = *((_QWORD *)a1 + 3);
        v11 = 1;
        v12 = (_QWORD *)(v10 + 8 * (*((_QWORD *)a1 + 4))++);
        if ( v12 )
          *v12 = v7;
        v13 = *((_QWORD *)a1 + 1);
        ++a1[14];
        v5 = *a1;
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v13 + 56LL))(v13, 65534LL);
        if ( *a1 != -1 )
          v11 = *a1 + 1;
        *a1 = v11;
      }
    }
  }
  return v5;
}
