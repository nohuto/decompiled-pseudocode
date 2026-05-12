/*
 * XREFs of StorPortAdapterDirectedPowerDownCompletion @ 0x1C0040420
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x1C00372A0 (McTemplateK0pqq_EtwWriteTransfer.c)
 */

void __fastcall StorPortAdapterDirectedPowerDownCompletion(
        PDEVICE_OBJECT DeviceObject,
        __int64 MinorFunction,
        __int64 PowerState,
        _BYTE *Context)
{
  bool v5; // sf
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // r8
  int v10; // [rsp+20h] [rbp-18h]
  int v11; // [rsp+28h] [rbp-10h]

  Context[108] &= ~2u;
  v5 = (char)Context[108] < 0;
  v6 = *((_QWORD *)Context + 636);
  *((_QWORD *)Context + 682) = MEMORY[0xFFFFF78000000008];
  v7 = *(_DWORD *)(v6 + 20);
  if ( v5 )
  {
    *(_DWORD *)(v6 + 20) = v7 | 0x20;
    if ( !*((_QWORD *)Context + 681) )
      *((_QWORD *)Context + 681) = *((_QWORD *)Context + 682);
  }
  else
  {
    *(_DWORD *)(v6 + 20) = v7 & 0xFFFFFFDF;
  }
  PoFxCompleteDirectedPowerDown(**((_QWORD **)Context + 636), MinorFunction, PowerState);
  if ( StorEtwLoggingEnabled && (byte_1C0069841 & 1) != 0 )
  {
    v11 = 1;
    v10 = *((_DWORD *)Context + 14);
    McTemplateK0pqq_EtwWriteTransfer(v8, &EventAdapterDirectedPowerDownStop, v9, **((_QWORD **)Context + 636), v10, v11);
  }
  Context[110] |= 0x20u;
}
