/*
 * XREFs of ACPIIoctlCalculateOutputBufferSizeV1 @ 0x1C002F780
 * Callers:
 *     ACPIIoctlCalculateOutputBufferSizeV1 @ 0x1C002F780 (ACPIIoctlCalculateOutputBufferSizeV1.c)
 *     ACPIIoctlCalculateOutputBufferV1 @ 0x1C002F884 (ACPIIoctlCalculateOutputBufferV1.c)
 *     ACPIIoctlEvalPostProcessingV1 @ 0x1C002FD84 (ACPIIoctlEvalPostProcessingV1.c)
 *     AcpiConvertObjDataToMethodArguments @ 0x1C0036EF4 (AcpiConvertObjDataToMethodArguments.c)
 *     ACPIProcessorContainerComputeIoctlPayloadSize @ 0x1C003A504 (ACPIProcessorContainerComputeIoctlPayloadSize.c)
 *     ACPIProcessorContainerFillIoctlBuffer @ 0x1C003A774 (ACPIProcessorContainerFillIoctlBuffer.c)
 * Callees:
 *     ACPIIoctlCalculateOutputBufferSizeV1 @ 0x1C002F780 (ACPIIoctlCalculateOutputBufferSizeV1.c)
 */

__int64 __fastcall ACPIIoctlCalculateOutputBufferSizeV1(__int64 a1, _DWORD *a2, int *a3, char a4, char a5)
{
  __int16 v5; // r10
  int v8; // ebx
  int *v9; // rsi
  int v10; // edx
  char v11; // al
  int v12; // edi
  __int64 result; // rax
  unsigned int v14; // eax
  int v15; // [rsp+60h] [rbp+8h] BYREF

  v5 = *(_WORD *)(a1 + 2);
  v15 = 0;
  if ( v5 == 1 )
  {
    v8 = 12;
    if ( a4 != 1 )
      v8 = 8;
LABEL_19:
    *a3 = 1;
LABEL_20:
    *a2 += v8;
    return 0LL;
  }
  if ( (unsigned __int16)(v5 - 2) <= 1u )
  {
    v14 = *(_DWORD *)(a1 + 24);
    if ( v14 < 4 )
      v14 = 4;
    v8 = v14 + 4;
    goto LABEL_19;
  }
  if ( v5 != 4 )
  {
    if ( v5 )
      return 3222536207LL;
    v8 = 0;
    goto LABEL_19;
  }
  v9 = *(int **)(a1 + 32);
  v10 = 1;
  if ( a5 )
    v10 = *v9;
  v11 = -a5;
  *a3 = v10;
  v12 = 0;
  v8 = v11 == 0 ? 4 : 0;
  if ( !*v9 )
    goto LABEL_20;
  while ( 1 )
  {
    result = ACPIIoctlCalculateOutputBufferSizeV1(
               (int)v9 + 8 * (v12 + 4 * v12 + 1),
               (_DWORD)a2,
               (unsigned int)&v15,
               a4,
               0);
    if ( (int)result < 0 )
      return result;
    if ( ++v12 >= (unsigned int)*v9 )
      goto LABEL_20;
  }
}
