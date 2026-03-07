char *__fastcall vInitFontSubTable(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdi
  void *v3; // rcx
  char *result; // rax
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 i; // rcx
  __int64 v9; // rcx
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+30h] [rbp-19h] BYREF
  __int64 v11; // [rsp+68h] [rbp+1Fh]
  int v12; // [rsp+70h] [rbp+27h]
  __int64 v13; // [rsp+78h] [rbp+2Fh]
  unsigned int Context; // [rsp+B0h] [rbp+67h] BYREF

  v1 = 0LL;
  Context = 0;
  QueryTable.QueryRoutine = (PRTL_QUERY_REGISTRY_ROUTINE)QueryRegistryFontSubstituteListRoutine;
  QueryTable.Flags = 0;
  memset(&QueryTable.Name, 0, 20);
  QueryTable.DefaultData = 0LL;
  QueryTable.DefaultLength = 0;
  v11 = 0LL;
  v12 = 0;
  v13 = 0LL;
  v2 = *(_QWORD *)(SGDGetSessionState(a1) + 32);
  *(_QWORD *)(v2 + 19472) = 0LL;
  *(_DWORD *)(v2 + 19488) = 1;
  *(_DWORD *)(v2 + 19496) = 0;
  RtlQueryRegistryValues(3u, L"FontSubstitutes", &QueryTable, &Context, 0LL);
  v3 = *(void **)(v2 + 19472);
  result = (char *)*(unsigned int *)(v2 + 19488);
  if ( v3 )
  {
    if ( Context <= (unsigned int)result )
      goto LABEL_5;
    result = PREALLOCMEM2(v3, 196 * (int)result, (unsigned int)(196 * (_DWORD)result), 1651729991LL);
    if ( !result )
      goto LABEL_5;
  }
  else
  {
    v9 = (unsigned int)(196 * (_DWORD)result);
    if ( (_DWORD)v9 )
      result = (char *)Win32AllocPoolZInit(v9, 1651729991LL);
    else
      result = 0LL;
  }
  *(_QWORD *)(v2 + 19472) = result;
LABEL_5:
  v5 = *(_QWORD *)(v2 + 19472);
  if ( v5 )
  {
    *(_OWORD *)v5 = xmmword_1C0319690;
    *(_OWORD *)(v5 + 16) = xmmword_1C03196A0;
    *(_DWORD *)(v5 + 32) = 6684777;
    *(_WORD *)(v5 + 36) = 0;
    v6 = *(_QWORD *)(v2 + 19472);
    *(_OWORD *)(v6 + 64) = xmmword_1C03196B8;
    *(_OWORD *)(v6 + 80) = xmmword_1C03196C8;
    *(_DWORD *)(v6 + 96) = 4587593;
    *(_WORD *)(v6 + 100) = 0;
    v7 = *(_QWORD *)(v2 + 19472);
    *(_OWORD *)(v7 + 130) = xmmword_1C03196E0;
    *(_QWORD *)(v7 + 146) = 0x49005200450053LL;
    *(_DWORD *)(v7 + 154) = 70;
    for ( i = 0LL; i < 2; ++i )
      *(_BYTE *)(*(_QWORD *)(v2 + 19472) + i + 128) = 1;
    do
    {
      result = *(char **)(v2 + 19472);
      result[v1++ + 194] = 1;
    }
    while ( v1 < 2 );
  }
  else
  {
    *(_DWORD *)(v2 + 19488) = 0;
  }
  return result;
}
