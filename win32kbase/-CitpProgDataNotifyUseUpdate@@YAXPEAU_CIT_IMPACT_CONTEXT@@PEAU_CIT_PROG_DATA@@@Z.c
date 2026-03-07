void __fastcall CitpProgDataNotifyUseUpdate(struct _CIT_IMPACT_CONTEXT *a1, struct _CIT_PROG_DATA *a2)
{
  char *v4; // r8
  __int64 v5; // rax
  char **v6; // rcx
  char *v7; // r11
  __int64 v8; // rax
  __int64 *v9; // r10
  __int64 *v10; // rax
  __int64 **v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rcx
  char **v14; // rax
  struct _CIT_IMPACT_CONTEXT **v15; // rcx
  char *v16; // rbx
  _QWORD *v17; // rax
  __int64 v18; // rcx
  _QWORD *v19; // rdx
  _QWORD *v20; // rcx
  __int64 v21; // r8

  if ( *((_BYTE *)a2 + 34) )
  {
    v4 = (char *)a2 + 16;
    v5 = *((_QWORD *)a2 + 2);
    if ( *(struct _CIT_PROG_DATA **)(v5 + 8) != (struct _CIT_PROG_DATA *)((char *)a2 + 16) )
      goto LABEL_22;
    v6 = (char **)*((_QWORD *)a2 + 3);
    if ( *v6 != v4 )
      goto LABEL_22;
    *v6 = (char *)v5;
    v7 = (char *)a1 + 24;
    *(_QWORD *)(v5 + 8) = v6;
    v8 = *((_QWORD *)a1 + 3);
    if ( *(struct _CIT_IMPACT_CONTEXT **)(v8 + 8) != (struct _CIT_IMPACT_CONTEXT *)((char *)a1 + 24) )
      goto LABEL_22;
    *(_QWORD *)v4 = v8;
    *((_QWORD *)a2 + 3) = v7;
    *(_QWORD *)(v8 + 8) = v4;
    *(_QWORD *)v7 = v4;
    v9 = (__int64 *)*((_QWORD *)a1 + 6);
    if ( (__int64)(*((unsigned int *)a2 + 21)
                 + 30000 * (*((unsigned int *)a2 + 20) - (unsigned __int64)*((unsigned int *)v9 + 16))
                 - *((unsigned int *)v9 + 17)) < 0 )
      goto LABEL_13;
    v10 = (__int64 *)*v9;
    if ( *(__int64 **)(*v9 + 8) != v9 )
      goto LABEL_22;
    v11 = (__int64 **)v9[1];
    if ( *v11 != v9 )
      goto LABEL_22;
    *v11 = v10;
    v10[1] = (__int64)v11;
    v12 = *(_QWORD *)v7;
    if ( *(char **)(*(_QWORD *)v7 + 8LL) != v7 )
      goto LABEL_22;
    *v9 = v12;
    v9[1] = (__int64)v7;
    *(_QWORD *)(v12 + 8) = v9;
    *(_QWORD *)v7 = v9;
    *((_WORD *)v9 + 9) = 1;
    v13 = *(_QWORD *)v4;
    if ( *(char **)(*(_QWORD *)v4 + 8LL) != v4
      || (v14 = (char **)*((_QWORD *)a2 + 3), *v14 != v4)
      || (*v14 = (char *)v13,
          *(_QWORD *)(v13 + 8) = v14,
          v15 = (struct _CIT_IMPACT_CONTEXT **)*((_QWORD *)a1 + 6),
          *v15 != (struct _CIT_IMPACT_CONTEXT *)((char *)a1 + 40)) )
    {
LABEL_22:
      __fastfail(3u);
    }
    *(_QWORD *)v4 = (char *)a1 + 40;
    *((_QWORD *)a2 + 3) = v15;
    *v15 = (struct _CIT_IMPACT_CONTEXT *)v4;
    *((_QWORD *)a1 + 6) = v4;
    *((_WORD *)a2 + 17) = 256;
  }
LABEL_13:
  if ( *((_BYTE *)a2 + 35) )
  {
    v16 = (char *)a1 + 40;
    while ( 1 )
    {
      v21 = *((_QWORD *)a2 + 3);
      if ( (char *)v21 == v16
        || (__int64)(*((unsigned int *)a2 + 21)
                   + 30000 * (*((unsigned int *)a2 + 20) - (unsigned __int64)*(unsigned int *)(v21 + 64))
                   - *(unsigned int *)(v21 + 68)) < 0 )
      {
        break;
      }
      v17 = (_QWORD *)((char *)a2 + 16);
      v18 = *((_QWORD *)a2 + 2);
      if ( *(struct _CIT_PROG_DATA **)(v18 + 8) != (struct _CIT_PROG_DATA *)((char *)a2 + 16) )
        goto LABEL_22;
      v19 = (_QWORD *)*((_QWORD *)a2 + 3);
      if ( (_QWORD *)*v19 != v17 )
        goto LABEL_22;
      *v19 = v18;
      *(_QWORD *)(v18 + 8) = v19;
      v20 = *(_QWORD **)(v21 + 8);
      if ( *v20 != v21 )
        goto LABEL_22;
      *v17 = v21;
      *((_QWORD *)a2 + 3) = v20;
      *v20 = v17;
      *(_QWORD *)(v21 + 8) = v17;
    }
  }
}
