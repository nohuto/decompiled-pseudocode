/*
 * XREFs of ??$invoke@P6AXPEAU_KEY_BASIC_INFORMATION@@@ZAEAPEAU1@@wistd@@YAX$$QEAP6AXPEAU_KEY_BASIC_INFORMATION@@@ZAEAPEAU1@@Z @ 0x1C0028854
 * Callers:
 *     AdjustCcdDatabasePermissions @ 0x1C02F02A0 (AdjustCcdDatabasePermissions.c)
 *     CheckCallerMatchesSid @ 0x1C02F09BC (CheckCallerMatchesSid.c)
 *     CreateServiceSid @ 0x1C02F0C38 (CreateServiceSid.c)
 *     DxgkPrepareCcdDatabaseForAccess @ 0x1C02F0D38 (DxgkPrepareCcdDatabaseForAccess.c)
 *     ?_ReadDisplayHdrSupportFromPnpRegistry@DXGMONITOR@@QEAAJPEA_N00@Z @ 0x1C02F5EC0 (-_ReadDisplayHdrSupportFromPnpRegistry@DXGMONITOR@@QEAAJPEA_N00@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wistd::invoke<void (*)(_KEY_BASIC_INFORMATION *),_KEY_BASIC_INFORMATION * &>(
        __int64 (__fastcall **a1)(_QWORD),
        _QWORD *a2)
{
  return (*a1)(*a2);
}
