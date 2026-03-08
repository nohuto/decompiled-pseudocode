/*
 * XREFs of HalpTimerTestHypervisorTimer @ 0x140508908
 * Callers:
 *     HalpTimerInitializeHypervisorTimer @ 0x1403B13E0 (HalpTimerInitializeHypervisorTimer.c)
 * Callees:
 *     KeStallExecutionProcessor @ 0x14022B710 (KeStallExecutionProcessor.c)
 *     HalpSetTimer @ 0x1402CBEE0 (HalpSetTimer.c)
 *     HalpTimerConfigureInterrupt @ 0x140379C34 (HalpTimerConfigureInterrupt.c)
 *     HalpInterruptSetIdtEntry @ 0x140379F10 (HalpInterruptSetIdtEntry.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     HalpTimerUnmapInterrupt @ 0x1405074D0 (HalpTimerUnmapInterrupt.c)
 */

__int64 __fastcall HalpTimerTestHypervisorTimer(__int64 a1, bool *a2, __int64 a3, __int64 a4)
{
  _DWORD *v5; // rdi
  int v7; // esi
  __int64 v8; // r9
  int v9; // ebp
  __int64 v10; // r9
  char v11; // bp
  unsigned int v12; // esi
  __int64 v13; // r9
  int v14; // eax
  __int128 v16; // [rsp+40h] [rbp-38h] BYREF
  unsigned __int64 v17; // [rsp+80h] [rbp+8h] BYREF

  v5 = (_DWORD *)(a1 + 184);
  while ( 1 )
  {
    v17 = 0LL;
    *((_QWORD *)&v16 + 1) = (unsigned __int16)((unsigned int)KiProcessorIndexToNumberMappingTable[0] >> 6);
    *(_QWORD *)&v16 = 1LL << (KiProcessorIndexToNumberMappingTable[0] & 0x3F);
    v7 = HalpTimerConfigureInterrupt(a1, 0xD4u, 15, a4, -1LL, 0, &v16, (__int64)xHalQueryIoPortAccessSupported);
    if ( v7 < 0 )
      break;
    *(_DWORD *)(a1 + 64) = 0;
    HalpInterruptSetIdtEntry(0xD4u, (int)HalpTimerHypervisorInterruptStub, 15, v8, -1LL);
    v9 = 0;
    while ( 1 )
    {
      v7 = HalpSetTimer(a1, 3, 0x2710uLL, 1, &v17);
      if ( v7 >= 0 )
        break;
      if ( (unsigned int)++v9 >= 0xA )
      {
        (*(void (__fastcall **)(_QWORD))(a1 + 136))(*(_QWORD *)(a1 + 72));
        HalpInterruptSetIdtEntry(0xD4u, (int)xHalQueryIoPortAccessSupported, 15, v10, -1LL);
        goto LABEL_19;
      }
    }
    v11 = 0;
    v12 = 0;
    while ( 1 )
    {
      KeStallExecutionProcessor(0x3E8u);
      ++v12;
      if ( *(_DWORD *)(a1 + 64) )
        break;
      if ( v12 >= 0x64 )
        goto LABEL_12;
    }
    v11 = 1;
LABEL_12:
    (*(void (__fastcall **)(_QWORD))(a1 + 136))(*(_QWORD *)(a1 + 72));
    HalpInterruptSetIdtEntry(0xD4u, (int)xHalQueryIoPortAccessSupported, 15, v13, -1LL);
    v14 = *(_DWORD *)(a1 + 184) & 0x10;
    if ( v11 )
    {
      v7 = 0;
      *a2 = v14 != 0;
      goto LABEL_18;
    }
    if ( !v14 || (*(_DWORD *)(a1 + 224) & 0xB00) == 0 )
    {
      v7 = -1073741823;
LABEL_18:
      v5 = (_DWORD *)(a1 + 184);
      break;
    }
    HalpTimerUnmapInterrupt(a1, 212, 0, 0);
    *(_DWORD *)(a1 + 224) &= ~0x400u;
  }
LABEL_19:
  if ( (*v5 & 0x40) != 0 )
    HalpTimerUnmapInterrupt(a1, 212, 0, 0);
  return (unsigned int)v7;
}
