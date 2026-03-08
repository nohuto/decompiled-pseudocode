/*
 * XREFs of AuthzBasepEvaluateAttribute @ 0x1402E2940
 * Callers:
 *     AuthzBasepEvaluateAceCondition @ 0x140246980 (AuthzBasepEvaluateAceCondition.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AuthzBasepEvaluateAttribute(__int64 a1)
{
  unsigned int v1; // edx
  unsigned int v3; // eax
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  _QWORD *v9; // rax

  v1 = 0;
  if ( !a1 )
    return (unsigned int)-1;
  v3 = *(_DWORD *)(a1 + 40);
  if ( v3 )
  {
    if ( v3 <= 1 )
    {
      v4 = *(unsigned __int16 *)(a1 + 32) - 1;
      if ( !v4 || (v5 = v4 - 1) == 0 )
      {
LABEL_9:
        v9 = *(_QWORD **)(a1 + 48);
        if ( v9 && *v9 )
          return 1;
        return v1;
      }
      v6 = v5 - 1;
      if ( !v6 )
      {
        LOBYTE(v1) = **(_WORD **)(a1 + 48) != 0;
        return v1;
      }
      v7 = v6 - 2;
      if ( v7 )
      {
        v8 = v7 - 1;
        if ( !v8 )
          goto LABEL_9;
        if ( v8 != 10 )
          return v1;
      }
      if ( !*(_DWORD *)(*(_QWORD *)(a1 + 48) + 8LL) )
        return v1;
    }
    return 1;
  }
  return v1;
}
