/*
 * XREFs of ?TryGetPointer@SemaphoreValue@details_abi@wil@@SAJPEBGPEAPEAX@Z @ 0x180040384
 * Callers:
 *     ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x180009F34 (-Acquire@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 *     ?Acquire@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x1800511E0 (-Acquire@-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800066B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z @ 0x1800403E8 (-TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z.c)
 */

__int64 __fastcall wil::details_abi::SemaphoreValue::TryGetPointer(
        const unsigned __int16 *a1,
        void **a2,
        __int64 a3,
        bool *a4)
{
  unsigned __int64 v4; // rdi
  int ValueInternal; // eax
  int v7; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  unsigned __int64 v10; // [rsp+38h] [rbp+10h] BYREF

  *a2 = 0LL;
  v4 = 0LL;
  v10 = 0LL;
  ValueInternal = wil::details_abi::SemaphoreValue::TryGetValueInternal(a1, (bool)a2, &v10, a4);
  v7 = ValueInternal;
  if ( ValueInternal < 0 )
  {
    wil::details::in1diag3::Return_Hr(retaddr, (void *)0x62, (__int64)"wil", (const char *)(unsigned int)ValueInternal);
  }
  else
  {
    v4 = v10;
    v7 = 0;
  }
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(retaddr, (void *)0x6B, (__int64)"wil", (const char *)(unsigned int)v7);
    return (unsigned int)v7;
  }
  else
  {
    *a2 = (void *)(4 * v4);
    return 0LL;
  }
}
