/*
 * XREFs of ?ApplyResourceManagerPolicyToRenderAdapters@@YAXW4_GLOBAL_RM_POLICY_TYPE@@PEAX@Z @ 0x1C033EB90
 * Callers:
 *     DxgkSetMemoryBudgetTarget @ 0x1C03424C0 (DxgkSetMemoryBudgetTarget.c)
 *     DxgkSetYieldPercentage @ 0x1C0343050 (DxgkSetYieldPercentage.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008CE0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008F20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008FA8 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00096F0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0009754 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ApplyResourceManagerPolicyToRenderAdapters(int a1, __int64 a2)
{
  struct DXGGLOBAL *Global; // rax
  _QWORD **v5; // r14
  _QWORD *v6; // rsi
  _QWORD *v7; // rbx
  _QWORD *v8; // rcx
  __int64 v9; // r9
  struct DXGGLOBAL *v10; // rax
  _BYTE v11[16]; // [rsp+20h] [rbp-38h] BYREF
  char v12[8]; // [rsp+30h] [rbp-28h] BYREF
  _QWORD *v13; // [rsp+38h] [rbp-20h]
  char v14; // [rsp+40h] [rbp-18h]

  Global = DXGGLOBAL::GetGlobal();
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v11, (struct DXGGLOBAL *)((char *)Global + 672), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v11);
  v5 = (_QWORD **)((char *)DXGGLOBAL::GetGlobal() + 768);
  v6 = *v5;
  while ( v6 != v5 && v6 )
  {
    v7 = v6;
    v6 = (_QWORD *)*v6;
    if ( v7[366] && (*((_DWORD *)v7 + 109) & 0x4000) == 0 )
    {
      v13 = v7;
      v14 = 0;
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v12);
      if ( *((_DWORD *)v7 + 50) == 1 )
      {
        v8 = (_QWORD *)v7[366];
        v9 = v8[96];
        if ( a1 )
        {
          if ( a1 == 1 )
            (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(*(_QWORD *)(v8[95] + 8LL) + 1152LL))(
              v8[96],
              *(unsigned int *)(a2 + 8),
              *(unsigned int *)(a2 + 12),
              v9);
        }
        else
        {
          (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(*(_QWORD *)(v8[92] + 8LL) + 952LL))(
            v8[93],
            *(unsigned int *)(a2 + 8),
            *(unsigned int *)(a2 + 12),
            v9);
        }
      }
      if ( v14 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v12);
    }
  }
  v10 = DXGGLOBAL::GetGlobal();
  if ( a1 )
  {
    if ( a1 == 1 )
    {
      *((_DWORD *)v10 + 76115) = *(_DWORD *)(a2 + 8);
      *((_DWORD *)v10 + 76116) = *(_DWORD *)(a2 + 12);
    }
  }
  else
  {
    *((_DWORD *)v10 + 76114) = *(_DWORD *)(a2 + 12);
    *((_DWORD *)v10 + 76117) ^= (*((_DWORD *)v10 + 76117) ^ *(_DWORD *)(a2 + 8)) & 1;
  }
  if ( v11[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v11);
}
