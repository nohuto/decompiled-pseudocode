/*
 * XREFs of PopRequestShutdownWait @ 0x140825424
 * Callers:
 *     PoRequestShutdownEvent @ 0x1408253E0 (PoRequestShutdownEvent.c)
 * Callees:
 *     ExReleaseFastMutex @ 0x140262170 (ExReleaseFastMutex.c)
 *     ExAcquireFastMutex @ 0x140262DC0 (ExAcquireFastMutex.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x14033E0E0 (ObfReferenceObjectWithTag.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopRequestShutdownWait(PVOID Object)
{
  __int64 Pool2; // rax
  unsigned int v3; // edi
  _QWORD *v4; // rbx

  Pool2 = ExAllocatePool2(256LL, 16LL, 1280536400LL);
  v3 = 0;
  v4 = (_QWORD *)Pool2;
  if ( !Pool2 )
    return 3221225495LL;
  *(_QWORD *)(Pool2 + 8) = Object;
  ObfReferenceObjectWithTag(Object, 0x64536F50u);
  ExAcquireFastMutex(&PopShutdownListMutex);
  if ( PopShutdownListAvailable )
  {
    *v4 = PopShutdownThreadList;
    PopShutdownThreadList = v4;
  }
  else
  {
    ObfDereferenceObjectWithTag(Object, 0x64536F50u);
    ExFreePoolWithTag(v4, 0);
    v3 = -1073741823;
  }
  ExReleaseFastMutex(&PopShutdownListMutex);
  return v3;
}
