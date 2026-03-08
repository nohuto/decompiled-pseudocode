/*
 * XREFs of ExReinitializeResourceLite @ 0x1402CB110
 * Callers:
 *     <none>
 * Callees:
 *     PsBoostThreadIoEx @ 0x1402634D0 (PsBoostThreadIoEx.c)
 *     ExpOwnerEntryToThread @ 0x140283298 (ExpOwnerEntryToThread.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x140283390 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     PsBoostThreadIoQoS @ 0x14029176C (PsBoostThreadIoQoS.c)
 *     ExpResourceEnforcesOwnershipTransfer @ 0x1402917A4 (ExpResourceEnforcesOwnershipTransfer.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     PerfLogExecutiveResourceInitialize @ 0x1405FE3D8 (PerfLogExecutiveResourceInitialize.c)
 */

NTSTATUS __stdcall ExReinitializeResourceLite(PERESOURCE Resource)
{
  __int16 v2; // ax
  unsigned int v3; // r12d
  POWNER_ENTRY OwnerTable; // r13
  unsigned int TableSize; // r15d
  ULONG *p_TableSize; // rax
  unsigned int v7; // ebp
  __int64 *v8; // rbx
  struct _KTHREAD *v9; // rdi
  ERESOURCE_THREAD OwnerThread; // rbx
  struct _OWNER_ENTRY::$818A6BB8E639852A52D20A2B257A1D60::$E71B718CD8428E7C8AA4A0868051E710 v11; // edx

  v2 = Resource->Flag & 1;
  if ( FeatureFastResource2 )
  {
    if ( !v2 )
      goto LABEL_3;
LABEL_42:
    KeBugCheckEx(0x1C6u, 0xEuLL, (ULONG_PTR)Resource, 0LL, 0LL);
  }
  if ( v2 )
    goto LABEL_42;
LABEL_3:
  v3 = 0;
  OwnerTable = Resource->OwnerTable;
  if ( OwnerTable )
  {
    TableSize = OwnerTable->TableSize;
    p_TableSize = &OwnerTable->TableSize;
    v7 = 1;
    if ( TableSize > 1 )
    {
      v8 = (__int64 *)&OwnerTable->0;
      do
      {
        v8 += 2;
        v9 = (struct _KTHREAD *)ExpOwnerEntryToThread(v8 - 1);
        if ( v9 )
        {
          ++v3;
          if ( ExpResourceEnforcesOwnershipTransfer((__int64)Resource)
            && (*(_DWORD *)v8 & 2) == 0
            && v9 != KeGetCurrentThread() )
          {
            KeBugCheckEx(0x16Eu, (ULONG_PTR)Resource, (ULONG_PTR)KeGetCurrentThread(), (ULONG_PTR)v9, 3uLL);
          }
          if ( (*(_DWORD *)v8 & 1) != 0 )
            PsBoostThreadIoEx((__int64)v9, 1, 0, 0LL);
          if ( (*(_DWORD *)v8 & 4) != 0 )
            PsBoostThreadIoQoS((__int64)v9, 1);
          if ( (*(_DWORD *)v8 & 2) != 0 )
            ObDereferenceObjectDeferDeleteWithTag(v9, 0x746C6644u);
        }
        ++v7;
      }
      while ( v7 < TableSize );
      p_TableSize = &OwnerTable->TableSize;
    }
    memset(&OwnerTable[1], 0, 16LL * (*p_TableSize - 1));
  }
  else
  {
    TableSize = 0;
  }
  OwnerThread = Resource->OwnerEntry.OwnerThread;
  if ( OwnerThread )
  {
    ++TableSize;
    if ( (OwnerThread & 3) == 0 )
      ++v3;
  }
  v11 = (struct _OWNER_ENTRY::$818A6BB8E639852A52D20A2B257A1D60::$E71B718CD8428E7C8AA4A0868051E710)Resource->OwnerEntry.TableSize;
  if ( (*(_BYTE *)&v11 & 2) != 0 )
  {
    OwnerThread &= 0xFFFFFFFFFFFFFFFCuLL;
  }
  else if ( (OwnerThread & 3) != 0 )
  {
    goto LABEL_39;
  }
  if ( OwnerThread )
  {
    if ( ((Resource->ReservedLowFlags & 1) != 0 || ExpResourceEnforceOwnerTransfer)
      && (Resource->OwnerEntry.TableSize & 2) == 0
      && (struct _KTHREAD *)OwnerThread != KeGetCurrentThread() )
    {
      KeBugCheckEx(0x16Eu, (ULONG_PTR)Resource, (ULONG_PTR)KeGetCurrentThread(), OwnerThread, 4uLL);
    }
    if ( (*(_BYTE *)&v11 & 1) != 0 )
      PsBoostThreadIoEx(OwnerThread, 1, 0, 0LL);
    if ( (Resource->OwnerEntry.TableSize & 4) != 0 )
      PsBoostThreadIoQoS(OwnerThread, 1);
    if ( (Resource->OwnerEntry.TableSize & 2) != 0 )
      ObDereferenceObjectDeferDeleteWithTag((PVOID)OwnerThread, 0x746C6644u);
  }
LABEL_39:
  *(_DWORD *)&Resource->ActiveCount = 0;
  *(_QWORD *)&Resource->ActiveEntries = 0LL;
  *(_OWORD *)&Resource->SharedWaiters = 0LL;
  Resource->OwnerEntry = 0LL;
  *(_QWORD *)&Resource->NumberOfSharedWaiters = 0LL;
  __incgsdword(0x8A5Cu);
  if ( (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0 )
    PerfLogExecutiveResourceInitialize(65560LL, Resource, TableSize, v3);
  return 0;
}
