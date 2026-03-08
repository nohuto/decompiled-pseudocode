/*
 * XREFs of DifFindThreadContextData @ 0x1405D2280
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DifFindThreadContextData(int a1)
{
  __int64 v2; // rdx
  _QWORD *i; // rax
  _QWORD *v4; // rcx

  if ( DifPluginStates[a1] )
  {
    v2 = *(_QWORD *)&KeGetCurrentThread()[1].WaitBlockFill11[64];
    if ( v2 )
    {
      if ( *(int *)v2 >= 1 )
      {
        for ( i = *(_QWORD **)(v2 + 8); i; i = (_QWORD *)*i )
        {
          v4 = i - 2;
          if ( i == (_QWORD *)16 )
            break;
          if ( a1 == *(_DWORD *)v4 )
            return v4[1];
        }
      }
    }
  }
  return 0LL;
}
