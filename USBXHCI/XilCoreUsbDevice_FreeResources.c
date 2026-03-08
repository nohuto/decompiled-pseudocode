/*
 * XREFs of XilCoreUsbDevice_FreeResources @ 0x1C0052FC4
 * Callers:
 *     XilCoreUsbDevice_Create @ 0x1C001BA28 (XilCoreUsbDevice_Create.c)
 *     XilUsbDevice_FreeResources @ 0x1C004814C (XilUsbDevice_FreeResources.c)
 * Callees:
 *     CommonBuffer_ReleaseBuffer @ 0x1C001E754 (CommonBuffer_ReleaseBuffer.c)
 */

void __fastcall XilCoreUsbDevice_FreeResources(_QWORD *a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rdi
  __int64 v5; // rdx

  if ( *a1 )
  {
    v2 = a1[1];
    v3 = a1[3];
    v4 = *(_QWORD *)(v2 + 120);
    if ( v3 )
    {
      CommonBuffer_ReleaseBuffer(*(_QWORD *)(v2 + 120), v3);
      a1[3] = 0LL;
    }
    v5 = a1[4];
    if ( v5 )
    {
      CommonBuffer_ReleaseBuffer(v4, v5);
      a1[4] = 0LL;
    }
  }
}
