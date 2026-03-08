/*
 * XREFs of HMDestroyUnlockedObject @ 0x1C01538C0
 * Callers:
 *     ?DestroyHandleSecondPass@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1C015C200 (-DestroyHandleSecondPass@@YAXPEAU_HANDLEENTRY@@@Z.c)
 *     UserDeleteBaseWindowHandle @ 0x1C017C760 (UserDeleteBaseWindowHandle.c)
 * Callees:
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x1C004F968 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 *     ?HMDestroyUnlockedObjectWorker@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1C0076074 (-HMDestroyUnlockedObjectWorker@@YAXPEAU_HANDLEENTRY@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall HMDestroyUnlockedObject(struct _HANDLEENTRY *a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( !gbInDestroyHandleTableObjects && !IS_USERCRIT_OWNED_EXCLUSIVE((__int64)a1, a2, a3, a4) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3635);
  HMDestroyUnlockedObjectWorker(a1, a2, a3, a4);
}
