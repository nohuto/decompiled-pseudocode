/*
 * XREFs of DebugTrace @ 0x1C004E0D0
 * Callers:
 *     <none>
 * Callees:
 *     PrintDebugMessage @ 0x1C004EB7C (PrintDebugMessage.c)
 */

__int64 __fastcall DebugTrace(__int64 a1, __int64 a2)
{
  if ( a2 )
  {
    PrintDebugMessage(228, 0, 0, 0, 0LL);
    return 4294967294LL;
  }
  else
  {
    _InterlockedOr(&gDebugger, 0x40u);
    return 0xFFFFFFFFLL;
  }
}
