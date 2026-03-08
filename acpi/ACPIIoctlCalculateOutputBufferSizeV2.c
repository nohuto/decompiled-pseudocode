/*
 * XREFs of ACPIIoctlCalculateOutputBufferSizeV2 @ 0x1C0003FB0
 * Callers:
 *     ACPIIoctlCalculateOutputBufferSizeV2 @ 0x1C0003FB0 (ACPIIoctlCalculateOutputBufferSizeV2.c)
 *     ACPIIoctlCalculateOutputBufferV2 @ 0x1C00040B2 (ACPIIoctlCalculateOutputBufferV2.c)
 *     ACPIIoctlEvalPostProcessingV2 @ 0x1C000449A (ACPIIoctlEvalPostProcessingV2.c)
 * Callees:
 *     ACPIIoctlCalculateOutputBufferSizeV2 @ 0x1C0003FB0 (ACPIIoctlCalculateOutputBufferSizeV2.c)
 */

__int64 __fastcall ACPIIoctlCalculateOutputBufferSizeV2(__int64 a1, _DWORD *a2, int *a3, char a4, char a5)
{
  __int16 v5; // r10
  int v9; // ebx
  int v10; // ecx
  int *v11; // rsi
  char v12; // al
  int v13; // edi
  __int64 result; // rax
  unsigned int v15; // eax
  int v16; // [rsp+60h] [rbp+8h] BYREF

  v5 = *(_WORD *)(a1 + 2);
  v16 = 0;
  if ( v5 == 1 )
  {
    v9 = 16;
    if ( a4 != 1 )
      v9 = 12;
LABEL_19:
    *a3 = 1;
LABEL_20:
    *a2 += v9;
    return 0LL;
  }
  if ( (unsigned __int16)(v5 - 2) <= 1u )
  {
    v15 = *(_DWORD *)(a1 + 24);
    if ( v15 < 4 )
      v15 = 4;
    v9 = v15 + 8;
    goto LABEL_19;
  }
  if ( v5 != 4 )
  {
    if ( v5 )
      return 3222536207LL;
    v9 = 0;
    goto LABEL_19;
  }
  v10 = 1;
  v11 = *(int **)(a1 + 32);
  if ( a5 )
    v10 = *v11;
  v12 = -a5;
  *a3 = v10;
  v13 = 0;
  v9 = v12 == 0 ? 8 : 0;
  if ( !*v11 )
    goto LABEL_20;
  while ( 1 )
  {
    result = ACPIIoctlCalculateOutputBufferSizeV2(
               (int)v11 + 8 * (v13 + 4 * v13 + 1),
               (_DWORD)a2,
               (unsigned int)&v16,
               a4,
               0);
    if ( (int)result < 0 )
      return result;
    if ( ++v13 >= (unsigned int)*v11 )
      goto LABEL_20;
  }
}
