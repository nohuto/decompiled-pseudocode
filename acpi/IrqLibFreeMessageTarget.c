/*
 * XREFs of IrqLibFreeMessageTarget @ 0x1C0099250
 * Callers:
 *     <none>
 * Callees:
 *     IrqLibAcquireArbiterLock @ 0x1C005CC88 (IrqLibAcquireArbiterLock.c)
 *     IrqLibReleaseArbiterLock @ 0x1C005CD28 (IrqLibReleaseArbiterLock.c)
 *     ProcessorDeleteDeviceIdtAssignment @ 0x1C005DFF0 (ProcessorDeleteDeviceIdtAssignment.c)
 *     ProcessorGetDeviceIdtAssignment @ 0x1C009ABF4 (ProcessorGetDeviceIdtAssignment.c)
 *     ProcessorIdtEntryToGsiv @ 0x1C009AD78 (ProcessorIdtEntryToGsiv.c)
 */

KIRQL __fastcall IrqLibFreeMessageTarget(PVOID Owner, unsigned int a2, __int64 a3)
{
  KIRQL result; // al
  __int64 v7; // r8
  unsigned int v8; // ebx
  _BYTE v9[16]; // [rsp+20h] [rbp-28h] BYREF
  __int128 v10; // [rsp+30h] [rbp-18h]
  ULONGLONG End; // [rsp+68h] [rbp+20h] BYREF

  LODWORD(End) = 0;
  v10 = 0LL;
  result = KeGetCurrentIrql();
  if ( !result )
  {
    IrqLibAcquireArbiterLock(1);
    if ( (int)ProcessorIdtEntryToGsiv(a2, a3, v7, &End) >= 0 )
    {
      v8 = End;
      if ( (int)ProcessorGetDeviceIdtAssignment(Owner, (unsigned int)End, 0LL, v9) >= 0 )
      {
        ProcessorDeleteDeviceIdtAssignment(Owner, v8, DWORD1(v10), 0);
        RtlDeleteRange(RangeList, v8, v8, Owner);
      }
    }
    return IrqLibReleaseArbiterLock();
  }
  return result;
}
