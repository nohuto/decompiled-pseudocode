struct _CIT_PROG_DATA *__fastcall CitpProgDataEnsure(struct _CIT_IMPACT_CONTEXT *a1, const struct _CIT_PROGRAM_ID *a2)
{
  struct _CIT_PROG_DATA *v4; // rbx
  _QWORD *v6; // rax
  struct _CIT_IMPACT_CONTEXT *v7; // rbx
  char *v8; // rsi
  char *v9; // rcx
  char **v10; // rax
  struct _CIT_PROG_DATA *i; // rdx
  __int64 v12; // rcx
  unsigned int v13; // eax
  struct _CIT_IMPACT_CONTEXT *v14; // rcx
  struct _CIT_IMPACT_CONTEXT **v15; // rdx
  __int64 v16; // rax
  __int128 v17; // xmm1
  __int64 v18; // xmm0_8
  __int64 v19; // rdx
  unsigned int v20; // r8d
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // [rsp+20h] [rbp-40h]
  __int128 v24; // [rsp+30h] [rbp-30h] BYREF
  __int128 v25; // [rsp+40h] [rbp-20h]
  __int64 v26; // [rsp+50h] [rbp-10h]
  __int64 v27; // [rsp+90h] [rbp+30h]

  v24 = 0LL;
  v26 = 0LL;
  v25 = 0LL;
  v4 = CitpProgDataFind(a1, a2);
  if ( !v4 )
  {
    if ( (int)CitpProgramIdCopy((struct _CIT_PROGRAM_ID *)&v24, a2) < 0 )
    {
LABEL_3:
      v4 = 0LL;
      goto LABEL_4;
    }
    v6 = (_QWORD *)((char *)a1 + 8);
    v7 = (struct _CIT_IMPACT_CONTEXT *)*((_QWORD *)a1 + 1);
    if ( v7 == (struct _CIT_IMPACT_CONTEXT *)((char *)a1 + 8) )
    {
      v8 = (char *)a1 + 24;
      if ( *(char **)v8 == v8 )
        goto LABEL_3;
      v9 = (char *)*((_QWORD *)a1 + 4);
      if ( *(char **)v9 != v8 )
        goto LABEL_24;
      v10 = (char **)*((_QWORD *)v9 + 1);
      if ( *v10 != v9 )
        goto LABEL_24;
      *((_QWORD *)a1 + 4) = v10;
      v4 = (struct _CIT_PROG_DATA *)(v9 - 16);
      *v10 = v8;
      --*((_DWORD *)a1 + 15);
      *((_QWORD *)v9 + 1) = v9;
      *(_QWORD *)v9 = v9;
      v9[18] = 0;
      v27 = *((_QWORD *)v9 - 1) & (-1LL << (*((_DWORD *)a1 + 19) & 0x1F));
      for ( i = (struct _CIT_PROG_DATA *)(*((_QWORD *)a1 + 10)
                                        + 8LL
                                        * ((37
                                          * (BYTE6(v27)
                                           + 37
                                           * (BYTE5(v27)
                                            + 37
                                            * (BYTE4(v27)
                                             + 37
                                             * (BYTE3(v27)
                                              + 37
                                              * (BYTE2(v27) + 37 * (BYTE1(v27) + 37 * ((unsigned __int8)v27 + 11623883)))))))
                                          + HIBYTE(v27)) & (unsigned int)((*((_DWORD *)a1 + 19) >> 5) - 1)));
            (*(_QWORD *)i & 1) == 0;
            i = *(struct _CIT_PROG_DATA **)i )
      {
        if ( *(struct _CIT_PROG_DATA **)i == v4 )
        {
          *(_QWORD *)i = *(_QWORD *)v4;
          --*((_DWORD *)a1 + 18);
          break;
        }
      }
      *(_QWORD *)v4 = 0LL;
      CitpProgDataReinitialize(v4);
    }
    else
    {
      if ( *((_QWORD **)v7 + 1) != v6 )
        goto LABEL_24;
      v12 = *(_QWORD *)v7;
      if ( *(struct _CIT_IMPACT_CONTEXT **)(*(_QWORD *)v7 + 8LL) != v7 )
        goto LABEL_24;
      *v6 = v12;
      v8 = (char *)a1 + 24;
      *(_QWORD *)(v12 + 8) = v6;
      v4 = (struct _CIT_IMPACT_CONTEXT *)((char *)v7 - 16);
    }
    v13 = *((_DWORD *)a1 + 16);
    v14 = (struct _CIT_PROG_DATA *)((char *)v4 + 16);
    if ( v13 >= *((_DWORD *)a1 + 17) )
    {
      ++*((_DWORD *)a1 + 15);
      v16 = *(_QWORD *)v8;
      if ( *(char **)(*(_QWORD *)v8 + 8LL) == v8 )
      {
        *(_QWORD *)v14 = v16;
        *((_QWORD *)v4 + 3) = v8;
        *(_QWORD *)(v16 + 8) = v14;
        *(_QWORD *)v8 = v14;
        *((_BYTE *)v4 + 34) = 1;
        goto LABEL_23;
      }
    }
    else
    {
      *((_DWORD *)a1 + 16) = v13 + 1;
      v15 = (struct _CIT_IMPACT_CONTEXT **)*((_QWORD *)a1 + 6);
      if ( *v15 == (struct _CIT_IMPACT_CONTEXT *)((char *)a1 + 40) )
      {
        *(_QWORD *)v14 = (char *)a1 + 40;
        *((_QWORD *)v4 + 3) = v15;
        *v15 = v14;
        *((_QWORD *)a1 + 6) = v14;
        *((_BYTE *)v4 + 35) = 1;
LABEL_23:
        v17 = v25;
        *(_OWORD *)((char *)v4 + 40) = v24;
        v18 = v26;
        v26 = 0LL;
        *(_OWORD *)((char *)v4 + 56) = v17;
        *((_QWORD *)v4 + 9) = v18;
        v19 = *((_QWORD *)v4 + 7);
        *((_QWORD *)v4 + 1) = v19;
        v20 = *((_DWORD *)a1 + 19);
        v23 = v19 & (-1LL << (v20 & 0x1F));
        v24 = 0LL;
        v25 = 0LL;
        v21 = *((_QWORD *)a1 + 10);
        v22 = (37
             * (BYTE6(v23)
              + 37
              * (BYTE5(v23)
               + 37
               * (BYTE4(v23)
                + 37 * (BYTE3(v23) + 37 * (BYTE2(v23) + 37 * (BYTE1(v23) + 37 * ((unsigned __int8)v23 + 11623883)))))))
             + HIBYTE(v23)) & ((v20 >> 5) - 1);
        *(_QWORD *)v4 = *(_QWORD *)(v21 + 8 * v22);
        *(_QWORD *)(v21 + 8 * v22) = v4;
        ++*((_DWORD *)a1 + 18);
        goto LABEL_4;
      }
    }
LABEL_24:
    __fastfail(3u);
  }
LABEL_4:
  CitpProgramIdCleanup((void **)&v24);
  return v4;
}
