/*
 * XREFs of IopGetDeviceAttachmentBase @ 0x140302A1C
 * Callers:
 *     IopGetDevicePDO @ 0x1403029B8 (IopGetDevicePDO.c)
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x140302A88 (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     IopCompleteUnloadOrDelete @ 0x140305300 (IopCompleteUnloadOrDelete.c)
 *     IopAttachDeviceToDeviceStackSafe @ 0x14035F2C4 (IopAttachDeviceToDeviceStackSafe.c)
 *     IopVerifyDriverObjectOnStack @ 0x140556648 (IopVerifyDriverObjectOnStack.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IopGetDeviceAttachmentBase(__int64 a1)
{
  __int64 v1; // rdx
  __int64 i; // rcx

  v1 = a1;
  for ( i = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 48LL); i; i = *(_QWORD *)(*(_QWORD *)(i + 312) + 48LL) )
    v1 = i;
  return v1;
}
