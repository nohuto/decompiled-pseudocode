__int64 __fastcall CitpProgramIdCopy(struct _CIT_PROGRAM_ID *a1, const struct _CIT_PROGRAM_ID *a2)
{
  const unsigned __int16 *v4; // rdx
  int v5; // ebx
  __int64 v7; // rdi
  __int64 v8; // r8
  const unsigned __int16 *v9; // rdx

  *(_OWORD *)a1 = *(_OWORD *)a2;
  *((_OWORD *)a1 + 1) = *((_OWORD *)a2 + 1);
  *((_QWORD *)a1 + 4) = *((_QWORD *)a2 + 4);
  *(_QWORD *)a1 = 0LL;
  *((_QWORD *)a1 + 1) = 0LL;
  v4 = *(const unsigned __int16 **)a2;
  if ( v4 )
  {
    v7 = -1LL;
    v8 = -1LL;
    do
      ++v8;
    while ( v4[v8] );
    v5 = CitpStringDuplicate((unsigned __int16 **)a1, v4, v8);
    if ( v5 >= 0 )
    {
      v9 = (const unsigned __int16 *)*((_QWORD *)a2 + 1);
      if ( !v9 )
        return 0;
      do
        ++v7;
      while ( v9[v7] );
      v5 = CitpStringDuplicate((unsigned __int16 **)a1 + 1, v9, v7);
      if ( v5 >= 0 )
        return 0;
    }
  }
  else
  {
    v5 = -1073741637;
    CitpLogFailureWorker(3221225659LL, 0LL);
  }
  CitpProgramIdCleanup((void **)a1);
  return (unsigned int)v5;
}
