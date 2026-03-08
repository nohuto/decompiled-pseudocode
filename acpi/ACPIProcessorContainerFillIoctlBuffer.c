/*
 * XREFs of ACPIProcessorContainerFillIoctlBuffer @ 0x1C003A774
 * Callers:
 *     ACPIProcessorContainerFillIoctlBuffer @ 0x1C003A774 (ACPIProcessorContainerFillIoctlBuffer.c)
 *     ACPIProcessorContainerGetLpiStatesIoctl @ 0x1C003A968 (ACPIProcessorContainerGetLpiStatesIoctl.c)
 * Callees:
 *     memmove @ 0x1C0001E80 (memmove.c)
 *     ACPIAmliBuildObjectPathnameUnicode @ 0x1C000B2B0 (ACPIAmliBuildObjectPathnameUnicode.c)
 *     ACPIIoctlCalculateOutputBufferSizeV1 @ 0x1C002F780 (ACPIIoctlCalculateOutputBufferSizeV1.c)
 *     ACPIIoctlCalculateOutputBufferV1 @ 0x1C002F884 (ACPIIoctlCalculateOutputBufferV1.c)
 *     ACPIProcessorContainerFillIoctlBuffer @ 0x1C003A774 (ACPIProcessorContainerFillIoctlBuffer.c)
 */

__int64 __fastcall ACPIProcessorContainerFillIoctlBuffer(__int64 **a1, int a2, __int64 a3, int *a4, int a5)
{
  __int64 *v5; // rbx
  int v10; // r13d
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rsi
  __int64 result; // rax
  int v15; // eax
  __int64 v16; // rax
  int v17; // r10d
  __int64 *v18; // rdx
  __int64 v19; // r8
  unsigned int v20; // eax
  __int64 v21; // rcx
  size_t v22; // r8
  const void *v23; // rdx
  __int64 v24; // rcx
  int v25; // eax
  bool v26; // zf
  unsigned int v27; // ebp
  __int64 v28; // rcx
  _DWORD *v29; // r11
  int v30; // ecx
  int v31; // eax
  int v32; // [rsp+30h] [rbp-48h] BYREF
  __int128 v33; // [rsp+38h] [rbp-40h] BYREF
  int v34; // [rsp+80h] [rbp+8h] BYREF

  v5 = *a1;
  v33 = 0LL;
  if ( v5 == (__int64 *)a1 )
    return 0LL;
  v10 = a5;
  while ( 1 )
  {
    v11 = *((unsigned int *)v5 + 14);
    v12 = a2;
    if ( a2 == -1 )
      v12 = *((_DWORD *)v5 + 14);
    v13 = 3 * v11;
    *(_DWORD *)(a3 + 8 * v13 + 8) = v11;
    *(_DWORD *)(a3 + 8 * v13 + 12) = v12;
    result = ACPIProcessorContainerFillIoctlBuffer((int)v5 + 16, *(_DWORD *)(a3 + 24 * v11 + 8), a3, (_DWORD)a4, v10);
    if ( (int)result < 0 )
      break;
    v15 = *a4;
    *(_DWORD *)(a3 + 8 * v13 + 24) = 0;
    v16 = (v15 + 3) & 0xFFFFFFFC;
    v17 = v16;
    *(_DWORD *)(a3 + 8 * v13 + 28) = v16;
    v18 = (__int64 *)v5[4];
    v19 = a3 + v16;
    v20 = 0;
    while ( v18 != v5 + 4 )
    {
      *(_DWORD *)(v19 + 4LL * v20) = *((_DWORD *)v18 - 1);
      v20 = *(_DWORD *)(a3 + 8 * v13 + 24) + 1;
      *(_DWORD *)(a3 + 8 * v13 + 24) = v20;
      v18 = (__int64 *)*v18;
    }
    v21 = v5[72];
    *a4 = v17 + 4 * v20;
    result = ACPIAmliBuildObjectPathnameUnicode(v21, (__int64)&v33, 1);
    if ( (int)result < 0 )
      break;
    v22 = WORD1(v33);
    v23 = (const void *)*((_QWORD *)&v33 + 1);
    v24 = (*a4 + 1) & 0xFFFFFFFE;
    *a4 = v24;
    *(_DWORD *)(a3 + 8 * v13 + 16) = v24;
    memmove((void *)(a3 + v24), v23, v22);
    ExFreePoolWithTag(*((PVOID *)&v33 + 1), 0);
    v25 = WORD1(v33) + *a4;
    v26 = v5[6] == 0;
    *a4 = v25;
    if ( v26 )
    {
      *(_DWORD *)(a3 + 8 * v13 + 20) = 0;
    }
    else
    {
      v34 = 0;
      v32 = 0;
      v27 = (v25 + 3) & 0xFFFFFFFC;
      *(_DWORD *)(a3 + 8 * v13 + 20) = v27;
      v28 = v5[6];
      *a4 = v27;
      result = ACPIIoctlCalculateOutputBufferSizeV1(v28, &v34, &v32, 0, 1);
      if ( (int)result < 0 )
        return result;
      v30 = v34 + 12;
      v31 = v34 + 12;
      if ( (unsigned int)(v34 + 12) < 0x14 )
      {
        v30 = 20;
        v31 = 20;
      }
      *v29 = 1114596673;
      *a4 = v27 + v31;
      v29[2] = v32;
      v29[1] = v30;
      result = ACPIIoctlCalculateOutputBufferV1(v5[6], (__int64)(v29 + 3), 0);
      if ( (int)result < 0 )
        return result;
    }
    v5 = (__int64 *)*v5;
    if ( v5 == (__int64 *)a1 )
      return 0LL;
  }
  return result;
}
