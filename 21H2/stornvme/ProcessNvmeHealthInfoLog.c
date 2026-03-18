/*
 * XREFs of ProcessNvmeHealthInfoLog @ 0x1C00034D4
 * Callers:
 *     QueryProtocolInfoCompletion @ 0x1C0001720 (QueryProtocolInfoCompletion.c)
 *     NVMeModeSenseGetLogPageHealthInfoCompletion @ 0x1C0003610 (NVMeModeSenseGetLogPageHealthInfoCompletion.c)
 *     NVMeGetLogPageCompletion @ 0x1C0023180 (NVMeGetLogPageCompletion.c)
 * Callees:
 *     GetLunExtension @ 0x1C00035D4 (GetLunExtension.c)
 *     GetSrbExtension @ 0x1C00053D0 (GetSrbExtension.c)
 */

char __fastcall ProcessNvmeHealthInfoLog(__int64 a1, __int64 a2, char *a3, int a4)
{
  __int64 SrbExtension; // rax
  __int64 LunExtension; // r14
  int v9; // eax
  char v10; // bp
  char v11; // al
  char v12; // al
  char v13; // al

  SrbExtension = GetSrbExtension(a2);
  LunExtension = GetLunExtension(a1, HIDWORD(*(_QWORD *)(SrbExtension + 4096)));
  v9 = *(_DWORD *)(a1 + 64);
  v10 = 0;
  if ( (v9 & 0x80u) != 0 )
  {
    *a3 |= 4u;
    v9 = *(_DWORD *)(a1 + 64);
  }
  if ( (v9 & 0x100) != 0 )
  {
    *a3 |= 8u;
    v9 = *(_DWORD *)(a1 + 64);
  }
  if ( (v9 & 0x200) != 0 )
    *a3 |= 0x10u;
  v11 = *(_BYTE *)(a1 + 148);
  if ( v11 )
    a3[3] = v11;
  v12 = *(_BYTE *)(a1 + 149);
  if ( v12 )
    a3[4] = v12;
  if ( (*(_BYTE *)(a1 + 148) || *(_BYTE *)(a1 + 149)) && (unsigned __int8)a3[3] < (unsigned __int8)a3[4] )
    *a3 |= 1u;
  v13 = *a3;
  if ( *a3 && v13 != *(_BYTE *)(a1 + 26) )
  {
    *(_BYTE *)(a1 + 26) = v13;
    if ( *(_BYTE *)(a1 + 23) )
      StorPortExtendedFunction(87LL, a1, LunExtension, 2LL);
    if ( a4 == 9 && (*a3 & 2) != *a3 )
    {
      v10 = 1;
      *(_DWORD *)(a1 + 4032) = *(_DWORD *)(a1 + 4032) & ~*(unsigned __int8 *)(a1 + 26) | 2;
    }
  }
  if ( (unsigned __int8)a3[5] >= 0x5Fu && *(_BYTE *)(a1 + 23) && !*(_BYTE *)(a1 + 27) )
  {
    StorPortExtendedFunction(85LL, a1, LunExtension, 2LL);
    *(_BYTE *)(a1 + 27) = 1;
  }
  if ( (unsigned __int8)a3[3] <= 2u && *(_BYTE *)(a1 + 23) && !*(_BYTE *)(a1 + 28) )
  {
    StorPortExtendedFunction(85LL, a1, LunExtension, 2LL);
    *(_BYTE *)(a1 + 28) = 1;
  }
  return v10;
}
