/*
 * XREFs of MiUpdateSystemProtoPtesTree @ 0x140368AE0
 * Callers:
 *     MiDeletePerSessionProtos @ 0x1402CF6DC (MiDeletePerSessionProtos.c)
 *     MiDeleteSubsectionPages @ 0x14034B8E0 (MiDeleteSubsectionPages.c)
 *     MiCreatePrototypePtes @ 0x14036862C (MiCreatePrototypePtes.c)
 *     MiDeleteEmptySubsections @ 0x14036AC38 (MiDeleteEmptySubsections.c)
 *     MiDeleteCachedSubsection @ 0x140621708 (MiDeleteCachedSubsection.c)
 *     MiSegmentDelete @ 0x1406A6FD4 (MiSegmentDelete.c)
 *     MiExtendSection @ 0x140726AAC (MiExtendSection.c)
 *     MiAllocatePerSessionProtos @ 0x14075B9D4 (MiAllocatePerSessionProtos.c)
 *     MiCreateImageFileMap @ 0x1407F1C28 (MiCreateImageFileMap.c)
 *     MiBuildImageControlArea @ 0x1407F3030 (MiBuildImageControlArea.c)
 *     MiDeletePageFileSectionNodes @ 0x1407F349C (MiDeletePageFileSectionNodes.c)
 *     MiCreatePagingFileMap @ 0x1407F3500 (MiCreatePagingFileMap.c)
 *     MiAllocateFileExtents @ 0x140A303A8 (MiAllocateFileExtents.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14024DA40 (ExAcquireSpinLockExclusive.c)
 *     RtlAvlInsertNodeEx @ 0x140331710 (RtlAvlInsertNodeEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlAvlRemoveNode @ 0x140333B40 (RtlAvlRemoveNode.c)
 *     MiObtainProtoBaseFromNode @ 0x140368C0C (MiObtainProtoBaseFromNode.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiUpdateSystemProtoPtesTree(unsigned __int64 *a1, int a2)
{
  unsigned __int64 v4; // rbp
  unsigned __int64 v5; // rsi
  _QWORD *v6; // rdx
  bool v7; // r8
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rax
  _QWORD *v10; // rax
  __int64 result; // rax
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v18; // zf
  __int64 v19; // [rsp+30h] [rbp+8h] BYREF

  v19 = 0LL;
  v4 = MiObtainProtoBaseFromNode(a1, &v19);
  v5 = ExAcquireSpinLockExclusive(&dword_140C653B8);
  if ( !a2 )
  {
    RtlAvlRemoveNode((unsigned __int64 *)&qword_140C653B0, a1);
    a1[3] &= ~8uLL;
    goto LABEL_12;
  }
  v6 = (_QWORD *)qword_140C653B0;
  v7 = 0;
  if ( !qword_140C653B0 )
    goto LABEL_11;
  while ( 1 )
  {
    v8 = v6[3] & 7LL;
    if ( v8 > 4 )
      break;
    if ( (_DWORD)v8 )
    {
      v12 = v8 - 1;
      if ( v12 )
      {
        v13 = v12 - 1;
        if ( v13 )
        {
          v14 = v13 - 1;
          if ( v14 )
          {
            if ( v14 != 1 )
              break;
            v9 = v6[4];
          }
          else
          {
            v9 = v6[6];
          }
        }
        else
        {
          v9 = *(_QWORD *)(*(v6 - 7) + 136LL);
        }
      }
      else
      {
        v9 = *(v6 - 6);
      }
    }
    else
    {
      v9 = *(v6 - 14);
    }
    if ( v4 >= v9 )
      break;
    v10 = (_QWORD *)*v6;
    if ( !*v6 )
      goto LABEL_11;
LABEL_8:
    v6 = v10;
  }
  v10 = (_QWORD *)v6[1];
  if ( v10 )
    goto LABEL_8;
  v7 = 1;
LABEL_11:
  RtlAvlInsertNodeEx((unsigned __int64 *)&qword_140C653B0, (unsigned __int64)v6, v7, (unsigned __int64)a1);
  a1[3] |= 8uLL;
LABEL_12:
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C653B8);
  result = (unsigned int)KiIrqlFlags;
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v5 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
      v18 = ((unsigned int)result & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= result;
      if ( v18 )
        result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v5);
  return result;
}
