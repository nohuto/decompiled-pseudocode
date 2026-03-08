/*
 * XREFs of PipEnumerateCompleted @ 0x140685510
 * Callers:
 *     PipProcessDevNodeTree @ 0x1406CCD80 (PipProcessDevNodeTree.c)
 * Callees:
 *     PipSetDevNodeState @ 0x1402028D0 (PipSetDevNodeState.c)
 *     ExAcquireResourceExclusiveLite @ 0x140258DC0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14025D520 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     IoAddTriageDumpDataBlock @ 0x14038486C (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     PipProcessEnumeratedChildDevice @ 0x14068571C (PipProcessEnumeratedChildDevice.c)
 *     PipSetDevNodeFlags @ 0x1406857DC (PipSetDevNodeFlags.c)
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x140687320 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 *     PipClearDevNodeFlags @ 0x14068816C (PipClearDevNodeFlags.c)
 *     PiSwFindChildren @ 0x140688518 (PiSwFindChildren.c)
 *     PiPnpRtlEndOperation @ 0x1406CCB7C (PiPnpRtlEndOperation.c)
 *     PiPnpRtlBeginOperation @ 0x1406CDF98 (PiPnpRtlBeginOperation.c)
 *     PiSwGetChildPdo @ 0x140846F50 (PiSwGetChildPdo.c)
 *     PnpRequestDeviceRemoval @ 0x140862294 (PnpRequestDeviceRemoval.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PipEnumerateCompleted(_QWORD *MaxDataSize)
{
  _QWORD *v1; // rdi
  unsigned int *v3; // rcx
  unsigned int i; // edi
  struct _KTHREAD *CurrentThread; // rax
  _QWORD **Children; // rax
  _QWORD *v7; // rsi
  __int64 *v8; // rdi
  char v9; // bp
  unsigned int v10; // ebx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 *v14; // rsi
  _QWORD *j; // rdi
  __int64 v16; // rdx
  bool v17; // zf
  __int64 v18; // rax
  PVOID P; // [rsp+50h] [rbp+8h] BYREF

  v1 = (_QWORD *)MaxDataSize[1];
  P = 0LL;
  if ( MaxDataSize[66] )
  {
    while ( v1 )
    {
      PipClearDevNodeFlags(v1, 16LL);
      v1 = (_QWORD *)*v1;
    }
  }
  else
  {
    while ( v1 )
    {
      if ( *(PDRIVER_OBJECT *)(v1[4] + 8LL) == PiSwDeviceDriverObject )
        PipClearDevNodeFlags(v1, 16LL);
      v1 = (_QWORD *)*v1;
    }
  }
  v3 = (unsigned int *)MaxDataSize[66];
  if ( v3 )
  {
    for ( i = 0; i < *v3; ++i )
    {
      if ( !*(_QWORD *)&v3[2 * i + 2] )
      {
        IoAddTriageDumpDataBlock((ULONG)MaxDataSize, (PVOID)0x388);
        if ( *((_WORD *)MaxDataSize + 20) )
        {
          IoAddTriageDumpDataBlock((_DWORD)MaxDataSize + 40, (PVOID)2);
          IoAddTriageDumpDataBlock(MaxDataSize[6], (PVOID)*((unsigned __int16 *)MaxDataSize + 20));
        }
        if ( *((_WORD *)MaxDataSize + 28) )
        {
          IoAddTriageDumpDataBlock((_DWORD)MaxDataSize + 56, (PVOID)2);
          IoAddTriageDumpDataBlock(MaxDataSize[8], (PVOID)*((unsigned __int16 *)MaxDataSize + 28));
        }
        v18 = MaxDataSize[2];
        if ( v18 && *(_WORD *)(v18 + 56) )
        {
          IoAddTriageDumpDataBlock(v18 + 56, (PVOID)2);
          IoAddTriageDumpDataBlock(
            *(_QWORD *)(MaxDataSize[2] + 64LL),
            (PVOID)*(unsigned __int16 *)(MaxDataSize[2] + 56LL));
        }
        KeBugCheckEx(0xCAu, 8uLL, MaxDataSize[4], *(unsigned int *)MaxDataSize[66], i);
      }
      PipProcessEnumeratedChildDevice(MaxDataSize);
      v3 = (unsigned int *)MaxDataSize[66];
    }
    ExFreePoolWithTag(v3, 0);
    MaxDataSize[66] = 0LL;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PiSwLockObj, 1u);
  Children = (_QWORD **)PiSwFindChildren(MaxDataSize + 5);
  v7 = Children;
  if ( Children )
  {
    for ( j = *Children; j != v7; j = (_QWORD *)*j )
    {
      if ( PiSwGetChildPdo((PDEVICE_OBJECT)MaxDataSize[4]) )
        PipProcessEnumeratedChildDevice(MaxDataSize);
    }
  }
  ExReleaseResourceLite(&PiSwLockObj);
  KeLeaveCriticalRegion();
  v8 = (__int64 *)MaxDataSize[1];
  v9 = 0;
  if ( v8 )
  {
    do
    {
      v14 = (__int64 *)*v8;
      if ( (*((_DWORD *)v8 + 99) & 0x10010) == 0 )
      {
        PipSetDevNodeFlags(v8, 0x10000LL);
        LOBYTE(v16) = 1;
        PnpRequestDeviceRemoval(v8, v16, 24LL, 0LL);
        v9 = 1;
      }
      v8 = v14;
    }
    while ( v14 );
  }
  PipSetDevNodeState((__int64)MaxDataSize, 778);
  if ( !v9 || (v17 = MaxDataSize == IopRootDeviceNode, v10 = -1073741106, v17) )
    v10 = 0;
  PiPnpRtlBeginOperation(&P);
  PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v11, *((_QWORD *)IopRootDeviceNode + 6), 15LL);
  PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v12, *((_QWORD *)IopRootDeviceNode + 6), 20LL);
  if ( P )
    PiPnpRtlEndOperation(P);
  return v10;
}
