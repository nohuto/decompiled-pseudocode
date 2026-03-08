/*
 * XREFs of rimProcessKeyboardInput @ 0x1C0004290
 * Callers:
 *     rimProcessDeviceBufferAndStartRead @ 0x1C0003AE4 (rimProcessDeviceBufferAndStartRead.c)
 * Callees:
 *     rimStackAttachAndProcessInput @ 0x1C00044C4 (rimStackAttachAndProcessInput.c)
 */

NTSTATUS __fastcall rimProcessKeyboardInput(__int64 a1, __int64 a2)
{
  NTSTATUS result; // eax

  if ( !*(_QWORD *)(a1 + 832) && !*(_DWORD *)(a1 + 1056) )
    return rimStackAttachAndProcessInput(a1, a2, (int)a2 + 496, (int)a2 + 256, 0);
  result = *(_DWORD *)(a2 + 184);
  if ( (result & 0x2000) == 0 || (result & 0x80000) == 0 || (result & 0x1000000) != 0 )
    return rimStackAttachAndProcessInput(a1, a2, (int)a2 + 496, (int)a2 + 256, 0);
  if ( (result & 0x400000) == 0 )
  {
    *(_DWORD *)(a2 + 184) = result | 0x400000;
    result = ZwSetEvent(*(HANDLE *)(a1 + 344), 0LL);
  }
  *(_BYTE *)(a1 + 776) = 1;
  return result;
}
