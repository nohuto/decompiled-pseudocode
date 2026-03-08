/*
 * XREFs of SetSharedPropForFilteredProcesses @ 0x1C021F288
 * Callers:
 *     NtUserSetProp @ 0x1C0100EE0 (NtUserSetProp.c)
 *     InternalSetProp @ 0x1C01011E0 (InternalSetProp.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SetSharedPropForFilteredProcesses(__int64 a1, __int16 a2, __int64 a3)
{
  __int64 v5; // rax
  char *i; // rdi
  int v7; // ebx
  __int64 CurrentProcessWow64Process; // rax
  char *v9; // rax
  __int16 v10; // cx

  v5 = *(_QWORD *)(a1 + 40);
  if ( *(char *)(v5 + 19) >= 0 )
  {
    for ( i = *(char **)(*(int *)(v5 + 200) + *(_QWORD *)(v5 + 296) - 8LL); i; i = *(char **)v9 )
    {
      v7 = 0;
      CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(a1);
      ProbeForWrite(i, 0x618uLL, CurrentProcessWow64Process != 0 ? 1 : 4);
      while ( 1 )
      {
        a1 = 3LL * v7;
        v9 = &i[24 * v7];
        if ( v7 >= 64 )
          break;
        v10 = *((_WORD *)v9 + 8);
        if ( !v10 )
          return 0LL;
        if ( v10 == a2 )
        {
          *((_QWORD *)v9 + 1) = a3;
          return 1LL;
        }
        ++v7;
      }
    }
  }
  return 0LL;
}
