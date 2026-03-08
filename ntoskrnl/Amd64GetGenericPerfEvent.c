/*
 * XREFs of Amd64GetGenericPerfEvent @ 0x1405270AC
 * Callers:
 *     Amd64InitializeProfiling @ 0x140A95700 (Amd64InitializeProfiling.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Amd64GetGenericPerfEvent(int a1)
{
  int v2; // edx
  int v3; // edx
  int v4; // edx
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v9; // edx
  __int64 *v10; // rcx
  __int64 v11; // rax
  __int64 *i; // rdx

  v2 = (unsigned __int8)KeGetCurrentPrcb()->CpuType - 15;
  if ( !v2 )
    goto LABEL_13;
  v3 = v2 - 1;
  if ( !v3 )
    goto LABEL_13;
  v4 = v3 - 1;
  if ( !v4 )
    goto LABEL_13;
  v5 = v4 - 1;
  if ( !v5 )
    goto LABEL_13;
  v6 = v5 - 2;
  if ( !v6 )
  {
    v10 = Amd64F14Events;
    goto LABEL_14;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    v10 = Amd64F15Events;
    goto LABEL_14;
  }
  v8 = v7 - 1;
  if ( v8 )
  {
    v9 = v8 - 1;
    if ( v9 && v9 != 2 )
      return 0LL;
    v10 = Amd64F17Events;
  }
  else
  {
LABEL_13:
    v10 = (__int64 *)"\n";
  }
LABEL_14:
  v11 = 0LL;
  for ( i = v10; *(_DWORD *)i != a1; i += 2 )
  {
    v11 = (unsigned int)(v11 + 1);
    if ( (unsigned int)v11 >= 2 )
      return 0LL;
  }
  return v10[2 * v11 + 1];
}
