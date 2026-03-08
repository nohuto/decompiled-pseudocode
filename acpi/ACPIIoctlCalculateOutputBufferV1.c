/*
 * XREFs of ACPIIoctlCalculateOutputBufferV1 @ 0x1C002F884
 * Callers:
 *     ACPIIoctlCalculateOutputBufferV1 @ 0x1C002F884 (ACPIIoctlCalculateOutputBufferV1.c)
 *     ACPIIoctlEvalPostProcessingV1 @ 0x1C002FD84 (ACPIIoctlEvalPostProcessingV1.c)
 *     AcpiConvertObjDataToMethodArguments @ 0x1C0036EF4 (AcpiConvertObjDataToMethodArguments.c)
 *     ACPIProcessorContainerFillIoctlBuffer @ 0x1C003A774 (ACPIProcessorContainerFillIoctlBuffer.c)
 * Callees:
 *     memmove @ 0x1C0001E80 (memmove.c)
 *     ACPIIoctlCalculateOutputBufferSizeV1 @ 0x1C002F780 (ACPIIoctlCalculateOutputBufferSizeV1.c)
 *     ACPIIoctlCalculateOutputBufferV1 @ 0x1C002F884 (ACPIIoctlCalculateOutputBufferV1.c)
 */

__int64 __fastcall ACPIIoctlCalculateOutputBufferV1(__int64 a1, __int64 a2, char a3)
{
  __int16 v4; // cx
  char *v6; // rbx
  unsigned int *v7; // r12
  __int64 result; // rax
  __int64 v9; // r8
  char v10; // r11
  int v11; // eax
  unsigned int v12; // ecx
  unsigned int v13; // ebp
  char *v14; // r14
  __int64 v15; // rax
  int v16[4]; // [rsp+30h] [rbp-38h] BYREF
  int v17; // [rsp+70h] [rbp+8h] BYREF

  v4 = *(_WORD *)(a1 + 2);
  v6 = (char *)a2;
  if ( v4 == 1 )
  {
    *(_WORD *)a2 = 0;
    if ( a3 == 1 )
    {
      *(_WORD *)(a2 + 2) = 8;
      *(_QWORD *)(a2 + 4) = *(_QWORD *)(a1 + 16);
    }
    else
    {
      *(_WORD *)(a2 + 2) = 4;
      *(_DWORD *)(a2 + 4) = *(_DWORD *)(a1 + 16);
    }
  }
  else if ( (unsigned __int16)(v4 - 2) <= 1u )
  {
    *(_WORD *)a2 = (v4 != 2) + 1;
    *(_WORD *)(a2 + 2) = *(_WORD *)(a1 + 24);
    memmove((void *)(a2 + 4), *(const void **)(a1 + 32), *(unsigned int *)(a1 + 24));
  }
  else
  {
    if ( v4 != 4 )
      return 3222536207LL;
    v7 = *(unsigned int **)(a1 + 32);
    v17 = 0;
    v16[0] = 0;
    result = ACPIIoctlCalculateOutputBufferSizeV1(a1, &v17, v16, a3, 1);
    if ( (int)result < 0 )
      return result;
    if ( v10 )
    {
      v12 = (unsigned __int16)v17;
    }
    else
    {
      *(_WORD *)v6 = 3;
      LOWORD(v11) = v17;
      *((_WORD *)v6 + 1) = v17;
      v6 += 4;
      if ( (unsigned __int16)v11 >= 4u )
        v11 = (unsigned __int16)v11;
      else
        v11 = 4;
      v12 = v11 + 4;
    }
    v13 = 0;
    v14 = &v6[v12];
    while ( v6 < v14 && v13 < *v7 )
    {
      LOBYTE(v9) = a3;
      result = ACPIIoctlCalculateOutputBufferV1(&v7[8 * v13 + 2 + 2 * v13], v6, v9, 0LL);
      if ( (int)result < 0 )
        return result;
      v15 = *((unsigned __int16 *)v6 + 1);
      ++v13;
      if ( (unsigned __int16)v15 < 4u )
        v15 = 4LL;
      v6 += v15 + 4;
    }
  }
  return 0LL;
}
