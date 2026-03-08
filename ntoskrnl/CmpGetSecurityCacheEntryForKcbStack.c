/*
 * XREFs of CmpGetSecurityCacheEntryForKcbStack @ 0x1407AF4E0
 * Callers:
 *     CmpGetSecurityDescriptorForKcbStackEx @ 0x14067D1AC (CmpGetSecurityDescriptorForKcbStackEx.c)
 *     CmpCheckCreateAccessOnKcbStack @ 0x14069A584 (CmpCheckCreateAccessOnKcbStack.c)
 *     CmpCheckNotifyAccess @ 0x1406B39B4 (CmpCheckNotifyAccess.c)
 *     CmpCheckKeyOwnerForPca @ 0x140750B84 (CmpCheckKeyOwnerForPca.c)
 *     CmpCreateChild @ 0x1407A7590 (CmpCreateChild.c)
 *     CmpQueryKeySecurity @ 0x1407AC310 (CmpQueryKeySecurity.c)
 *     CmRenameKey @ 0x140A1170C (CmRenameKey.c)
 *     CmpCheckKcbStackAccess @ 0x140A18350 (CmpCheckKcbStackAccess.c)
 *     CmpCheckKeyBodyAccess @ 0x140A18448 (CmpCheckKeyBodyAccess.c)
 *     CmpDoAccessCheckOnLayeredSubtree @ 0x140A18A38 (CmpDoAccessCheckOnLayeredSubtree.c)
 *     CmpGetSecurityDescriptorForKcbStack @ 0x140A18D68 (CmpGetSecurityDescriptorForKcbStack.c)
 *     CmpSnapshotKcbStackSecurity @ 0x140A19060 (CmpSnapshotKcbStackSecurity.c)
 * Callees:
 *     CmRmIsKCBVisible @ 0x14075E0B0 (CmRmIsKCBVisible.c)
 *     CmpGetKcbAtLayerHeight @ 0x1407AF600 (CmpGetKcbAtLayerHeight.c)
 *     CmGetKCBCacheSecurity @ 0x1407AF620 (CmGetKCBCacheSecurity.c)
 */

__int64 __fastcall CmpGetSecurityCacheEntryForKcbStack(__int64 a1, __int64 a2, _WORD *a3)
{
  __int64 v3; // rbp
  __int16 v4; // bx
  __int64 KcbAtLayerHeight; // rax
  __int64 v9; // rdi
  __int16 v10; // ax

  v3 = 0LL;
  v4 = *(_WORD *)(a1 + 2);
  if ( v4 >= 0 )
  {
    do
    {
      KcbAtLayerHeight = CmpGetKcbAtLayerHeight(a1);
      v9 = KcbAtLayerHeight;
      if ( *(_WORD *)(KcbAtLayerHeight + 66) )
      {
        if ( *(_BYTE *)(KcbAtLayerHeight + 65) == 1 )
          break;
      }
      if ( *(_DWORD *)(KcbAtLayerHeight + 40) == -1 || !CmRmIsKCBVisible(KcbAtLayerHeight, a2) )
      {
        v10 = v4;
      }
      else
      {
        v3 = v9;
        if ( *(_WORD *)(v9 + 66) && *(_BYTE *)(v9 + 65) )
          break;
        v10 = v4;
      }
      v4 = v10 - 1;
    }
    while ( (__int16)(v10 - 1) >= 0 );
  }
  if ( a3 )
    *a3 = *(_WORD *)(v3 + 66);
  return CmGetKCBCacheSecurity(v3, a2);
}
