/*
 * XREFs of ProcessNvmeHealthInfoLog @ 0x1C0004590
 * Callers:
 *     QueryProtocolInfoCompletion @ 0x1C0002180 (QueryProtocolInfoCompletion.c)
 *     NVMeModeSenseGetLogPageHealthInfoCompletion @ 0x1C0004670 (NVMeModeSenseGetLogPageHealthInfoCompletion.c)
 *     NVMeGetLogPageCompletion @ 0x1C00193A0 (NVMeGetLogPageCompletion.c)
 * Callees:
 *     GetLunExtension @ 0x1C0004630 (GetLunExtension.c)
 *     GetSrbExtension @ 0x1C0005A44 (GetSrbExtension.c)
 */

char __fastcall ProcessNvmeHealthInfoLog(__int64 a1, __int64 a2, char *a3, int a4)
{
  __int64 SrbExtension; // rax
  __int64 LunExtension; // r14
  char v9; // al
  char v10; // si

  SrbExtension = GetSrbExtension(a2);
  LunExtension = GetLunExtension(a1, HIDWORD(*(_QWORD *)(SrbExtension + 4096)));
  v9 = *a3;
  v10 = 0;
  if ( *a3 )
  {
    if ( v9 != *(_BYTE *)(a1 + 19) )
    {
      *(_BYTE *)(a1 + 19) = v9;
      StorPortExtendedFunction(87LL, a1, LunExtension, 2LL);
      if ( a4 == 9 && (*a3 & 2) != *a3 )
      {
        v10 = 1;
        *(_DWORD *)(a1 + 4016) = *(_DWORD *)(a1 + 4016) & ~*(unsigned __int8 *)(a1 + 19) | 2;
      }
    }
  }
  if ( (unsigned __int8)a3[5] >= 0x5Fu && !*(_BYTE *)(a1 + 20) )
  {
    StorPortExtendedFunction(85LL, a1, LunExtension, 2LL);
    *(_BYTE *)(a1 + 20) = 1;
  }
  if ( (unsigned __int8)a3[3] <= 2u && !*(_BYTE *)(a1 + 21) )
  {
    StorPortExtendedFunction(85LL, a1, LunExtension, 2LL);
    *(_BYTE *)(a1 + 21) = 1;
  }
  return v10;
}
