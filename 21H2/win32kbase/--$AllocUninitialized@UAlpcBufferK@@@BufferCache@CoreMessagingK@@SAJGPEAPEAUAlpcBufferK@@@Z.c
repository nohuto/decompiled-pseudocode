/*
 * XREFs of ??$AllocUninitialized@UAlpcBufferK@@@BufferCache@CoreMessagingK@@SAJGPEAPEAUAlpcBufferK@@@Z @ 0x1C00B105C
 * Callers:
 *     ?SubmitBuffer@SendHost@CoreMessagingK@@SAJPEAUIMessageCallSendHost@@PEA_KIPEAXI@Z @ 0x1C00B0E20 (-SubmitBuffer@SendHost@CoreMessagingK@@SAJPEAUIMessageCallSendHost@@PEA_KIPEAXI@Z.c)
 *     ?AllocateBuffer@SendHost@CoreMessagingK@@SAJPEAUIMessageCallSendHost@@PEA_KIIPEAPEAX@Z @ 0x1C00B0F70 (-AllocateBuffer@SendHost@CoreMessagingK@@SAJPEAUIMessageCallSendHost@@PEA_KIIPEAPEAX@Z.c)
 * Callees:
 *     ?AllocUninitialized@BufferCache@CoreMessagingK@@CAJGPEAPEAX@Z @ 0x1C003BBEC (-AllocUninitialized@BufferCache@CoreMessagingK@@CAJGPEAPEAX@Z.c)
 */

__int64 __fastcall CoreMessagingK::BufferCache::AllocUninitialized<AlpcBufferK>(unsigned __int16 a1, void **a2)
{
  __int64 result; // rax
  void *v4; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0LL;
  result = CoreMessagingK::BufferCache::AllocUninitialized(a1, &v4);
  if ( (int)result >= 0 )
    *a2 = v4;
  return result;
}
