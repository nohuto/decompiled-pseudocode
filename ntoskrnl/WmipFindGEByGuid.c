/*
 * XREFs of WmipFindGEByGuid @ 0x14069BDF4
 * Callers:
 *     WmipOpenBlock @ 0x14069AF1C (WmipOpenBlock.c)
 *     WmipDetermineInstanceBaseIndex @ 0x1408680E4 (WmipDetermineInstanceBaseIndex.c)
 *     WmipLinkDataSourceToList @ 0x1408681AC (WmipLinkDataSourceToList.c)
 *     WmipEnableCollectionForNewGuid @ 0x140868484 (WmipEnableCollectionForNewGuid.c)
 *     WmipProcessEvent @ 0x1408686A8 (WmipProcessEvent.c)
 *     WmipMangleInstanceName @ 0x1408687EC (WmipMangleInstanceName.c)
 *     WmipDisableCollectionForRemovedGuid @ 0x14087EB44 (WmipDisableCollectionForRemovedGuid.c)
 *     WmipIncludeStaticNames @ 0x1409DDB94 (WmipIncludeStaticNames.c)
 * Callees:
 *     KeReleaseMutex @ 0x1402046C0 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 *     WmipReferenceEntry @ 0x14069C27C (WmipReferenceEntry.c)
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
