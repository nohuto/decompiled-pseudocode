/*
 * XREFs of CmpFreezeHive @ 0x1408726EC
 * Callers:
 *     CmpPerformUnloadKey @ 0x14074A194 (CmpPerformUnloadKey.c)
 * Callees:
 *     CmpDereferenceKeyControlBlockUnsafe @ 0x1406B6158 (CmpDereferenceKeyControlBlockUnsafe.c)
 *     CmpReferenceKeyControlBlockUnsafe @ 0x1407B05D8 (CmpReferenceKeyControlBlockUnsafe.c)
 *     CmpSearchForOpenSubKeys @ 0x140872764 (CmpSearchForOpenSubKeys.c)
 *     CmpRecordUnloadEventForHive @ 0x1408727D8 (CmpRecordUnloadEventForHive.c)
 */

__int64 __fastcall CmpFreezeHive(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  int v5; // edi

  v2 = *(_QWORD *)(a1 + 32);
  CmpReferenceKeyControlBlockUnsafe((volatile signed __int64 *)a1);
  if ( a2 && (v5 = CmpRecordUnloadEventForHive(v2, a2), v5 < 0) )
  {
    CmpDereferenceKeyControlBlockUnsafe((volatile signed __int64 *)a1);
  }
  else
  {
    CmpSearchForOpenSubKeys(a1, 2LL);
    *(_WORD *)(a1 + 8) |= 0x20u;
    v5 = 0;
    *(_BYTE *)(v2 + 2944) = 1;
    *(_QWORD *)(v2 + 2936) = a1;
  }
  return (unsigned int)v5;
}
