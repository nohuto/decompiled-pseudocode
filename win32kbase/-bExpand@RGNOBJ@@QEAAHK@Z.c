/*
 * XREFs of ?bExpand@RGNOBJ@@QEAAHK@Z @ 0x1C00AAC50
 * Callers:
 *     RGNCOREOBJ::bMerge__lambda_37edbae25e797877af1c91b6e50f63b9___ @ 0x1C0042F40 (RGNCOREOBJ--bMerge__lambda_37edbae25e797877af1c91b6e50f63b9___.c)
 *     ?bAddNullScan@RGNMEMOBJ@@AEAAHJJ@Z @ 0x1C0183158 (-bAddNullScan@RGNMEMOBJ@@AEAAHJJ@Z.c)
 *     ?bAddScans@RGNMEMOBJ@@AEAAHJPEAVEDGE@@K@Z @ 0x1C01831E4 (-bAddScans@RGNMEMOBJ@@AEAAHJPEAVEDGE@@K@Z.c)
 * Callees:
 *     ?vCopy@RGNOBJ@@QEAAXAEAV1@@Z @ 0x1C0043670 (-vCopy@RGNOBJ@@QEAAXAEAV1@@Z.c)
 *     ?vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ @ 0x1C0044250 (-vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ.c)
 *     ?vSwap@RGNOBJ@@QEAAXPEAV1@@Z @ 0x1C0045140 (-vSwap@RGNOBJ@@QEAAXPEAV1@@Z.c)
 *     PopThreadGuardedObject @ 0x1C00453C0 (PopThreadGuardedObject.c)
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x1C0053220 (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C00558E0 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     EngSetLastError @ 0x1C00BAB10 (EngSetLastError.c)
 */

__int64 __fastcall RGNOBJ::bExpand(RGNOBJ *this, unsigned int a2)
{
  _QWORD *v3; // rbx
  unsigned int v4; // edi
  PVOID Entry; // [rsp+40h] [rbp+18h] BYREF

  RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&Entry, a2);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&Entry);
  v3 = Entry;
  if ( Entry )
  {
    RGNOBJ::vCopy((RGNOBJ *)&Entry, this);
    RGNOBJ::vSwap(this, (struct RGNOBJ *)&Entry);
    v3 = Entry;
    v4 = 1;
  }
  else
  {
    EngSetLastError(8u);
    v4 = 0;
  }
  if ( v3 )
    PopThreadGuardedObject(v3 + 11);
  REGION::vDeleteREGION((unsigned __int64)v3);
  return v4;
}
