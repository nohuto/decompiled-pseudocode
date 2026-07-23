/*
 * XREFs of SepAdtMarshallAuditRecord @ 0x1403C2AF4
 * Callers:
 *     SepAdtLogAuditRecord @ 0x1403C2884 (SepAdtLogAuditRecord.c)
 * Callees:
 *     memmove @ 0x140414040 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SepAdtMarshallAuditRecord(_DWORD *Src, void **a2, _DWORD *a3, POOL_TYPE a4)
{
  unsigned int v4; // r11d
  char *v5; // r15
  unsigned int v6; // ebp
  _DWORD *v10; // r13
  unsigned int v11; // ebx
  unsigned int v12; // edi
  char *i; // r10
  unsigned int v14; // edx
  unsigned int v15; // ebx
  PVOID PoolWithTag; // rax
  unsigned int v17; // r8d
  int v18; // edx
  char *v19; // rsi
  signed __int64 *v20; // r12
  int v21; // eax
  const void **v22; // rdi
  char *v23; // rbx
  char *v24; // rsi
  __int16 v25; // ax
  unsigned int *v27; // rax
  __int64 *v28; // r8
  __int64 v29; // r9
  __int64 v30; // rax
  unsigned int *v31; // rdi
  char *v32; // rbx
  signed __int64 v33; // rax
  char *v34; // rdx
  const void **v35; // r13
  int v36; // ecx
  const void **v37; // r12
  _QWORD *v38; // r13
  size_t v39; // rbx
  unsigned int v40; // [rsp+20h] [rbp-48h]
  signed __int64 *v41; // [rsp+30h] [rbp-38h]

  v4 = Src[2];
  v5 = (char *)(Src + 6);
  v6 = 0;
  v10 = Src;
  v11 = 0;
  v12 = 0;
  for ( i = (char *)(Src + 6); v12 < v4; v11 += v14 )
  {
    if ( *(_DWORD *)i == 17 )
    {
      v27 = (unsigned int *)*((_QWORD *)i + 3);
      v14 = 16 * (*v27 + 1);
      if ( *v27 )
      {
        v28 = (__int64 *)(*((_QWORD *)v27 + 1) + 8LL);
        v29 = *v27;
        do
        {
          v30 = *v28;
          v28 += 2;
          v14 += (4 * *(unsigned __int8 *)(v30 + 1) + 15) & 0xFFFFFFF8;
          --v29;
        }
        while ( v29 );
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
  PoolWithTag = ExAllocatePoolWithTag(a4, v15, 0x70416553u);
  *a2 = PoolWithTag;
  if ( !PoolWithTag )
  {
    *a3 = 0;
    return (unsigned int)-1073741670;
  }
  *a3 = (a4 != PagedPool) + 4;
  memmove(*a2, v10, 1048 - 32LL * (unsigned int)(32 - v10[2]));
  v17 = 0;
  v40 = 0;
  *((_DWORD *)*a2 + 3) = v15;
  *((_DWORD *)*a2 + 5) |= 1u;
  v18 = v10[2];
  v19 = (char *)*a2 - 32 * (unsigned int)(32 - v18) + 1048;
  if ( v18 )
  {
    v20 = (signed __int64 *)((char *)*a2 + 48);
    v41 = v20;
    do
    {
      v21 = *(_DWORD *)v5;
      if ( *(int *)v5 > 22 )
      {
        if ( v21 <= 24 )
          goto LABEL_29;
        if ( v21 > 27 )
        {
          if ( v21 <= 31 )
            goto LABEL_29;
          switch ( v21 )
          {
            case ' ':
              *((_DWORD *)*a2 + 5) |= 2u;
              goto LABEL_29;
            case '!':
              goto LABEL_29;
            case '"':
LABEL_25:
              v22 = (const void **)*((_QWORD *)v5 + 3);
              v23 = v19;
              *v20 = v19 - (_BYTE *)*a2;
              v24 = v19 + 16;
              memmove(v24, v22[1], *(unsigned __int16 *)v22);
              v25 = *(_WORD *)v22;
              *(_WORD *)v23 = *(_WORD *)v22;
              *((_WORD *)v23 + 1) = v25;
              *((_QWORD *)v23 + 1) = v24 - (_BYTE *)*a2;
              v19 = &v24[(*(unsigned __int16 *)v22 + 7LL) & 0xFFFFFFF8LL];
              goto LABEL_26;
          }
        }
      }
      else
      {
        if ( v21 == 22 )
        {
          *((_DWORD *)*a2 + 5) |= 2u;
          goto LABEL_27;
        }
        if ( v21 > 0 )
        {
          if ( v21 <= 2 )
            goto LABEL_25;
          if ( v21 == 4 )
            goto LABEL_29;
          if ( v21 > 7 )
          {
            if ( v21 > 9 && v21 != 13 )
            {
              if ( v21 == 17 )
              {
                v31 = (unsigned int *)*((_QWORD *)v5 + 3);
                v32 = v19;
                *(_OWORD *)v19 = *(_OWORD *)v31;
                v33 = v19 - (_BYTE *)*a2;
                v19 += 16;
                *v20 = v33;
                v34 = v19;
                v35 = (const void **)*((_QWORD *)v31 + 1);
                if ( *v31 )
                {
                  memmove(v19, v35, 16LL * *v31);
                  v34 = v19;
                  v17 = v40;
                  *((_QWORD *)v32 + 1) = v19 - (_BYTE *)*a2;
                  v36 = *v31;
                  v19 += 16 * *v31;
                }
                else
                {
                  *((_QWORD *)v32 + 1) = 0LL;
                  v36 = *v31;
                }
                if ( v36 )
                {
                  v37 = v35 + 1;
                  v38 = v34 + 8;
                  do
                  {
                    *v38 = v19 - (_BYTE *)*a2;
                    v39 = 4LL * *((unsigned __int8 *)*v37 + 1) + 8;
                    memmove(v19, *v37, v39);
                    ++v6;
                    v38 += 2;
                    v19 += (v39 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
                    v37 += 2;
                  }
                  while ( v6 < *v31 );
                  v20 = v41;
                  v6 = 0;
                  v17 = v40;
                }
                v10 = Src;
              }
              goto LABEL_27;
            }
LABEL_29:
            memmove(v19, *((const void **)v5 + 3), *((unsigned int *)v5 + 1));
            *v20 = v19 - (_BYTE *)*a2;
            v19 += (*((unsigned int *)v5 + 1) + 7LL) & 0xFFFFFFFFFFFFFFF8uLL;
LABEL_26:
            v17 = v40;
          }
        }
      }
LABEL_27:
      ++v17;
      v20 += 4;
      v5 += 32;
      v40 = v17;
      v41 = v20;
    }
    while ( v17 < v10[2] );
  }
  return v6;
}
