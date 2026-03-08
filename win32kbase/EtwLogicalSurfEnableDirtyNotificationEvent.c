/*
 * XREFs of EtwLogicalSurfEnableDirtyNotificationEvent @ 0x1C00CC390
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0px_EtwWriteTransfer @ 0x1C0165E44 (McTemplateK0px_EtwWriteTransfer.c)
 */

__int64 __fastcall EtwLogicalSurfEnableDirtyNotificationEvent(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 1) != 0 )
    return McTemplateK0px_EtwWriteTransfer(a1, &LogicalSurfEnableDirtyNotificationEvent, a3, a1, a2);
  return result;
}
