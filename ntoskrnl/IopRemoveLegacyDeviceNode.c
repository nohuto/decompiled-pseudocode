/*
 * XREFs of IopRemoveLegacyDeviceNode @ 0x140801EC8
 * Callers:
 *     IopLegacyResourceAllocation @ 0x140801DA4 (IopLegacyResourceAllocation.c)
 * Callees:
 *     IoDeleteDevice @ 0x140368010 (IoDeleteDevice.c)
 *     PipClearDevNodeFlags @ 0x14068816C (PipClearDevNodeFlags.c)
 *     IopDestroyDeviceNode @ 0x140782FD0 (IopDestroyDeviceNode.c)
 */

void __fastcall IopRemoveLegacyDeviceNode(__int64 a1, char *a2)
{
  _QWORD *v4; // rcx
  __int64 v5; // rax
  struct _DEVICE_OBJECT *v6; // rdi
  _QWORD *v7; // rcx

  if ( a1 )
  {
    if ( (*(_DWORD *)(a1 + 48) & 0x1000) != 0 )
      return;
  }
  else
  {
    if ( !*((_QWORD *)a2 + 54) )
      return;
    *((_QWORD *)a2 + 54) = 0LL;
    v4 = (_QWORD *)*((_QWORD *)a2 + 1);
    if ( v4 )
      *v4 = *(_QWORD *)a2;
    if ( *(_QWORD *)a2 )
      *(_QWORD *)(*(_QWORD *)a2 + 8LL) = *((_QWORD *)a2 + 1);
    if ( (char *)IopLegacyDeviceNode == a2 )
      IopLegacyDeviceNode = *(_QWORD *)a2;
  }
  v5 = *((_QWORD *)a2 + 66);
  while ( v5 )
  {
    v7 = (_QWORD *)(v5 + 536);
    v5 = *(_QWORD *)(v5 + 536);
    if ( (char *)v5 == a2 )
    {
      *v7 = *((_QWORD *)a2 + 67);
      break;
    }
  }
  *((_QWORD *)a2 + 3) = 0LL;
  *((_QWORD *)a2 + 1) = 0LL;
  *(_QWORD *)a2 = 0LL;
  *((_QWORD *)a2 + 2) = 0LL;
  v6 = (struct _DEVICE_OBJECT *)*((_QWORD *)a2 + 4);
  PipClearDevNodeFlags((__int64)a2, 0x20000);
  IopDestroyDeviceNode(a2);
  if ( !a1 )
  {
    v6->DriverObject = PnpDriverObject;
    IoDeleteDevice(v6);
  }
}
