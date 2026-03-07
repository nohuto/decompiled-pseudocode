__int64 __fastcall KsepResolveShimHooks(__int64 a1, int *a2)
{
  __int64 v4; // r15
  int *v5; // rsi
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  __int64 v9; // rbx
  __int64 v10; // rdi
  int v11; // r12d
  __int64 result; // rax
  unsigned __int64 ExportedRoutineByName; // rax
  __int64 v14; // [rsp+50h] [rbp+8h]

  v14 = 0LL;
  if ( !a1 || !a2 )
    return 3221225485LL;
  LODWORD(v4) = 0;
  v5 = a2;
  do
  {
    v6 = *v5;
    if ( *v5 == 4 )
      break;
    if ( v6 )
    {
      v7 = v6 - 1;
      if ( v7 )
      {
        v8 = v7 - 1;
        if ( !v8 )
        {
          result = KsepGetModuleInfoByName(*((PCWSTR *)v5 + 1));
          if ( (int)result < 0 )
            return result;
          v9 = v14;
          goto LABEL_11;
        }
        if ( v8 != 1 )
          return 3221225485LL;
        v9 = 0LL;
      }
      else
      {
        v9 = *(_QWORD *)(a1 + 320);
      }
    }
    else
    {
      v9 = *(_QWORD *)(a1 + 24);
    }
    v14 = v9;
LABEL_11:
    v10 = *((_QWORD *)v5 + 2);
    v11 = 0;
    if ( v10 )
    {
      while ( *(_DWORD *)v10 != 2 )
      {
        if ( !*(_DWORD *)v10 )
        {
          ExportedRoutineByName = RtlFindExportedRoutineByName(v9, *(char **)(v10 + 8));
          if ( !ExportedRoutineByName )
            return 3221225473LL;
          *(_QWORD *)(v10 + 24) = ExportedRoutineByName;
        }
        v10 = *((_QWORD *)v5 + 2) + 32LL * (unsigned int)++v11;
        if ( !v10 )
          break;
      }
    }
    v4 = (unsigned int)(v4 + 1);
    v5 = &a2[6 * v4];
  }
  while ( v5 );
  return 0LL;
}
