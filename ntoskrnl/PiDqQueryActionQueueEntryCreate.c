/*
 * XREFs of PiDqQueryActionQueueEntryCreate @ 0x140747078
 * Callers:
 *     PiDqQueryApplyObjectEvent @ 0x1406896F4 (PiDqQueryApplyObjectEvent.c)
 *     PiDqQueryEnumObject @ 0x1406CBF24 (PiDqQueryEnumObject.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x140746D28 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

__int64 __fastcall PiDqQueryActionQueueEntryCreate(int a1, __int64 a2, volatile signed __int32 *a3, __int64 a4)
{
  unsigned int v7; // ebx
  __int64 Pool2; // rax

  v7 = 0;
  Pool2 = ExAllocatePool2(256LL, 40LL, 1483763280LL);
  *(_QWORD *)a4 = Pool2;
  if ( Pool2 )
  {
    *(_DWORD *)(Pool2 + 32) = a1;
    *(_QWORD *)(Pool2 + 16) = a2;
    if ( a2 )
      _InterlockedIncrement((volatile signed __int32 *)(a2 + 8));
    *(_QWORD *)(*(_QWORD *)a4 + 24LL) = a3;
    if ( a3 )
      _InterlockedIncrement(a3);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v7;
}
