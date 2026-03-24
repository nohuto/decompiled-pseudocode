/*
 * XREFs of ?UpdateCopyProtection@ADAPTER_DISPLAY@@QEAAJIII@Z @ 0x1C0215A70
 * Callers:
 *     DxgkHandleVideoParameters @ 0x1C02951E8 (DxgkHandleVideoParameters.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0003548 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00038F0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00051D8 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008610 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?SetCopyProtection@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C00EC3E0 (-SetCopyProtection@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?FindCopyProtection@ADAPTER_DISPLAY@@QEAAPEAVDXGCOPYPROTECTION@@IIPEAVDXGPROCESS@@@Z @ 0x1C0213158 (-FindCopyProtection@ADAPTER_DISPLAY@@QEAAPEAVDXGCOPYPROTECTION@@IIPEAVDXGPROCESS@@@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::UpdateCopyProtection(DXGADAPTER **this, unsigned int a2, int a3, unsigned int a4)
{
  __int64 v5; // r14
  __int64 v7; // rbp
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  struct DXGPROCESS *Current; // rbx
  __int64 v16; // rax
  struct _KTHREAD *CurrentThread; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  struct DXGCOPYPROTECTION *CopyProtection; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  struct DXGCOPYPROTECTION *v24; // rdi
  _QWORD *v25; // rax
  unsigned int v26; // ebx
  __int64 v27; // rdx
  int v28; // ebx
  int v29; // eax
  _BYTE v31[40]; // [rsp+20h] [rbp-28h] BYREF

  v5 = a4;
  v7 = a2;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this[2]) )
  {
    v12 = WdLogNewEntry5_WdAssertion(v9, v8);
    *(_QWORD *)(v12 + 24) = 5340LL;
    WdLogEvent5_WdAssertion(v12);
  }
  Current = DXGPROCESS::GetCurrent(v9, v8, v10, v11);
  if ( !Current )
  {
    v16 = WdLogNewEntry5_WdAssertion(v14, v13);
    *(_QWORD *)(v16 + 24) = 5343LL;
    WdLogEvent5_WdAssertion(v16);
  }
  CurrentThread = KeGetCurrentThread();
  v18 = *((_QWORD *)Current + 42);
  if ( *(struct _KTHREAD **)(v18 + 16) != CurrentThread )
  {
    v19 = WdLogNewEntry5_WdAssertion(v18, CurrentThread);
    *(_QWORD *)(v19 + 24) = 5344LL;
    WdLogEvent5_WdAssertion(v19);
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v31, (struct DXGFASTMUTEX *const)(this + 3), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v31);
  CopyProtection = ADAPTER_DISPLAY::FindCopyProtection((ADAPTER_DISPLAY *)this, v7, v5, Current);
  v24 = CopyProtection;
  if ( CopyProtection )
  {
    v28 = *((_DWORD *)CopyProtection + 14);
    *((_DWORD *)CopyProtection + 14) = a3;
    v29 = ADAPTER_DISPLAY::SetCopyProtection(this, v21);
    if ( v29 < 0 )
      *((_DWORD *)v24 + 14) = v28;
    v26 = v29;
  }
  else
  {
    v25 = (_QWORD *)WdLogNewEntry5_WdWarning(v22, v21, v23);
    v25[4] = Current;
    v26 = -1073741811;
    v25[6] = -1073741811LL;
    v25[3] = v5;
    v25[5] = v7;
    WdLogEvent5_WdWarning(v25);
  }
  if ( v31[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v31, v27);
  return v26;
}
