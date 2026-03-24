/*
 * XREFs of sub_1406C7A80 @ 0x1406C7A80
 * Callers:
 *     WbFreeWarbirdProcess @ 0x1406667C0 (WbFreeWarbirdProcess.c)
 *     sub_1406A5FDC @ 0x1406A5FDC (sub_1406A5FDC.c)
 *     WbHeapExecuteCall @ 0x1406C63F8 (WbHeapExecuteCall.c)
 *     sub_1406C6918 @ 0x1406C6918 (sub_1406C6918.c)
 *     WbGetWarbirdThread @ 0x1406C7890 (WbGetWarbirdThread.c)
 * Callees:
 *     sub_1406A6098 @ 0x1406A6098 (sub_1406A6098.c)
 */

signed __int64 __fastcall sub_1406C7A80(__int64 a1, __int64 a2)
{
  signed __int64 v2; // rbx

  v2 = 0LL;
  if ( a2 )
  {
    v2 = _InterlockedDecrement64((volatile signed __int64 *)(a2 + 8));
    if ( !v2 )
      sub_1406A6098(a1, (_QWORD *)a2);
  }
  return v2;
}
