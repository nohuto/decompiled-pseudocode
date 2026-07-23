/*
 * XREFs of WbProcessModuleUnload @ 0x140605A88
 * Callers:
 *     WbDispatchOperation @ 0x140643C44 (WbDispatchOperation.c)
 * Callees:
 *     WbInPlaceEncryptionUnloadModule @ 0x140605B70 (WbInPlaceEncryptionUnloadModule.c)
 *     WbHeapExecutionUnloadModule @ 0x140605C84 (WbHeapExecutionUnloadModule.c)
 *     WbAlloc @ 0x140642A24 (WbAlloc.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall WbProcessModuleUnload(__int64 a1, _QWORD *a2, unsigned int a3)
{
  int v5; // edi
  _OWORD *v6; // rax

  if ( a3 >= 0x10 && *a2 == 9LL )
  {
    v5 = WbAlloc(0x10uLL);
    if ( v5 >= 0 )
    {
      v6 = (_OWORD *)a2[1];
      if ( (unsigned __int64)(v6 + 1) > 0x7FFFFFFF0000LL || v6 + 1 < v6 )
      {
        MEMORY[0x7FFFFFFF0000] = 0;
        v6 = (_OWORD *)a2[1];
      }
      MEMORY[0] = *v6;
      if ( MEMORY[0] )
      {
        return (unsigned int)-1073741811;
      }
      else
      {
        WbHeapExecutionUnloadModule(a1, MEMORY[8]);
        WbInPlaceEncryptionUnloadModule(a1, MEMORY[8]);
      }
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v5;
}
