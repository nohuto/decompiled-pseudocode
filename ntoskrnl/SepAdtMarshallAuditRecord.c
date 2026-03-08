/*
 * XREFs of SepAdtMarshallAuditRecord @ 0x1403979E4
 * Callers:
 *     SepAdtLogAuditRecord @ 0x140397890 (SepAdtLogAuditRecord.c)
 * Callees:
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140AAB230 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SepAdtMarshallAuditRecord(_DWORD *Src, void **a2, _DWORD *a3, int a4)
{
  unsigned int v4; // r11d
  const void **v5; // r15
  unsigned int v6; // ebp
  _DWORD *v10; // r13
  unsigned int v11; // ebx
  unsigned int v12; // edi
  char *i; // r10
  unsigned int v14; // edx
  unsigned int v15; // ebx
  PVOID PoolWithTag; // rax
  int v17; // edx
  char *v18; // rsi
  signed __int64 *v19; // r12
  int v20; // ecx
  int v21; // ecx
  int v22; // ecx
  int v23; // ecx
  int v24; // ecx
  int v25; // ecx
  int v26; // ecx
  int v27; // ecx
  int v29; // ecx
  int v30; // ecx
  int v31; // ecx
  int v32; // ecx
  int v33; // ecx
  int v34; // ecx
  int v35; // ecx
  const void **v36; // rdi
  char *v37; // rbx
  char *v38; // rsi
  __int16 v39; // ax
  unsigned int *v40; // rax
  __int64 *v41; // r8
  __int64 v42; // r9
  __int64 v43; // rax
  unsigned int *v44; // rdi
  char *v45; // rbx
  signed __int64 v46; // rax
  char *v47; // rcx
  const void **v48; // r13
  const void **v49; // r12
  _QWORD *v50; // r13
  size_t v51; // rbx
  int v52; // [rsp+20h] [rbp-48h]
  signed __int64 *v53; // [rsp+30h] [rbp-38h]

  v4 = Src[2];
  v5 = (const void **)(Src + 6);
  v6 = 0;
  v10 = Src;
  v11 = 0;
  v12 = 0;
  for ( i = (char *)(Src + 6); v12 < v4; v11 += v14 )
  {
    if ( *(_DWORD *)i == 17 )
    {
      v40 = (unsigned int *)*((_QWORD *)i + 3);
      v14 = 16 * (*v40 + 1);
      if ( *v40 )
      {
        v41 = (__int64 *)(*((_QWORD *)v40 + 1) + 8LL);
        v42 = *v40;
        do
        {
          v43 = *v41;
          v41 += 2;
          v14 += (4 * *(unsigned __int8 *)(v43 + 1) + 15) & 0xFFFFFFF8;
          --v42;
        }
        while ( v42 );
        v10 = Src;
      }
    }
    else
    {
      v14 = (*((_DWORD *)i + 1) + 7) & 0xFFFFFFF8;
    }
    if ( v14 + v11 < v11 )
      return (unsigned int)-1073741811;
    ++v12;
    i += 32;
  }
  v15 = 32 * v4 + 24 + v11;
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)(a4 | 0x400), v15, 0x70416553u);
  *a2 = PoolWithTag;
  if ( !PoolWithTag )
  {
    *a3 = 0;
    return (unsigned int)-1073741670;
  }
  *a3 = (a4 != 1) + 4;
  memmove(*a2, v10, 1048 - 32LL * (unsigned int)(32 - v10[2]));
  v52 = 0;
  *((_DWORD *)*a2 + 3) = v15;
  *((_DWORD *)*a2 + 5) |= 1u;
  v17 = v10[2];
  v18 = (char *)*a2 - 32 * (unsigned int)(32 - v17) + 1048;
  if ( v17 )
  {
    v19 = (signed __int64 *)((char *)*a2 + 48);
    v53 = v19;
    while ( 1 )
    {
      v20 = *(_DWORD *)v5;
      if ( *(int *)v5 <= 23 )
        break;
      v29 = v20 - 24;
      if ( !v29 )
        goto LABEL_31;
      v30 = v29 - 4;
      if ( !v30 )
        goto LABEL_31;
      v31 = v30 - 1;
      if ( !v31 )
        goto LABEL_31;
      v32 = v31 - 1;
      if ( !v32 )
        goto LABEL_31;
      v33 = v32 - 1;
      if ( !v33 )
        goto LABEL_31;
      v34 = v33 - 1;
      if ( !v34 )
      {
        *((_DWORD *)*a2 + 5) |= 2u;
LABEL_31:
        memmove(v18, v5[3], *((unsigned int *)v5 + 1));
        *v19 = v18 - (_BYTE *)*a2;
        v18 += (*((unsigned int *)v5 + 1) + 7LL) & 0xFFFFFFFFFFFFFFF8uLL;
        goto LABEL_20;
      }
      v35 = v34 - 1;
      if ( !v35 )
        goto LABEL_31;
      if ( v35 == 1 )
        goto LABEL_30;
LABEL_20:
      v19 += 4;
      v53 = v19;
      v5 += 4;
      if ( (unsigned int)++v52 >= v10[2] )
        return v6;
    }
    if ( v20 == 23 )
      goto LABEL_31;
    v21 = v20 - 1;
    if ( v21 )
    {
      v22 = v21 - 1;
      if ( v22 )
      {
        v23 = v22 - 2;
        if ( v23 )
        {
          v24 = v23 - 4;
          if ( v24 )
          {
            v25 = v24 - 1;
            if ( v25 )
            {
              v26 = v25 - 4;
              if ( v26 )
              {
                v27 = v26 - 4;
                if ( v27 )
                {
                  if ( v27 == 5 )
                    *((_DWORD *)*a2 + 5) |= 2u;
                }
                else
                {
                  v44 = (unsigned int *)v5[3];
                  v45 = v18;
                  *(_OWORD *)v18 = *(_OWORD *)v44;
                  v46 = v18 - (_BYTE *)*a2;
                  v18 += 16;
                  *v19 = v46;
                  v47 = v18;
                  v48 = (const void **)*((_QWORD *)v44 + 1);
                  if ( *v44 )
                  {
                    memmove(v18, v48, 16LL * *v44);
                    v47 = v18;
                    *((_QWORD *)v45 + 1) = v18 - (_BYTE *)*a2;
                    v18 += 16 * *v44;
                  }
                  else
                  {
                    *((_QWORD *)v45 + 1) = 0LL;
                  }
                  if ( *v44 )
                  {
                    v49 = v48 + 1;
                    v50 = v47 + 8;
                    do
                    {
                      *v50 = v18 - (_BYTE *)*a2;
                      v51 = 4LL * *((unsigned __int8 *)*v49 + 1) + 8;
                      memmove(v18, *v49, v51);
                      ++v6;
                      v50 += 2;
                      v18 += (v51 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
                      v49 += 2;
                    }
                    while ( v6 < *v44 );
                    v19 = v53;
                    v6 = 0;
                  }
                  v10 = Src;
                }
                goto LABEL_20;
              }
            }
          }
        }
        goto LABEL_31;
      }
    }
LABEL_30:
    v36 = (const void **)v5[3];
    v37 = v18;
    *v19 = v18 - (_BYTE *)*a2;
    v38 = v18 + 16;
    memmove(v38, v36[1], *(unsigned __int16 *)v36);
    v39 = *(_WORD *)v36;
    *(_WORD *)v37 = *(_WORD *)v36;
    *((_WORD *)v37 + 1) = v39;
    *((_QWORD *)v37 + 1) = v38 - (_BYTE *)*a2;
    v18 = &v38[(*(unsigned __int16 *)v36 + 7LL) & 0xFFFFFFF8LL];
    goto LABEL_20;
  }
  return v6;
}
