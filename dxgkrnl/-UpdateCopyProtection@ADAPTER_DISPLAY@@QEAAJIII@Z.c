/*
 * XREFs of ?UpdateCopyProtection@ADAPTER_DISPLAY@@QEAAJIII@Z @ 0x1C02BB31C
 * Callers:
 *     DxgkHandleVideoParameters @ 0x1C0391C6C (DxgkHandleVideoParameters.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070C4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008CE0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008F20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008FA8 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?SetCopyProtection@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C017A794 (-SetCopyProtection@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?FindCopyProtection@ADAPTER_DISPLAY@@QEAAPEAVDXGCOPYPROTECTION@@IIPEAVDXGPROCESS@@@Z @ 0x1C02B81E0 (-FindCopyProtection@ADAPTER_DISPLAY@@QEAAPEAVDXGCOPYPROTECTION@@IIPEAVDXGPROCESS@@@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::UpdateCopyProtection(DXGADAPTER **this, unsigned int a2, int a3, unsigned int a4)
{
  __int64 v5; // r14
  __int64 v7; // rsi
  __int64 v8; // rcx
  struct _KTHREAD **Current; // rdi
  struct DXGCOPYPROTECTION *CopyProtection; // rax
  unsigned int v11; // edx
  struct DXGCOPYPROTECTION *v12; // rbx
  unsigned int v13; // ebx
  int v14; // edi
  int v15; // eax
  _BYTE v17[16]; // [rsp+50h] [rbp-28h] BYREF

  v5 = a4;
  v7 = a2;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this[2]) )
  {
    WdLogSingleEntry1(1LL, 5645LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsCoreResourceSharedOwner()", 5645LL, 0LL, 0LL, 0LL, 0LL);
  }
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v8);
  if ( !Current )
  {
    WdLogSingleEntry1(1LL, 5648LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pProcess != NULL", 5648LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( Current[50] != KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 5649LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pProcess->IsCopyProtectionMutexOwner()",
      5649LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v17, (struct DXGFASTMUTEX *const)(this + 4), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v17);
  CopyProtection = ADAPTER_DISPLAY::FindCopyProtection((ADAPTER_DISPLAY *)this, v7, v5, (struct DXGPROCESS *)Current);
  v12 = CopyProtection;
  if ( CopyProtection )
  {
    v14 = *((_DWORD *)CopyProtection + 14);
    *((_DWORD *)CopyProtection + 14) = a3;
    v15 = ADAPTER_DISPLAY::SetCopyProtection(this, v11);
    if ( v15 < 0 )
      *((_DWORD *)v12 + 14) = v14;
    v13 = v15;
  }
  else
  {
    v13 = -1073741811;
    WdLogSingleEntry4(3LL, v5, Current, v7, -1073741811LL);
  }
  if ( v17[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v17);
  return v13;
}
