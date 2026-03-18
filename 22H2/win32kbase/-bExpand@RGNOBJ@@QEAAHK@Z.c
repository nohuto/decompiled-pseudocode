/*
 * XREFs of ?bExpand@RGNOBJ@@QEAAHK@Z @ 0x1C007D290
 * Callers:
 *     RGNCOREOBJ::bMerge__lambda_37edbae25e797877af1c91b6e50f63b9___ @ 0x1C007DFE0 (RGNCOREOBJ--bMerge__lambda_37edbae25e797877af1c91b6e50f63b9___.c)
 *     ?bAddNullScan@RGNMEMOBJ@@AEAAHJJ@Z @ 0x1C01564E8 (-bAddNullScan@RGNMEMOBJ@@AEAAHJJ@Z.c)
 *     ?bAddScans@RGNMEMOBJ@@AEAAHJPEAVEDGE@@K@Z @ 0x1C0156574 (-bAddScans@RGNMEMOBJ@@AEAAHJPEAVEDGE@@K@Z.c)
 * Callees:
 *     ?vSwap@RGNOBJ@@QEAAXPEAV1@@Z @ 0x1C003C880 (-vSwap@RGNOBJ@@QEAAXPEAV1@@Z.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C003D9E0 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x1C003E0F4 (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 *     ?vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ @ 0x1C004C7D0 (-vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ.c)
 *     ?vCopy@RGNOBJ@@QEAAXAEAV1@@Z @ 0x1C007DD10 (-vCopy@RGNOBJ@@QEAAXAEAV1@@Z.c)
 *     EngSetLastError @ 0x1C00AADD0 (EngSetLastError.c)
 */

__int64 __fastcall RGNOBJ::bExpand(RGNOBJ *this, unsigned int a2)
{
  unsigned int v3; // ebx
  PVOID v5; // [rsp+40h] [rbp+18h] BYREF

  v3 = 0;
  v5 = 0LL;
  RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v5, a2);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v5);
  if ( v5 )
  {
    RGNOBJ::vCopy((RGNOBJ *)&v5, this);
    RGNOBJ::vSwap(this, (struct RGNOBJ *)&v5);
    v3 = 1;
  }
  else
  {
    EngSetLastError(8u);
  }
  RGNMEMOBJTMP::~RGNMEMOBJTMP(&v5);
  return v3;
}
