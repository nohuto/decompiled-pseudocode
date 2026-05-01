/*
 * XREFs of ??$create_task@PE$AAU?$IAsyncOperation@_N@Foundation@Windows@@@Concurrency@@YA?AV?$task@_N@0@PE$AAU?$IAsyncOperation@_N@Foundation@Windows@@Vtask_options@0@@Z @ 0x1803937F8
 * Callers:
 *     _lambda_152963d5211cf6149a80abe334e76dfa_::operator() @ 0x180394A9C (_lambda_152963d5211cf6149a80abe334e76dfa_--operator().c)
 * Callees:
 *     ?_Tidy@?$vector@PEAXV?$allocator@PEAX@std@@@std@@AEAAXXZ @ 0x1800EE45C (-_Tidy@-$vector@PEAXV-$allocator@PEAX@std@@@std@@AEAAXXZ.c)
 *     ??$?0PE$AAU?$IAsyncOperation@_N@Foundation@Windows@@@?$task@_N@Concurrency@@QEAA@PE$AAU?$IAsyncOperation@_N@Foundation@Windows@@AEBVtask_options@1@@Z @ 0x180392558 (--$-0PE$AAU-$IAsyncOperation@_N@Foundation@Windows@@@-$task@_N@Concurrency@@QEAA@PE$AAU-$IAsyncO.c)
 *     ??1task_options@Concurrency@@QEAA@XZ @ 0x180394A48 (--1task_options@Concurrency@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall Concurrency::create_task<Windows::Foundation::IAsyncOperation<bool> __gc *>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  __int128 v7; // [rsp+28h] [rbp-20h] BYREF
  __int64 v8; // [rsp+38h] [rbp-10h]
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h]

  v7 = 0LL;
  v8 = 0LL;
  *(_BYTE *)(a3 + 48) = 1;
  *(_QWORD *)(a3 + 56) = retaddr;
  if ( (__int128 *)(a3 + 64) != &v7 )
    *(_QWORD *)(a3 + 72) = *(_QWORD *)(a3 + 64);
  std::vector<void *>::_Tidy((__int64)&v7);
  Concurrency::task<bool>::task<bool>(a1, a2, a3);
  Concurrency::task_options::~task_options((Concurrency::task_options *)a3);
  return a1;
}
