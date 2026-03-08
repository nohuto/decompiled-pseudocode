/*
 * XREFs of XilCommonBuffer_AcquireBufferEx @ 0x1C001BAFC
 * Callers:
 *     XilEndpoint_AcquireBuffer @ 0x1C001B9F0 (XilEndpoint_AcquireBuffer.c)
 *     XilCoreUsbDevice_Create @ 0x1C001BA28 (XilCoreUsbDevice_Create.c)
 *     XilEndpoint_AllocateStreamContextArray @ 0x1C0038BDC (XilEndpoint_AllocateStreamContextArray.c)
 *     Interrupter_PrepareInterrupter @ 0x1C007275C (Interrupter_PrepareInterrupter.c)
 * Callees:
 *     CommonBuffer_AcquireBuffer @ 0x1C0013038 (CommonBuffer_AcquireBuffer.c)
 *     CommonBuffer_AcquireSecureBuffer @ 0x1C00321B8 (CommonBuffer_AcquireSecureBuffer.c)
 *     CommonBuffer_AcquireShadowBuffer @ 0x1C003229C (CommonBuffer_AcquireShadowBuffer.c)
 */

__int64 __fastcall XilCommonBuffer_AcquireBufferEx(
        struct _KEVENT *a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        int a5)
{
  switch ( a5 )
  {
    case 1:
      return CommonBuffer_AcquireBuffer(a1, a2, a3, a4);
    case 2:
      return CommonBuffer_AcquireShadowBuffer(a2, a3, a4);
    case 3:
      return CommonBuffer_AcquireSecureBuffer();
  }
  return 0LL;
}
