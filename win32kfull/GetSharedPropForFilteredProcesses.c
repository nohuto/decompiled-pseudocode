/*
 * XREFs of GetSharedPropForFilteredProcesses @ 0x1C021F1BC
 * Callers:
 *     _GetProp @ 0x1C002ED8C (_GetProp.c)
 *     NtUserGetProp @ 0x1C00B6C30 (NtUserGetProp.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetSharedPropForFilteredProcesses(__int64 a1, __int16 a2)
{
  __int64 v3; // rax
  char *i; // rdi
  int v5; // ebx
  __int64 CurrentProcessWow64Process; // rax
  char *v7; // rax
  __int16 v8; // cx
  __int64 result; // rax

  v3 = *(_QWORD *)(a1 + 40);
  if ( *(char *)(v3 + 19) >= 0 )
  {
    for ( i = *(char **)(*(int *)(v3 + 200) + *(_QWORD *)(v3 + 296) - 8LL); i; i = *(char **)v7 )
    {
      v5 = 0;
      CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(a1);
      ProbeForRead(i, 0x618uLL, CurrentProcessWow64Process != 0 ? 1 : 4);
      while ( 1 )
      {
        a1 = 3LL * v5;
        v7 = &i[24 * v5];
        if ( v5 >= 64 )
          break;
        v8 = *((_WORD *)v7 + 8);
        result = *((_QWORD *)v7 + 1);
        if ( !v8 )
          return 0LL;
        if ( v8 == a2 )
          return result;
        ++v5;
      }
    }
  }
  return 0LL;
}
