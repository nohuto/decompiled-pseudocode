/*
 * XREFs of AcpiIoctlArgumentToPackageObjV1 @ 0x1C000C2C8
 * Callers:
 *     ACPIIoctlEvalPreProcessingV1 @ 0x1C000B5F4 (ACPIIoctlEvalPreProcessingV1.c)
 *     AcpiIoctlArgumentToPackageObjV1 @ 0x1C000C2C8 (AcpiIoctlArgumentToPackageObjV1.c)
 *     ACPIIoctlEvalPreProcessingV1Ex @ 0x1C0029BB4 (ACPIIoctlEvalPreProcessingV1Ex.c)
 * Callees:
 *     AcpiIoctlArgumentToPackageObjV1 @ 0x1C000C2C8 (AcpiIoctlArgumentToPackageObjV1.c)
 *     memset @ 0x1C0032480 (memset.c)
 */

__int64 __fastcall AcpiIoctlArgumentToPackageObjV1(_WORD *a1, POOL_TYPE a2, char a3, unsigned int *a4, PVOID *a5)
{
  __int64 v5; // rdi
  POOL_TYPE v8; // ebx
  __int64 v9; // r10
  unsigned int v10; // r15d
  _WORD *v11; // rsi
  unsigned __int64 v12; // r9
  _WORD *v13; // rcx
  unsigned int v14; // eax
  PVOID PoolWithTag; // rax
  unsigned int v16; // ebp
  int v17; // ebx
  unsigned __int16 v19; // dx
  __int64 v20; // rax
  __int64 v21; // r8
  int v22; // r8d
  char *v23; // rdx
  __int16 v24; // ax
  unsigned __int16 v25; // ax
  __int64 v26; // rax

  v5 = 0LL;
  *a4 = 0;
  v8 = a2;
  *a5 = 0LL;
  if ( !a1 || (v9 = (unsigned __int16)a1[1], (unsigned __int16)(v9 - 1) <= 6u) || *a1 != 4 )
  {
    v17 = -1073741811;
LABEL_37:
    if ( *a5 )
    {
      ExFreePoolWithTag(*a5, 0x41706341u);
      *a4 = 0;
      *a5 = 0LL;
    }
    return (unsigned int)v17;
  }
  v10 = 0;
  v11 = a1 + 2;
  v12 = (unsigned __int64)a1 + v9 + 4;
  v13 = v11;
  if ( (unsigned __int64)v11 >= v12 )
  {
LABEL_5:
    v14 = 40 * v10 + 8;
    *a4 = v14;
    PoolWithTag = ExAllocatePoolWithTag(v8, v14, 0x41706341u);
    *a5 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, *a4);
      v16 = 0;
      *(_DWORD *)*a5 = v10;
      if ( !v10 )
        return 0;
      v22 = 4;
      while ( 1 )
      {
        v23 = (char *)*a5;
        if ( *v11 == 4 )
          v24 = 4;
        else
          v24 = *v11 + 1;
        *(_WORD *)&v23[v5 + 10] = v24;
        v25 = *v11;
        if ( *v11 )
        {
          if ( v25 > 2u )
          {
            if ( v25 == 4 )
            {
              LOBYTE(v22) = a3;
              v17 = AcpiIoctlArgumentToPackageObjV1(
                      (_DWORD)v11,
                      v8,
                      v22,
                      (int)v5 + (int)v23 + 32,
                      (__int64)&v23[v5 + 40]);
              if ( v17 < 0 )
                goto LABEL_37;
              v8 = a2;
              v22 = 4;
              goto LABEL_23;
            }
            *(_WORD *)&v23[v5 + 10] = 3;
          }
          *(_DWORD *)&v23[v5 + 32] = (unsigned __int16)v11[1];
          *(_QWORD *)&v23[v5 + 40] = v11 + 2;
        }
        else
        {
          *(_DWORD *)&v23[v5 + 32] = a3 != 0 ? 8 : 4;
          *(_QWORD *)&v23[v5 + 24] = *((unsigned int *)v11 + 1);
        }
LABEL_23:
        v26 = (unsigned __int16)v11[1];
        if ( (unsigned __int16)v26 < 4u )
          v26 = 4LL;
        ++v16;
        v11 = (_WORD *)((char *)v11 + v26 + 4);
        v5 += 40LL;
        if ( v16 >= v10 )
          return 0;
      }
    }
    v17 = -1073741670;
    goto LABEL_37;
  }
  while ( *v13 <= 4u )
  {
    v19 = v13[1];
    if ( v19 > (unsigned __int16)v9 )
      break;
    v20 = (unsigned __int16)v13[1];
    v21 = v20;
    if ( v19 < 4u )
      v20 = 4LL;
    if ( (unsigned __int64)v13 + v20 + 4 > v12 )
      break;
    ++v10;
    if ( v19 < 4u )
      v21 = 4LL;
    v13 = (_WORD *)((char *)v13 + v21 + 4);
    if ( (unsigned __int64)v13 >= v12 )
      goto LABEL_5;
  }
  return (unsigned int)-1073741788;
}
