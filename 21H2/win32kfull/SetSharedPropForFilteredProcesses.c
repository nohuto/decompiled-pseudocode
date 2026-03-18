/*
 * XREFs of SetSharedPropForFilteredProcesses @ 0x1C0235C20
 * Callers:
 *     NtUserSetProp @ 0x1C00791E0 (NtUserSetProp.c)
 *     InternalSetProp @ 0x1C0083110 (InternalSetProp.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SetSharedPropForFilteredProcesses(__int64 a1, __int16 a2, __int64 a3)
{
  __int64 v5; // rax
  char *i; // rbx
  int v7; // edi
  __int64 CurrentProcessWow64Process; // rax
  char *v9; // rdx
  __int16 v10; // ax

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
        a1 = v7;
        v9 = &i[24 * v7];
        if ( v7 >= 64 )
          break;
        v10 = *((_WORD *)v9 + 8);
        if ( !v10 )
          return 0LL;
        if ( v10 == a2 )
        {
          *(_QWORD *)&i[24 * v7 + 8] = a3;
          return 1LL;
        }
        ++v7;
      }
    }
  }
  return 0LL;
}
