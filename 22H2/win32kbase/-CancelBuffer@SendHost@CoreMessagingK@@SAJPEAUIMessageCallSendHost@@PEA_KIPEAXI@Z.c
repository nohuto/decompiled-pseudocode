/*
 * XREFs of ?CancelBuffer@SendHost@CoreMessagingK@@SAJPEAUIMessageCallSendHost@@PEA_KIPEAXI@Z @ 0x1C01FF320
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@BufferCache@CoreMessagingK@@SAXPEAX@Z @ 0x1C004E3D4 (-Free@BufferCache@CoreMessagingK@@SAXPEAX@Z.c)
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
