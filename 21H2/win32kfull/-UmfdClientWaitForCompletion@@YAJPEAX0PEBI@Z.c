/*
 * XREFs of ?UmfdClientWaitForCompletion@@YAJPEAX0PEBI@Z @ 0x1C02DF128
 * Callers:
 *     ?UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z @ 0x1C009A610 (-UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z.c)
 *     UmfdQueryFontData @ 0x1C00F3A10 (UmfdQueryFontData.c)
 * Callees:
 *     ?WaitForCompletionAndReleaseWorkItem@CMultipleConsumerWorkQueue@@QEAA_NQEAVCWaitableWorkItem@1@PEBIPEA_N@Z @ 0x1C00F3D30 (-WaitForCompletionAndReleaseWorkItem@CMultipleConsumerWorkQueue@@QEAA_NQEAVCWaitableWorkItem@1@P.c)
 */

__int64 __fastcall UmfdClientWaitForCompletion(
        CMultipleConsumerWorkQueue *a1,
        struct CMultipleConsumerWorkQueue::CWaitableWorkItem **a2,
        const unsigned int *a3)
{
  struct CMultipleConsumerWorkQueue::CWaitableWorkItem *v4; // rdx
  __int64 result; // rax
  bool v6; // [rsp+30h] [rbp+8h] BYREF

  v4 = *a2;
  if ( !v4 )
    return 3221225485LL;
  v6 = 0;
  if ( CMultipleConsumerWorkQueue::WaitForCompletionAndReleaseWorkItem(a1, v4, a3, &v6) )
  {
    result = 0LL;
  }
  else
  {
    if ( v6 )
      return 258LL;
    result = 3221225473LL;
  }
  *a2 = 0LL;
  return result;
}
