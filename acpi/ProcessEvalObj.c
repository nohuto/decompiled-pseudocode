/*
 * XREFs of ProcessEvalObj @ 0x1C0054C60
 * Callers:
 *     <none>
 * Callees:
 *     GetObjectPath @ 0x1C004BB70 (GetObjectPath.c)
 *     ConPrintf @ 0x1C004D7B8 (ConPrintf.c)
 *     PrintDebugMessage @ 0x1C004EB7C (PrintDebugMessage.c)
 *     HeapFree @ 0x1C004EE4C (HeapFree.c)
 *     DumpObject @ 0x1C0051E98 (DumpObject.c)
 */

__int64 __fastcall ProcessEvalObj(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 ObjectPath; // rax
  char *v7; // rdx
  void *v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rcx

  if ( (gDebugger & 0xD0) != 0 && !a3 )
  {
    ObjectPath = GetObjectPath(*(_QWORD *)(a2 + 32));
    v7 = byte_1C00622D0;
    v8 = (void *)ObjectPath;
    if ( ObjectPath )
      v7 = (char *)ObjectPath;
    PrintDebugMessage(45, v7, 0LL, 0LL, 0LL);
    if ( v8 )
      ExFreePoolWithTag(v8, 0);
    DumpObject(*(_QWORD *)(a2 + 48), v9, 0);
    ConPrintf("\n");
  }
  v10 = *(_QWORD *)(a1 + 416);
  *(_QWORD *)(a1 + 416) = *(_QWORD *)(v10 + 8);
  HeapFree(v10);
  return a3;
}
