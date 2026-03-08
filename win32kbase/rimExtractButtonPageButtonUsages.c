/*
 * XREFs of rimExtractButtonPageButtonUsages @ 0x1C00F1382
 * Callers:
 *     rimProcessPointerDeviceButtonContact @ 0x1C01D99D4 (rimProcessPointerDeviceButtonContact.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset @ 0x1C00E1980 (memset.c)
 *     rimHidP_GetUsages @ 0x1C00EFB14 (rimHidP_GetUsages.c)
 */

__int64 __fastcall rimExtractButtonPageButtonUsages(__int64 a1, __int64 a2, __int64 a3, int a4, _DWORD *a5)
{
  _WORD *v5; // rdi
  unsigned int v6; // eax
  _DWORD *v10; // rbx
  __int64 v11; // rcx
  __int64 result; // rax
  __int64 v13; // r8
  unsigned int v14; // [rsp+80h] [rbp+8h] BYREF

  v5 = *(_WORD **)(a1 + 816);
  v6 = *(_DWORD *)(a1 + 1040);
  v14 = v6;
  if ( !v5 )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2963);
    v6 = v14;
  }
  v10 = a5;
  *a5 = 0;
  memset(v5, 0, 2LL * v6);
  result = rimHidP_GetUsages(v11, 9LL, 0LL, (__int64)v5, (__int64)&v14, a2, a3, a4);
  if ( (int)result >= 0 && v14 )
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
