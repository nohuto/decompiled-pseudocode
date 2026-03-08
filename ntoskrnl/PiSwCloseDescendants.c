/*
 * XREFs of PiSwCloseDescendants @ 0x1408672DC
 * Callers:
 *     PiSwIrpCleanup @ 0x140807E94 (PiSwIrpCleanup.c)
 *     PiSwCloseDescendants @ 0x1408672DC (PiSwCloseDescendants.c)
 *     PiSwProcessParentRemoveIrp @ 0x140867324 (PiSwProcessParentRemoveIrp.c)
 * Callees:
 *     McTemplateK0z_EtwWriteTransfer @ 0x14055EEE8 (McTemplateK0z_EtwWriteTransfer.c)
 *     PiSwFindBusRelations @ 0x140688540 (PiSwFindBusRelations.c)
 *     PiSwCloseDescendants @ 0x1408672DC (PiSwCloseDescendants.c)
 *     PiSwCloseDevice @ 0x140964150 (PiSwCloseDevice.c)
 */

int __fastcall PiSwCloseDescendants(__int64 a1, char a2)
{
  _QWORD *BusRelations; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  _QWORD *v8; // rdi
  _QWORD **v9; // rdi
  _QWORD *v10; // rbx
  _QWORD *v11; // rsi

  BusRelations = PiSwFindBusRelations(a1);
  v8 = BusRelations;
  if ( BusRelations )
  {
    if ( (byte_140C0E10C & 8) != 0 )
      LODWORD(BusRelations) = McTemplateK0z_EtwWriteTransfer(
                                v6,
                                (const EVENT_DESCRIPTOR *)KMPnPEvt_SwDevice_CloseDescendants,
                                v7,
                                *(const wchar_t **)(a1 + 8));
    v9 = (_QWORD **)(v8 + 2);
    v10 = *v9;
    while ( v10 != v9 )
    {
      v11 = v10 - 12;
      v10 = (_QWORD *)*v10;
      LODWORD(BusRelations) = *((_DWORD *)v11 + 1);
      if ( ((unsigned __int8)BusRelations & 1) == 0 )
      {
        if ( !a2 || (BusRelations = v11 + 16, (_QWORD *)*BusRelations == BusRelations) )
        {
          LOBYTE(v5) = a2;
          PiSwCloseDescendants(v11 + 9, v5);
          LODWORD(BusRelations) = PiSwCloseDevice(v11);
        }
      }
    }
  }
  return (int)BusRelations;
}
