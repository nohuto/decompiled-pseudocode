/*
 * XREFs of ParseLocalObj @ 0x1C005B7EC
 * Callers:
 *     ParseOpcode @ 0x1C005BD40 (ParseOpcode.c)
 * Callees:
 *     CopyObjData @ 0x1C004AEB4 (CopyObjData.c)
 *     ConPrintf @ 0x1C004D7B8 (ConPrintf.c)
 *     PrintObject @ 0x1C004E4C8 (PrintObject.c)
 */

__int64 __fastcall ParseLocalObj(__int64 a1, __int64 a2)
{
  __int64 v4; // r10
  int v5; // r10d

  v4 = (unsigned int)**(unsigned __int8 **)(a1 + 120) - 96;
  CopyObjData(a2, *(_QWORD *)(a1 + 96) + 8 * (v4 + 4 * v4 + 9));
  if ( (gDebugger & 0xD0) != 0 )
  {
    ConPrintf("Local%d=", v5);
    PrintObject(a2);
  }
  ++*(_QWORD *)(a1 + 120);
  return 0LL;
}
