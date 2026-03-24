/*
 * XREFs of rimExtractDigitizerPageButtonUsages @ 0x1C017A028
 * Callers:
 *     rimExtractPointerDeviceUsages @ 0x1C017A940 (rimExtractPointerDeviceUsages.c)
 * Callees:
 *     ?DbgPrintWarning@@YAXPEADZZ @ 0x1C0058AB4 (-DbgPrintWarning@@YAXPEADZZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset @ 0x1C00CF8C0 (memset.c)
 *     rimHidP_GetUsages @ 0x1C0163674 (rimHidP_GetUsages.c)
 */

__int64 __fastcall rimExtractDigitizerPageButtonUsages(
        __int64 a1,
        struct _HIDP_PREPARSED_DATA *a2,
        char *a3,
        unsigned int a4,
        __int64 a5)
{
  void *v5; // r15
  __int64 v6; // rbx
  unsigned int v8; // eax
  __int64 v12; // rcx
  int Usages; // ebp
  unsigned int v14; // edi
  bool i; // si
  int v16; // eax

  v5 = *(void **)(a1 + 768);
  v6 = a5;
  v8 = *(_DWORD *)(a1 + 984);
  LODWORD(a5) = v8;
  if ( !v5 )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 2798);
    v8 = a5;
  }
  memset(v5, 0, 2LL * v8);
  Usages = rimHidP_GetUsages(v12, 0xDu, *(_WORD *)(v6 + 58), (unsigned __int16 *)v5, (unsigned int *)&a5, a2, a3, a4);
  if ( Usages >= 0 )
  {
    v14 = 0;
    for ( i = (unsigned int)(*(_DWORD *)(a1 + 24) - 5) <= 1; v14 < (unsigned int)a5; ++v14 )
    {
      if ( v14 >= 6 )
        return (unsigned int)Usages;
      switch ( *((_WORD *)v5 + v14) )
      {
        case 0x32:
          *(_DWORD *)(v6 + 76) |= 0x1000002u;
          break;
        case 0x3C:
          if ( i )
            *(_DWORD *)(v6 + 160) |= 2u;
          continue;
        case 0x42:
          goto LABEL_21;
        case 0x44:
          if ( i )
            *(_DWORD *)(v6 + 160) |= 1u;
          continue;
        case 0x45:
          if ( i )
          {
            *(_DWORD *)(v6 + 160) |= 6u;
LABEL_21:
            v16 = *(_DWORD *)(v6 + 76) | 0x1000006;
            *(_DWORD *)(v6 + 76) = v16;
            if ( *(_DWORD *)(a1 + 24) != 7 )
              *(_DWORD *)(v6 + 76) = v16 | 0x10;
          }
          break;
        case 0x47:
          *(_DWORD *)(v6 + 76) |= 0x4000u;
          break;
        case 0x64:
          *(_DWORD *)(v6 + 76) |= 0x1000000u;
          break;
        case 0xFE:
          *(_DWORD *)(v6 + 208) = 1;
          DbgPrintWarning("Found TESTSYNCFLAG\n");
          break;
        case 0xFF:
          *(_DWORD *)(v6 + 212) = 1;
          DbgPrintWarning("Found TESTINJECTFLAG\n");
          break;
      }
    }
  }
  return (unsigned int)Usages;
}
