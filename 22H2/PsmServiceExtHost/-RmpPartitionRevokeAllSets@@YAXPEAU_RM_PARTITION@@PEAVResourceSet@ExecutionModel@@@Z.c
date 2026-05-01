/*
 * XREFs of ?RmpPartitionRevokeAllSets@@YAXPEAU_RM_PARTITION@@PEAVResourceSet@ExecutionModel@@@Z @ 0x1800710CC
 * Callers:
 *     ?RmpResourceCheckDestroyPartitionForAcquire@@YAKPEAU_RM_RESOURCE_SET@@@Z @ 0x180014DAC (-RmpResourceCheckDestroyPartitionForAcquire@@YAKPEAU_RM_RESOURCE_SET@@@Z.c)
 * Callees:
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180026480 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?RmpObjectTableEnumerationGetNext@@YAPEAU_RM_OBJECT_HEADER@@PEAU_RM_OBJECT_TABLE_ENUMERATION_CONTEXT@@@Z @ 0x180040AD8 (-RmpObjectTableEnumerationGetNext@@YAPEAU_RM_OBJECT_HEADER@@PEAU_RM_OBJECT_TABLE_ENUMERATION_CON.c)
 *     ?RmpObjectTableEnumerationBegin@@YAXPEAU_RM_OBJECT_TABLE@@PEAU_RM_OBJECT_TABLE_ENUMERATION_CONTEXT@@@Z @ 0x180040B44 (-RmpObjectTableEnumerationBegin@@YAXPEAU_RM_OBJECT_TABLE@@PEAU_RM_OBJECT_TABLE_ENUMERATION_CONTE.c)
 *     ?RmpActivityHostRevokeResourceSets@@YAXPEAU_RM_ACTIVITY_HOST@@W4_RM_REVOKE_POLICY@@W4_RM_REVOKE_REASON_INTERNAL@@PEAVResourceSet@ExecutionModel@@@Z @ 0x18006C084 (-RmpActivityHostRevokeResourceSets@@YAXPEAU_RM_ACTIVITY_HOST@@W4_RM_REVOKE_POLICY@@W4_RM_REVOKE_.c)
 */

void __fastcall RmpPartitionRevokeAllSets(struct _RM_PARTITION *a1, struct ExecutionModel::ResourceSet *a2)
{
  struct _RM_OBJECT_HEADER *Next; // rax
  char *v5; // rbx
  _QWORD v6[5]; // [rsp+20h] [rbp-28h] BYREF

  RmpObjectTableEnumerationBegin(
    (struct _RM_OBJECT_TABLE *)(*((_QWORD *)a1 + 3) + 16LL),
    (struct _RM_OBJECT_TABLE_ENUMERATION_CONTEXT *)v6);
  while ( 1 )
  {
    Next = RmpObjectTableEnumerationGetNext((struct _RM_OBJECT_TABLE_ENUMERATION_CONTEXT *)v6);
    v5 = (char *)Next;
    if ( !Next )
      break;
    if ( *((struct _RM_PARTITION **)Next + 7) == a1 )
      RmpActivityHostRevokeResourceSets((__int64)Next, 2, 0xEu, (__int64)a2);
    RmpObjectRelease(v5);
  }
  RtlReleaseSRWLockShared(v6[0] + 16LL);
}
