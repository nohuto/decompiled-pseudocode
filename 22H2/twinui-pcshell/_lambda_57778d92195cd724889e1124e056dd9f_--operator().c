/*
 * XREFs of _lambda_57778d92195cd724889e1124e056dd9f_::operator() @ 0x1801D25A4
 * Callers:
 *     CClassicWindowManager::ForEachWindow__lambda_46f4ed7ab3f2eec376581f58c5e1fb12___ @ 0x1801D1D28 (CClassicWindowManager--ForEachWindow__lambda_46f4ed7ab3f2eec376581f58c5e1fb12___.c)
 * Callees:
 *     ?_EnsureCapacity@?$CTSimpleArray@PEAUHWND__@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEAUHWND__@@@@V?$CSimpleArrayStandardCompareHelper@PEAUHWND__@@@@V?$CSimpleArrayStandardMergeHelper@PEAUHWND__@@@@@@QEAAJ_K0@Z @ 0x18005EB60 (-_EnsureCapacity@-$CTSimpleArray@PEAUHWND__@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@PEAUHWND__@@@@V-$CS.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall lambda_57778d92195cd724889e1124e056dd9f_::operator()(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rcx
  _QWORD *v5; // rbx
  __int64 v6; // rax
  void *v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rdi
  int v10; // eax
  __int64 *v11; // r8
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 128LL))(*a2) )
  {
    v4 = *a2;
    if ( *a2 != *(_QWORD *)(a1 + 8) )
    {
      v5 = *(_QWORD **)(a1 + 16);
      v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 24LL))(v4);
      v8 = v5[1];
      v9 = v6;
      if ( v8 == v5[3]
        && (v10 = CTSimpleArray<HWND__ *,4294967294,CTPolicyCoTaskMem<HWND__ *>,CSimpleArrayStandardCompareHelper<HWND__ *>,CSimpleArrayStandardMergeHelper<HWND__ *>>::_EnsureCapacity(
                    (__int64)v5,
                    v8 + 1,
                    v7),
            v10 < 0) )
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x8CF,
          (__int64)"pcshell\\twinui\\appmanager\\lib\\classicwndmgr.cpp",
          (const char *)(unsigned int)v10);
      }
      else
      {
        v11 = (__int64 *)(*v5 + 8 * v5[1]++);
        if ( v11 )
          *v11 = v9;
      }
    }
  }
  return 1;
}
