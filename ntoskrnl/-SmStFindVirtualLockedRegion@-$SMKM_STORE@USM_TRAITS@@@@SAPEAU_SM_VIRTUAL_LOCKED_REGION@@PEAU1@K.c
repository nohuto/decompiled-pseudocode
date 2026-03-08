/*
 * XREFs of ?SmStFindVirtualLockedRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAU_SM_VIRTUAL_LOCKED_REGION@@PEAU1@KPEAX@Z @ 0x1405BE7AC
 * Callers:
 *     ?SmStLockVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KPEAT_SM_VIRTUAL_REGION@@PEAXK@Z @ 0x1405BE970 (-SmStLockVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KPEAT_SM_VIRTUAL_REGION@@PEAXK@Z.c)
 *     ?SmStUnmapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z @ 0x1405BFFD4 (-SmStUnmapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStFindVirtualLockedRegion(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned __int64 v3; // r10
  unsigned __int64 v4; // rcx
  bool v5; // zf

  v3 = *(_QWORD *)(a1 + 6224);
  v4 = v3;
  if ( a2 != -1 )
    v4 = v3 + 8LL * a2;
  while ( v4 < v3 + 80 )
  {
    if ( *(_QWORD *)v4 )
      v5 = *(_QWORD *)(*(_QWORD *)v4 + 32LL) == a3;
    else
      v5 = a3 == 0;
    if ( v5 )
      return v4;
    if ( v4 >= v3 + 64 || a2 == -1 )
      v4 += 8LL;
    else
      v4 = v3 + 64;
  }
  return 0LL;
}
