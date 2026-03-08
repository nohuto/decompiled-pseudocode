/*
 * XREFs of NotifyExternalTranslationInterfaceChange @ 0x1C0084460
 * Callers:
 *     <none>
 * Callees:
 *     DeleteExternalTranslatorInterface @ 0x1C00841EC (DeleteExternalTranslatorInterface.c)
 */

__int64 __fastcall NotifyExternalTranslationInterfaceChange(char *NotificationStructure, PVOID Context)
{
  __int64 v2; // rax

  v2 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data1;
  if ( !v2 )
    v2 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data4;
  if ( !v2 )
    DeleteExternalTranslatorInterface();
  return 0LL;
}
