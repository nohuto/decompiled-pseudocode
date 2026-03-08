/*
 * XREFs of LdrEnumResources @ 0x1409B66B0
 * Callers:
 *     <none>
 * Callees:
 *     LdrpCompareResourceNamesWithValidation @ 0x1402ECE20 (LdrpCompareResourceNamesWithValidation.c)
 *     RtlImageDirectoryEntryToData @ 0x14035E710 (RtlImageDirectoryEntryToData.c)
 */

__int64 __fastcall LdrEnumResources(__int64 a1, const wchar_t **a2, unsigned int a3, unsigned int *a4, __int64 a5)
{
  unsigned int v5; // r13d
  unsigned int v7; // esi
  const wchar_t **v8; // r15
  unsigned int v9; // edi
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rbx
  int v14; // ecx
  unsigned int *v15; // r14
  int v16; // eax
  unsigned int v17; // ebp
  bool v18; // zf
  __int64 v19; // rcx
  const wchar_t *v20; // r8
  int v21; // eax
  __int64 v22; // rax
  __int64 v23; // rdi
  __int64 v24; // rdi
  unsigned int *v25; // rbp
  int v26; // edx
  int v27; // eax
  const wchar_t *v28; // r8
  int v29; // eax
  __int64 v30; // rax
  __int64 v31; // rsi
  __int64 v32; // rsi
  unsigned int *v33; // r15
  int v34; // ecx
  int v35; // eax
  __int64 v36; // rax
  __int64 v37; // rcx
  __int64 v38; // r9
  unsigned int v39; // [rsp+30h] [rbp-68h]
  unsigned int v40; // [rsp+34h] [rbp-64h]
  unsigned int v41; // [rsp+38h] [rbp-60h]
  unsigned int v42; // [rsp+3Ch] [rbp-5Ch]
  unsigned int v43; // [rsp+40h] [rbp-58h]
  int v44; // [rsp+44h] [rbp-54h]
  int v45; // [rsp+48h] [rbp-50h]
  unsigned int v46; // [rsp+4Ch] [rbp-4Ch]
  const wchar_t **v48; // [rsp+A8h] [rbp+10h]
  char v50; // [rsp+B8h] [rbp+20h] BYREF

  v48 = a2;
  v5 = 0;
  v7 = a3;
  v8 = a2;
  v9 = 0;
  v41 = 0;
  if ( a5 )
    v42 = *a4;
  else
    v42 = 0;
  *a4 = 0;
  LOBYTE(a2) = 1;
  v10 = RtlImageDirectoryEntryToData(a1, (int)a2, 2, (int)&v50);
  v12 = v10;
  if ( !v10 )
    return 3221225609LL;
  v14 = *(unsigned __int16 *)(v10 + 14);
  v15 = (unsigned int *)(v10 + 16);
  v16 = *(unsigned __int16 *)(v10 + 12);
  v17 = 0;
  v18 = v16 + v14 == 0;
  v19 = (unsigned int)(v16 + v14);
  v45 = 0;
  v40 = v19;
  v44 = 0;
  if ( v18 )
  {
LABEL_37:
    *a4 = v9;
    return v17;
  }
  while ( v7 )
  {
    v20 = *v8;
    v50 = 0;
    v21 = LdrpCompareResourceNamesWithValidation(v19, v11, v20, v12, v15, &v50);
    v19 = v40;
    if ( !v21 )
      break;
LABEL_35:
    v15 += 2;
    if ( ++v44 >= (unsigned int)v19 )
    {
      v9 = v41;
      v17 = v45;
      goto LABEL_37;
    }
  }
  v22 = v15[1];
  if ( (int)v22 < 0 )
  {
    v23 = *v15;
    if ( (int)v23 >= 0 )
    {
      v24 = *(unsigned __int16 *)v15;
    }
    else
    {
      LODWORD(v23) = v23 & 0x7FFFFFFF;
      v24 = v12 + v23;
    }
    LODWORD(v22) = v22 & 0x7FFFFFFF;
    v43 = 0;
    v25 = (unsigned int *)(v22 + v12 + 16);
    v26 = *(unsigned __int16 *)(v22 + v12 + 14);
    v27 = *(unsigned __int16 *)(v22 + v12 + 12);
    v18 = v27 + v26 == 0;
    v11 = (unsigned int)(v27 + v26);
    v39 = v11;
    if ( !v18 )
    {
      do
      {
        if ( v7 <= 1
          || (v28 = v8[1],
              v50 = 0,
              v29 = LdrpCompareResourceNamesWithValidation(v19, v11, v28, v12, v25, &v50),
              v11 = v39,
              !v29) )
        {
          v30 = v25[1];
          if ( (int)v30 >= 0 )
            return 3221225595LL;
          v31 = *v25;
          if ( (int)v31 >= 0 )
          {
            v32 = *(unsigned __int16 *)v25;
          }
          else
          {
            LODWORD(v31) = v31 & 0x7FFFFFFF;
            v32 = v12 + v31;
          }
          LODWORD(v30) = v30 & 0x7FFFFFFF;
          v33 = (unsigned int *)(v30 + v12 + 16);
          v34 = *(unsigned __int16 *)(v30 + v12 + 14);
          v35 = *(unsigned __int16 *)(v30 + v12 + 12);
          v18 = v35 + v34 == 0;
          v19 = (unsigned int)(v35 + v34);
          v46 = v19;
          if ( !v18 )
          {
            do
            {
              if ( a3 <= 2
                || (v50 = 0, !(unsigned int)LdrpCompareResourceNamesWithValidation(v19, v11, v48[2], v12, v33, &v50)) )
              {
                v36 = v33[1];
                if ( (int)v36 < 0 )
                  return 3221225595LL;
                v37 = *v33;
                if ( (int)v37 >= 0 )
                {
                  v19 = *(unsigned __int16 *)v33;
                }
                else
                {
                  LODWORD(v37) = v37 & 0x7FFFFFFF;
                  v19 = v12 + v37;
                }
                v11 = 5LL * v41++;
                if ( v41 > v42 )
                {
                  v45 = -1073741820;
                }
                else
                {
                  v38 = a5;
                  *(_QWORD *)(a5 + 8 * v11) = v24;
                  *(_QWORD *)(v38 + 8 * v11 + 8) = v32;
                  *(_QWORD *)(v38 + 8 * v11 + 16) = v19;
                  *(_QWORD *)(v38 + 8 * v11 + 24) = a1 + *(unsigned int *)(v36 + v12);
                  *(_QWORD *)(v38 + 8 * v11 + 32) = *(unsigned int *)(v36 + v12 + 4);
                }
              }
              ++v5;
              v33 += 2;
            }
            while ( v5 < v46 );
            v11 = v39;
          }
          v8 = v48;
          v5 = 0;
          v7 = a3;
        }
        v25 += 2;
        ++v43;
      }
      while ( v43 < (unsigned int)v11 );
      v19 = v40;
    }
    goto LABEL_35;
  }
  return 3221225595LL;
}
