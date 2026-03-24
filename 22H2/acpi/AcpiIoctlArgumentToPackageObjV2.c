/*
 * XREFs of AcpiIoctlArgumentToPackageObjV2 @ 0x1C0058444
 * Callers:
 *     ACPIIoctlEvalPreProcessingV2 @ 0x1C0057978 (ACPIIoctlEvalPreProcessingV2.c)
 *     ACPIIoctlEvalPreProcessingV2Ex @ 0x1C0057CE8 (ACPIIoctlEvalPreProcessingV2Ex.c)
 *     AcpiIoctlArgumentToPackageObjV2 @ 0x1C0058444 (AcpiIoctlArgumentToPackageObjV2.c)
 * Callees:
 *     memset @ 0x1C0032480 (memset.c)
 *     AcpiIoctlArgumentToPackageObjV2 @ 0x1C0058444 (AcpiIoctlArgumentToPackageObjV2.c)
 */

__int64 __fastcall AcpiIoctlArgumentToPackageObjV2(__int64 a1, POOL_TYPE a2, char a3, unsigned int *a4, PVOID *a5)
{
  __int64 v5; // rdi
  POOL_TYPE v8; // ebx
  __int64 v9; // r10
  unsigned int v10; // r15d
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // r9
  unsigned __int64 v13; // rcx
  unsigned int v14; // edx
  __int64 v15; // rax
  __int64 v16; // r8
  unsigned int v17; // eax
  PVOID PoolWithTag; // rax
  int v19; // ebx
  unsigned int v20; // ebp
  int v21; // r8d
  char *v22; // rdx
  __int16 v23; // ax
  unsigned __int16 v24; // ax
  __int64 v25; // rax

  v5 = 0LL;
  *a4 = 0;
  v8 = a2;
  *a5 = 0LL;
  if ( !a1 || (v9 = *(unsigned int *)(a1 + 4), (unsigned int)(v9 - 1) <= 0xA) || *(_WORD *)a1 != 4 )
  {
    v19 = -1073741811;
LABEL_34:
    if ( *a5 )
    {
      ExFreePoolWithTag(*a5, 0x41706341u);
      *a4 = 0;
      *a5 = 0LL;
    }
    return (unsigned int)v19;
  }
  v10 = 0;
  v11 = a1 + 8;
  v12 = v9 + a1 + 8;
  v13 = v11;
  if ( v11 >= v12 )
  {
LABEL_13:
    v17 = 40 * v10 + 8;
    *a4 = v17;
    PoolWithTag = ExAllocatePoolWithTag(v8, v17, 0x41706341u);
    *a5 = PoolWithTag;
    if ( !PoolWithTag )
    {
      v19 = -1073741670;
      goto LABEL_34;
    }
    memset(PoolWithTag, 0, *a4);
    v20 = 0;
    *(_DWORD *)*a5 = v10;
    if ( !v10 )
      return 0;
    v21 = 4;
    while ( 1 )
    {
      v22 = (char *)*a5;
      if ( *(_WORD *)v11 == 4 )
        v23 = 4;
      else
        v23 = *(_WORD *)v11 + 1;
      *(_WORD *)&v22[v5 + 10] = v23;
      v24 = *(_WORD *)v11;
      if ( *(_WORD *)v11 )
      {
        if ( v24 > 2u )
        {
          if ( v24 == 4 )
          {
            LOBYTE(v21) = a3;
            v19 = AcpiIoctlArgumentToPackageObjV2(v11, v8, v21, (int)v5 + (int)v22 + 32, (__int64)&v22[v5 + 40]);
            if ( v19 < 0 )
              goto LABEL_34;
            v8 = a2;
            v21 = 4;
            goto LABEL_29;
          }
          *(_WORD *)&v22[v5 + 10] = 3;
        }
        *(_DWORD *)&v22[v5 + 32] = *(_DWORD *)(v11 + 4);
        *(_QWORD *)&v22[v5 + 40] = v11 + 8;
      }
      else
      {
        *(_DWORD *)&v22[v5 + 32] = a3 != 0 ? 8 : 4;
        *(_QWORD *)&v22[v5 + 24] = *(unsigned int *)(v11 + 8);
      }
LABEL_29:
      v25 = *(unsigned int *)(v11 + 4);
      if ( (unsigned int)v25 < 4 )
        v25 = 4LL;
      ++v20;
      v11 += v25 + 8;
      v5 += 40LL;
      if ( v20 >= v10 )
        return 0;
    }
  }
  while ( *(_WORD *)v13 <= 4u )
  {
    v14 = *(_DWORD *)(v13 + 4);
    if ( v14 > (unsigned int)v9 )
      break;
    v15 = v14;
    v16 = v14;
    if ( v14 < 4 )
      v15 = 4LL;
    if ( v13 + v15 + 8 > v12 )
      break;
    ++v10;
    if ( v14 < 4 )
      v16 = 4LL;
    v13 += v16 + 8;
    if ( v13 >= v12 )
      goto LABEL_13;
  }
  return (unsigned int)-1073741788;
}
