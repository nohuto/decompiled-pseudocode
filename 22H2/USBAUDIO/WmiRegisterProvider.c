/*
 * XREFs of WmiRegisterProvider @ 0x1C002B888
 * Callers:
 *     DeviceCreate @ 0x1C0001C90 (DeviceCreate.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall WmiRegisterProvider(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(a1 + 16) + 448LL;
  if ( *(_QWORD *)(a1 + 16) != -448LL )
  {
    *(_DWORD *)v1 = 4;
    *(_QWORD *)(v1 + 8) = &WmiGuidList;
    *(_QWORD *)(v1 + 16) = WmiQueryRegInfo;
    *(_QWORD *)(v1 + 24) = WmiQueryDataBlock;
    *(_QWORD *)(v1 + 32) = 0LL;
    *(_QWORD *)(v1 + 40) = 0LL;
    *(_QWORD *)(v1 + 48) = 0LL;
    *(_QWORD *)(v1 + 56) = WmiFunctionControl;
  }
  return IoWMIRegistrationControl(*(PDEVICE_OBJECT *)(a1 + 24), 1u);
}
