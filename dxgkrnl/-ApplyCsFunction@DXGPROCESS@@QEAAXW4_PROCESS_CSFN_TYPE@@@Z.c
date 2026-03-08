/*
 * XREFs of ?ApplyCsFunction@DXGPROCESS@@QEAAXW4_PROCESS_CSFN_TYPE@@@Z @ 0x1C0224554
 * Callers:
 *     ?IterateProcessAndApplyCSFn@DXGGLOBAL@@QEAAXW4_PROCESS_CSFN_TYPE@@@Z @ 0x1C02E1728 (-IterateProcessAndApplyCSFn@DXGGLOBAL@@QEAAXW4_PROCESS_CSFN_TYPE@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C01BCB60 (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 */

char __fastcall DXGPROCESS::ApplyCsFunction(__int64 a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rax
  struct DXGGLOBAL *Global; // rax
  __int64 v7; // [rsp+50h] [rbp-18h] BYREF
  int v8; // [rsp+58h] [rbp-10h]
  int v9; // [rsp+5Ch] [rbp-Ch]

  CurrentThread = KeGetCurrentThread();
  if ( *(struct _KTHREAD **)(a1 + 128) != CurrentThread )
  {
    WdLogSingleEntry1(1LL, 5476LL);
    LOBYTE(CurrentThread) = DxgkLogInternalTriageEvent(
                              0LL,
                              262146,
                              -1,
                              (__int64)L"IsMutexOwner()",
                              5476LL,
                              0LL,
                              0LL,
                              0LL,
                              0LL);
  }
  if ( *(_DWORD *)(a1 + 40) == 1 )
  {
    v9 = 0;
    v7 = a1;
    v8 = a2;
    Global = DXGGLOBAL::GetGlobal();
    LOBYTE(CurrentThread) = DXGGLOBAL::IterateAdaptersWithCallback(
                              (__int64)Global,
                              (__int64 (__fastcall *)(_QWORD *, __int64))ApplyCsFunctionAdapterCallback,
                              (__int64)&v7,
                              2);
  }
  return (char)CurrentThread;
}
