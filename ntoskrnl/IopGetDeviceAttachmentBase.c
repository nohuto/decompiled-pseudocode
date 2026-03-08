/*
 * XREFs of IopGetDeviceAttachmentBase @ 0x140240028
 * Callers:
 *     IopGetDevicePDO @ 0x14023FFC4 (IopGetDevicePDO.c)
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x140240954 (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     IopCompleteUnloadOrDelete @ 0x1402F0CC4 (IopCompleteUnloadOrDelete.c)
 *     IopAttachDeviceToDeviceStackSafe @ 0x1402F3E44 (IopAttachDeviceToDeviceStackSafe.c)
 *     IopVerifyDriverObjectOnStack @ 0x1405541A8 (IopVerifyDriverObjectOnStack.c)
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
