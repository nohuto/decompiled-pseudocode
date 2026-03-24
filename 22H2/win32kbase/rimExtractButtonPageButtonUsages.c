/*
 * XREFs of rimExtractButtonPageButtonUsages @ 0x1C0179E64
 * Callers:
 *     rimProcessPointerDeviceButtonContact @ 0x1C017C51C (rimProcessPointerDeviceButtonContact.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset @ 0x1C00CF8C0 (memset.c)
 *     rimHidP_GetUsages @ 0x1C0163674 (rimHidP_GetUsages.c)
 */

int __fastcall rimExtractButtonPageButtonUsages(
        __int64 a1,
        struct _HIDP_PREPARSED_DATA *a2,
        char *a3,
        unsigned int a4,
        _DWORD *a5)
{
  _WORD *v5; // rdi
  unsigned int v6; // eax
  _DWORD *v10; // rbx
  __int64 v11; // rcx
  int result; // eax
  __int64 v13; // r8
  unsigned int v14; // [rsp+80h] [rbp+8h] BYREF

  v5 = *(_WORD **)(a1 + 768);
  v6 = *(_DWORD *)(a1 + 984);
  v14 = v6;
  if ( !v5 )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 2897);
    v6 = v14;
  }
  v10 = a5;
  *a5 = 0;
  memset(v5, 0, 2LL * v6);
  result = rimHidP_GetUsages(v11, 9u, 0, v5, &v14, a2, a3, a4);
  if ( result >= 0 && v14 )
  {
    v13 = v14;
    do
    {
      switch ( *v5 )
      {
        case 1:
          *v10 |= 0x16u;
          break;
        case 2:
          *v10 |= 0x26u;
          break;
        case 3:
          *v10 |= 0x46u;
          break;
      }
      ++v5;
      --v13;
    }
    while ( v13 );
  }
  return result;
}
