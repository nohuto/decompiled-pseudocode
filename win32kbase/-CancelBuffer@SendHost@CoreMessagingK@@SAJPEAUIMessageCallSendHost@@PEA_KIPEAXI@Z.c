/*
 * XREFs of ?CancelBuffer@SendHost@CoreMessagingK@@SAJPEAUIMessageCallSendHost@@PEA_KIPEAXI@Z @ 0x1C0273F30
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@BufferCache@CoreMessagingK@@SAXPEAX@Z @ 0x1C008186C (-Free@BufferCache@CoreMessagingK@@SAXPEAX@Z.c)
 */

__int64 __fastcall CoreMessagingK::SendHost::CancelBuffer(
        struct IMessageCallSendHost *a1,
        unsigned __int64 *a2,
        __int64 a3,
        char *a4)
{
  CoreMessagingK::BufferCache::Free(a4 - 80);
  return 0LL;
}
