/*
 * XREFs of PfpPrefetchPrivatePages @ 0x14097B268
 * Callers:
 *     PfpPrefetchRequestPerform @ 0x1407662E0 (PfpPrefetchRequestPerform.c)
 * Callees:
 *     PfpCheckPrefetchAbort @ 0x14020C198 (PfpCheckPrefetchAbort.c)
 *     MmQueryMemoryListInformation @ 0x140236738 (MmQueryMemoryListInformation.c)
 *     MmPrefetchVirtualMemory @ 0x14067E690 (MmPrefetchVirtualMemory.c)
 *     PfpUpdateRepurposedByPrefetch @ 0x1406A2DC0 (PfpUpdateRepurposedByPrefetch.c)
 *     PfpGetPageListCount @ 0x1406A2EDC (PfpGetPageListCount.c)
 *     NtClose @ 0x1407C00E0 (NtClose.c)
 *     PfpSourceBuildVaArray @ 0x14097BD58 (PfpSourceBuildVaArray.c)
 *     PfpSourceGetPrefetchSupport @ 0x14097BE40 (PfpSourceGetPrefetchSupport.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PfpPrefetchPrivatePages(_QWORD *a1)
{
  __int64 v1; // rbx
  _QWORD *v2; // r15
  int v3; // esi
  int v4; // eax
  int v5; // r8d
  int v6; // edx
  int v7; // r14d
  __int64 v8; // r13
  unsigned int v9; // ebx
  __int64 result; // rax
  char *v11; // rdi
  __int64 v12; // rdi
  __int64 v13; // r9
  unsigned int v14; // eax
  unsigned int v15; // r12d
  unsigned int v16; // r14d
  unsigned int v17; // [rsp+30h] [rbp-38h]
  HANDLE Handle[2]; // [rsp+38h] [rbp-30h] BYREF
  __int64 v19; // [rsp+48h] [rbp-20h]
  PVOID P[2]; // [rsp+50h] [rbp-18h] BYREF
  int v22; // [rsp+B8h] [rbp+50h]
  int v23; // [rsp+C0h] [rbp+58h]
  __int64 v24; // [rsp+C8h] [rbp+60h] BYREF

  v1 = *a1;
  v2 = a1;
  LODWORD(v24) = 0;
  v3 = 0;
  v22 = 0;
  *(_OWORD *)P = 0LL;
  v17 = *(unsigned __int16 *)(*a1 + 30LL);
  v4 = (8 * (v17 & 7)) | *(_DWORD *)(*a1 + 28LL) & 7;
  v19 = ((MEMORY[0xFFFFF78000000004] * MEMORY[0xFFFFF78000000324]) << 8)
      + (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
  v5 = *(_DWORD *)(v1 + 80);
  if ( (v5 & 0x10) == 0 )
    v4 |= 0x100u;
  v6 = v4 | 0x200;
  if ( (v5 & 8) == 0 )
    v6 = v4;
  v7 = v6 | 0x800;
  if ( (*(_BYTE *)(v1 + 80) & 0x20) == 0 )
    v7 = v6;
  v8 = 0LL;
  v23 = v7;
  if ( !*(_DWORD *)(v1 + 20) )
  {
LABEL_8:
    v9 = 0;
    goto LABEL_9;
  }
  while ( 1 )
  {
    *(_OWORD *)Handle = 0LL;
    if ( (unsigned int)PfpCheckPrefetchAbort(v2) )
    {
      v3 = 1;
      v22 = 1;
LABEL_15:
      v11 = (char *)Handle[1];
      goto LABEL_16;
    }
    v12 = *(_QWORD *)(v1 + 56) + 40 * v8;
    if ( (int)PfpSourceBuildVaArray(v12, P) < 0 || (int)PfpSourceGetPrefetchSupport(v12, Handle) < 0 )
      goto LABEL_15;
    v11 = (char *)Handle[1];
    if ( (*(_DWORD *)(v1 + 80) & 4) == 0 )
    {
      v14 = (unsigned int)P[0];
      *(_DWORD *)(v1 + 104) += LODWORD(P[0]);
      MmPrefetchVirtualMemory(v11, v14, (__int64)P[1], v7);
LABEL_34:
      ++*(_DWORD *)(v1 + 92);
      goto LABEL_16;
    }
    v15 = (unsigned int)P[0];
    Handle[0] = P[1];
    MmQueryMemoryListInformation(0xFFFFFFFFFFFFFFFFuLL, (_OWORD *)v2 + 3, 0xB0u, v13, &v24);
    if ( !v15 )
      goto LABEL_34;
    while ( !(unsigned int)PfpCheckPrefetchAbort(a1)
         && (unsigned __int64)(v2[6] + v2[7] + PfpGetPageListCount((__int64)(v2 + 11), 0, v17)) >= 0x80 )
    {
      v16 = v15;
      if ( v15 > 0x10 )
        v16 = 16;
      if ( MmPrefetchVirtualMemory(v11, v16, (__int64)Handle[0], v23) >= 0 )
        *(_DWORD *)(v1 + 104) += v16;
      PfpUpdateRepurposedByPrefetch((_OWORD *)v2 + 3, v16);
      Handle[0] = (char *)Handle[0] + 16 * v16;
      v15 -= v16;
      if ( !v15 )
      {
        v3 = v22;
        v7 = v23;
        goto LABEL_34;
      }
    }
    v7 = v23;
    v3 = 1;
    v22 = 1;
LABEL_16:
    if ( v11 )
      NtClose(v11);
    if ( v3 )
      break;
    v8 = (unsigned int)(v8 + 1);
    if ( (unsigned int)v8 >= *(_DWORD *)(v1 + 20) )
      goto LABEL_8;
    v2 = a1;
  }
  v9 = -1073741248;
LABEL_9:
  if ( P[1] )
    ExFreePoolWithTag(P[1], 0);
  result = v9;
  *(_DWORD *)(*a1 + 120LL) += ((MEMORY[0xFFFFF78000000004] * MEMORY[0xFFFFF78000000324]) << 8)
                            + ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
                            - v19;
  return result;
}
