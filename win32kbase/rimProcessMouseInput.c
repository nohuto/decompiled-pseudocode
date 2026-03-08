/*
 * XREFs of rimProcessMouseInput @ 0x1C00F0EA4
 * Callers:
 *     rimProcessDeviceBufferAndStartRead @ 0x1C0003AE4 (rimProcessDeviceBufferAndStartRead.c)
 * Callees:
 *     rimStackAttachAndProcessInput @ 0x1C00044C4 (rimStackAttachAndProcessInput.c)
 */

void __fastcall rimProcessMouseInput(__int64 a1, __int64 a2)
{
  int v3; // eax

  if ( (*(_QWORD *)(a1 + 832) || *(_DWORD *)(a1 + 1056))
    && (v3 = *(_DWORD *)(a2 + 184), (v3 & 0x2000) != 0)
    && (v3 & 0x80000) != 0
    && (v3 & 0x1000000) == 0 )
  {
    if ( (v3 & 0x400000) == 0 )
    {
      *(_DWORD *)(a2 + 184) = v3 | 0x400000;
      ZwSetEvent(*(HANDLE *)(a1 + 344), 0LL);
    }
    *(_BYTE *)(a1 + 776) = 1;
  }
  else
  {
    rimStackAttachAndProcessInput(a1, a2, a2 + 468, a2 + 256, 0);
  }
}
