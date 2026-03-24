/*
 * XREFs of ?CheckForWorkerThreadHang@CComputeScribbleScheduler@@AEBA_NI@Z @ 0x1801A4148
 * Callers:
 *     ?Schedule@CComputeScribbleScheduler@@AEAAJAEBUScribbleFrame@1@@Z @ 0x1801A4EB4 (-Schedule@CComputeScribbleScheduler@@AEAAJAEBUScribbleFrame@1@@Z.c)
 * Callees:
 *     ??C?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@VCMegaRect@@@std@@@std@@@std@@QEBAPEAVCMegaRect@@XZ @ 0x1800EF794 (--C-$_Deque_iterator@V-$_Deque_val@U-$_Deque_simple_types@VCMegaRect@@@std@@@std@@@std@@QEBAPEAV.c)
 */

char __fastcall CComputeScribbleScheduler::CheckForWorkerThreadHang(__int64 **this, int a2)
{
  char v2; // r9
  int v3; // r8d
  __int64 v4; // rax
  int v5; // r10d
  __int64 *v7[5]; // [rsp+20h] [rbp-28h] BYREF

  v2 = 0;
  v7[2] = this[15];
  v3 = a2 - *((_DWORD *)this + 34);
  v7[0] = this[12];
  v7[1] = 0LL;
  if ( v3 > 5 )
  {
    v4 = std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<CMegaRect>>>::operator->(v7);
    if ( v5 - *(_DWORD *)(v4 + 16) > 5 )
      return 1;
  }
  return v2;
}
