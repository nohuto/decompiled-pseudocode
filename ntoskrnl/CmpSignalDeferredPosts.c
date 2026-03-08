/*
 * XREFs of CmpSignalDeferredPosts @ 0x1406B5564
 * Callers:
 *     CmpPostNotify @ 0x1406B3790 (CmpPostNotify.c)
 *     CmpCloseKeyObject @ 0x1406B5340 (CmpCloseKeyObject.c)
 *     CmDeleteKey @ 0x1406B762C (CmDeleteKey.c)
 *     CmpSetKeySecurity @ 0x1406B7E3C (CmpSetKeySecurity.c)
 *     CmDeleteValueKey @ 0x1406B9764 (CmDeleteValueKey.c)
 *     CmpPerformUnloadKey @ 0x14074A194 (CmpPerformUnloadKey.c)
 *     CmSetValueKey @ 0x1407A9870 (CmSetValueKey.c)
 *     CmRestoreKey @ 0x140A08004 (CmRestoreKey.c)
 *     CmpProcessLightWeightUOW @ 0x140A19C0C (CmpProcessLightWeightUOW.c)
 * Callees:
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     ExQueueWorkItem @ 0x14033F3D0 (ExQueueWorkItem.c)
 *     CmpFreePostBlock @ 0x1406B5600 (CmpFreePostBlock.c)
 */

_QWORD *__fastcall CmpSignalDeferredPosts(_QWORD **a1)
{
  _QWORD *result; // rax
  _QWORD *v3; // rcx
  PVOID **v4; // rdi
  __int64 v5; // r9
  struct _KEVENT *v6; // rcx
  struct _WORK_QUEUE_ITEM *v7; // rcx

  while ( 1 )
  {
    result = *a1;
    if ( *a1 == a1 )
      return result;
    if ( (_QWORD **)result[1] != a1 || (v3 = (_QWORD *)*result, *(_QWORD **)(*result + 8LL) != result) )
      __fastfail(3u);
    *a1 = v3;
    v4 = (PVOID **)(result - 2);
    v3[1] = a1;
    v5 = result[6];
    if ( (unsigned __int16)*((_DWORD *)result + 10) != 3 )
    {
      v6 = *(struct _KEVENT **)v5;
LABEL_6:
      KeSetEvent(v6, 0, 0);
      ObfDereferenceObject(*v4[8]);
      goto LABEL_7;
    }
    v7 = *(struct _WORK_QUEUE_ITEM **)(v5 + 8);
    if ( v7 )
      ExQueueWorkItem(v7, *(WORK_QUEUE_TYPE *)(v5 + 16));
    v6 = (struct _KEVENT *)*v4[8];
    if ( v6 )
      goto LABEL_6;
LABEL_7:
    CmpFreePostBlock(v4);
  }
}
