void __fastcall CitpInteractionSummariesFlush(struct _CIT_IMPACT_CONTEXT *a1, char a2)
{
  struct _CIT_INTERACTION_SUMMARY **v4; // r15
  __int64 v5; // r12
  unsigned __int64 v6; // rsi
  int v7; // r14d
  struct _CIT_INTERACTION_SUMMARY *v8; // rbx
  struct _CIT_INTERACTION_SUMMARY *v9; // rdx
  struct _CIT_INTERACTION_SUMMARY **v10; // rax
  __int64 v11; // rax
  struct _CIT_INTERACTION_SUMMARY *v12; // [rsp+20h] [rbp-10h] BYREF
  struct _CIT_INTERACTION_SUMMARY **v13; // [rsp+28h] [rbp-8h]

  v4 = (struct _CIT_INTERACTION_SUMMARY **)((char *)a1 + 264);
  v5 = MEMORY[0xFFFFF78000000014];
  v13 = &v12;
  v6 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  v7 = 0;
  v12 = (struct _CIT_INTERACTION_SUMMARY *)&v12;
  while ( 1 )
  {
    v8 = *v4;
    if ( *v4 == (struct _CIT_INTERACTION_SUMMARY *)v4 )
      break;
    CitpInteractionSummaryStopTracking(*v4, v6);
    ++v7;
    if ( !a2 && (*((_BYTE *)v8 + 119) || *((_BYTE *)v8 + 127)) )
    {
      v10 = v13;
      if ( *v13 != (struct _CIT_INTERACTION_SUMMARY *)&v12 )
LABEL_17:
        __fastfail(3u);
      *((_QWORD *)v8 + 1) = v13;
      *(_QWORD *)v8 = &v12;
      *v10 = v8;
      v13 = (struct _CIT_INTERACTION_SUMMARY **)v8;
    }
  }
  if ( v7 )
    ++*((_DWORD *)a1 + 73);
  *((_DWORD *)a1 + 72) = v6;
  *((_QWORD *)a1 + 35) = v5;
  while ( 1 )
  {
    v9 = v12;
    if ( v12 == (struct _CIT_INTERACTION_SUMMARY *)&v12 )
      break;
    if ( *((struct _CIT_INTERACTION_SUMMARY ***)v12 + 1) != &v12 )
      goto LABEL_17;
    v11 = *(_QWORD *)v12;
    if ( *(struct _CIT_INTERACTION_SUMMARY **)(*(_QWORD *)v12 + 8LL) != v12 )
      goto LABEL_17;
    v12 = *(struct _CIT_INTERACTION_SUMMARY **)v12;
    *(_QWORD *)(v11 + 8) = &v12;
    *((_QWORD *)v9 + 1) = v9;
    *(_QWORD *)v9 = v9;
    CitpInteractionSummaryStartTracking(a1, v9);
  }
}
