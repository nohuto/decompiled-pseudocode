/*
 * XREFs of ViIrpAllocateLockedPacket @ 0x140A8D338
 * Callers:
 *     VfIoAllocateIrp1 @ 0x140A8CDBC (VfIoAllocateIrp1.c)
 * Callees:
 *     IoInitializeIrp @ 0x140229D70 (IoInitializeIrp.c)
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     PsChargeProcessNonPagedPoolQuota @ 0x14030B700 (PsChargeProcessNonPagedPoolQuota.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x1403107C0 (PsReturnProcessNonPagedPoolQuota.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 *     VfHandlePoolAlloc @ 0x140A90660 (VfHandlePoolAlloc.c)
 *     VfPacketCreateAndLock @ 0x140A9BFC0 (VfPacketCreateAndLock.c)
 */

__int64 __fastcall ViIrpAllocateLockedPacket(CCHAR a1, int a2, __int64 a3)
{
  __int64 v4; // rbx
  unsigned int v5; // ebp
  struct _KPROCESS *Process; // rsi
  USHORT v8; // r15
  __int64 Pool2; // rax
  IRP *v10; // rdi
  __int64 v11; // rax

  v4 = 0LL;
  v5 = 0;
  Process = 0LL;
  v8 = 72 * a1 + 208;
  if ( (VfRuleClasses & 1) != 0 )
    Pool2 = VfHandlePoolAlloc(NonPagedPool, LowPoolPriority, (__int64)&VfExtendedParameters, 1, a3);
  else
    Pool2 = ExAllocatePool2(64LL, (unsigned __int16)(72 * a1 + 208), 0x2B707249u);
  v10 = (IRP *)Pool2;
  if ( Pool2 )
  {
    if ( a2
      && (v5 = 4096,
          Process = KeGetCurrentThread()->ApcState.Process,
          (int)PsChargeProcessNonPagedPoolQuota(Process, 0x1000uLL) < 0) )
    {
      ExFreePoolWithTag(v10, 0);
    }
    else
    {
      IoInitializeIrp(v10, v8, a1);
      v11 = VfPacketCreateAndLock(v10);
      v4 = v11;
      if ( v11 )
      {
        *(_DWORD *)(v11 + 56) |= 0x200008u;
        _InterlockedIncrement((volatile signed __int32 *)(v11 + 20));
        ++*(_DWORD *)(v11 + 24);
        v10->Flags |= 0x40000000u;
        if ( a2 )
        {
          v10->AllocationFlags |= 1u;
          *(_DWORD *)(v11 + 84) = v5;
          *(_QWORD *)(v11 + 88) = Process;
          ObfReferenceObjectWithTag(Process, 0x49667256u);
        }
      }
      else
      {
        ExFreePoolWithTag(v10, 0);
        if ( a2 )
          PsReturnProcessNonPagedPoolQuota(Process, v5);
      }
    }
  }
  return v4;
}
