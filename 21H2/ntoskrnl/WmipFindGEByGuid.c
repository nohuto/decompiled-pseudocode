/*
 * XREFs of WmipFindGEByGuid @ 0x140783CD8
 * Callers:
 *     WmipDetermineInstanceBaseIndex @ 0x14075D814 (WmipDetermineInstanceBaseIndex.c)
 *     WmipEnableCollectionForNewGuid @ 0x14075DA88 (WmipEnableCollectionForNewGuid.c)
 *     WmipProcessEvent @ 0x14075DD3C (WmipProcessEvent.c)
 *     WmipLinkDataSourceToList @ 0x14075DEAC (WmipLinkDataSourceToList.c)
 *     WmipMangleInstanceName @ 0x14075EF9C (WmipMangleInstanceName.c)
 *     WmipOpenBlock @ 0x140783428 (WmipOpenBlock.c)
 *     WmipDisableCollectionForRemovedGuid @ 0x14080EEFC (WmipDisableCollectionForRemovedGuid.c)
 *     WmipIncludeStaticNames @ 0x1409DD3C4 (WmipIncludeStaticNames.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x1402F91C0 (KeReleaseMutex.c)
 *     WmipReferenceEntry @ 0x140784160 (WmipReferenceEntry.c)
 */

_QWORD *__fastcall WmipFindGEByGuid(_QWORD *a1, char a2)
{
  _QWORD *i; // rbx
  __int64 v5; // rcx
  _QWORD *v7; // rax
  _QWORD *v8; // rcx
  _QWORD *v9; // rax
  __int64 v10; // rcx

  KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
  for ( i = *(_QWORD **)WmipGEHeadPtr; ; i = (_QWORD *)*i )
  {
    if ( i == (_QWORD *)WmipGEHeadPtr )
    {
      KeReleaseMutex(&WmipSMMutex, 0);
      return 0LL;
    }
    v5 = *a1 - i[9];
    if ( *a1 == i[9] )
      v5 = a1[1] - i[10];
    if ( !v5 )
      break;
  }
  WmipReferenceEntry((ULONG_PTR)i);
  if ( a2 )
  {
    v7 = (_QWORD *)*i;
    if ( *(_QWORD **)(*i + 8LL) != i
      || (v8 = (_QWORD *)i[1], (_QWORD *)*v8 != i)
      || (*v8 = v7,
          v7[1] = v8,
          v9 = (_QWORD *)WmipGEHeadPtr,
          v10 = *(_QWORD *)WmipGEHeadPtr,
          *(_QWORD *)(*(_QWORD *)WmipGEHeadPtr + 8LL) != WmipGEHeadPtr) )
    {
      __fastfail(3u);
    }
    *i = v10;
    i[1] = v9;
    *(_QWORD *)(v10 + 8) = i;
    *v9 = i;
  }
  KeReleaseMutex(&WmipSMMutex, 0);
  return i;
}
