/*
 * XREFs of IopSetLockOperationProcess @ 0x14023ED48
 * Callers:
 *     NtLockFile @ 0x1406B1EB0 (NtLockFile.c)
 *     IopCloseFile @ 0x1407BACE0 (IopCloseFile.c)
 * Callees:
 *     IopGetSetSpecificExtension @ 0x14023EA58 (IopGetSetSpecificExtension.c)
 *     IopGetFileObjectExtension @ 0x14023EB8C (IopGetFileObjectExtension.c)
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopSetLockOperationProcess(__int64 a1, __int64 a2, char a3)
{
  _QWORD *v3; // rbx
  char v4; // r15
  __int64 result; // rax
  unsigned int v9; // edi
  __int64 Pool2; // rax
  __int64 v11; // rsi
  unsigned __int64 v12; // r13
  __int64 v13; // rax
  _QWORD *v14; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v18; // eax
  bool v19; // zf
  char v20; // [rsp+78h] [rbp+10h]
  __int64 FileObjectExtension; // [rsp+88h] [rbp+20h] BYREF

  FileObjectExtension = 0LL;
  v3 = 0LL;
  v4 = 0;
  if ( !a2 )
    return 3221225485LL;
  if ( a3 )
  {
    v9 = 0;
    FileObjectExtension = IopGetFileObjectExtension(a1, 1, 0LL);
    v11 = FileObjectExtension;
    if ( !FileObjectExtension )
      return 3221225473LL;
  }
  else
  {
    result = IopGetSetSpecificExtension(a1, 1u, 0x20u, 1, &FileObjectExtension, 0LL);
    v9 = result;
    if ( (int)result < 0 )
      return result;
    Pool2 = ExAllocatePool2(64LL, 16LL, 538996553LL);
    v11 = FileObjectExtension;
    v3 = (_QWORD *)Pool2;
  }
  v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 184));
  v20 = *(_BYTE *)(a1 + 72);
  v13 = *(_QWORD *)(v11 + 16);
  if ( v13 )
  {
    v14 = *(_QWORD **)(v11 + 16);
    while ( v14[1] != a2 )
    {
      v14 = (_QWORD *)*v14;
      if ( !v14 )
        goto LABEL_18;
    }
    v4 = 1;
  }
  else
  {
LABEL_18:
    if ( !a3 )
    {
      if ( v3 )
      {
        *v3 = v13;
        *(_QWORD *)(v11 + 16) = v3;
        v3[1] = a2;
      }
      else
      {
        v9 = -1073741670;
      }
    }
  }
  KxReleaseSpinLock(a1 + 184);
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v12 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v18 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v12 + 1));
      v19 = (v18 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v18;
      if ( v19 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v12);
  if ( v4 && v3 )
    ExFreePoolWithTag(v3, 0);
  if ( a3 )
  {
    if ( v20 && v4 )
      return 0LL;
    return 3221225473LL;
  }
  return v9;
}
