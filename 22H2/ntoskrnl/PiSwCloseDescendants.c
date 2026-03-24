/*
 * XREFs of PiSwCloseDescendants @ 0x14074BCE8
 * Callers:
 *     PiSwProcessParentRemoveIrp @ 0x14074BC04 (PiSwProcessParentRemoveIrp.c)
 *     PiSwCloseDescendants @ 0x14074BCE8 (PiSwCloseDescendants.c)
 *     PiSwIrpCleanup @ 0x1407734BC (PiSwIrpCleanup.c)
 * Callees:
 *     PiSwIsPdoAssociationsEmpty @ 0x1405CEF0C (PiSwIsPdoAssociationsEmpty.c)
 *     PiSwCloseDevice @ 0x140734D40 (PiSwCloseDevice.c)
 *     PiSwFindBusRelations @ 0x140743524 (PiSwFindBusRelations.c)
 *     PiSwCloseDescendants @ 0x14074BCE8 (PiSwCloseDescendants.c)
 */

void __fastcall PiSwCloseDescendants(__int64 a1, char a2)
{
  _QWORD *BusRelations; // rax
  __int64 v4; // rdx
  _QWORD *v5; // rdi
  _QWORD *v6; // rbx
  _DWORD *v7; // rsi

  BusRelations = PiSwFindBusRelations(a1);
  if ( BusRelations )
  {
    v5 = BusRelations + 2;
    v6 = (_QWORD *)BusRelations[2];
    while ( v6 != v5 )
    {
      v7 = v6 - 12;
      v6 = (_QWORD *)*v6;
      if ( (v7[1] & 1) == 0 && (!a2 || PiSwIsPdoAssociationsEmpty((__int64)v7)) )
      {
        LOBYTE(v4) = a2;
        PiSwCloseDescendants(v7 + 18, v4);
        PiSwCloseDevice(v7);
      }
    }
  }
}
