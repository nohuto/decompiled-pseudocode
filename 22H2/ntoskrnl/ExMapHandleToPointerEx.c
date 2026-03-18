/*
 * XREFs of ExMapHandleToPointerEx @ 0x1407C67C8
 * Callers:
 *     AlpcpFreeMessageFunction @ 0x1407C6720 (AlpcpFreeMessageFunction.c)
 * Callees:
 *     ExHandleLogBadReference @ 0x140606A98 (ExHandleLogBadReference.c)
 *     ExMapHandleToPointer @ 0x140740120 (ExMapHandleToPointer.c)
 */

__int64 __fastcall ExMapHandleToPointerEx(unsigned int *BugCheckParameter2, ULONG_PTR BugCheckParameter1, char a3)
{
  __int64 v6; // rbx

  v6 = ExMapHandleToPointer(BugCheckParameter2, BugCheckParameter1);
  if ( !v6 )
    ExHandleLogBadReference((ULONG_PTR)BugCheckParameter2, BugCheckParameter1, a3);
  return v6;
}
