/*
 * XREFs of FindOpcodeTerm @ 0x1C004B404
 * Callers:
 *     RegOpcodeHandler @ 0x1C004CC68 (RegOpcodeHandler.c)
 *     ParseOpcode @ 0x1C005BD40 (ParseOpcode.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FindOpcodeTerm(int a1)
{
  __int64 v1; // rdx
  _QWORD *v2; // rax

  v1 = 0LL;
  v2 = &ExOpcodeTable;
  if ( &atMutex )
  {
    while ( a1 != *(_DWORD *)v2 )
    {
      v2 += 2;
      if ( !v2[1] )
        return v1;
    }
    return v2[1];
  }
  return v1;
}
