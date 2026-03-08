/*
 * XREFs of rimExtractDigitizerPageButtonUsages @ 0x1C01D6EB4
 * Callers:
 *     rimExtractPointerDeviceUsages @ 0x1C01D78A0 (rimExtractPointerDeviceUsages.c)
 * Callees:
 *     ?DbgPrintWarning@@YAXPEADZZ @ 0x1C0034DB0 (-DbgPrintWarning@@YAXPEADZZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset @ 0x1C00E1980 (memset.c)
 *     rimHidP_GetUsages @ 0x1C00EFB14 (rimHidP_GetUsages.c)
 */

__int64 __fastcall rimExtractDigitizerPageButtonUsages(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5)
{
  void *v5; // r15
  __int64 v6; // rbx
  unsigned int v8; // eax
  __int64 v12; // rcx
  int Usages; // ebp
  unsigned int v14; // edi
  bool i; // si
  int v16; // eax

  v5 = *(void **)(a1 + 816);
  v6 = a5;
  v8 = *(_DWORD *)(a1 + 1040);
  LODWORD(a5) = v8;
  if ( !v5 )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2864);
    v8 = a5;
  }
  memset(v5, 0, 2LL * v8);
  Usages = rimHidP_GetUsages(v12, 13LL, *(unsigned __int16 *)(v6 + 58), (__int64)v5, (__int64)&a5, a2, a3, a4);
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
