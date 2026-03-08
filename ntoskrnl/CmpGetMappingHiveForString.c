/*
 * XREFs of CmpGetMappingHiveForString @ 0x140A16EC8
 * Callers:
 *     CmpGetCmHiveFromVirtualPath @ 0x140A16E8C (CmpGetCmHiveFromVirtualPath.c)
 *     CmpGetVirtualStoreRoot @ 0x140A16FE4 (CmpGetVirtualStoreRoot.c)
 * Callees:
 *     ExReleaseFastMutex @ 0x140262170 (ExReleaseFastMutex.c)
 *     ExAcquireFastMutex @ 0x140262DC0 (ExAcquireFastMutex.c)
 *     CmpCompareUnicodeString @ 0x14077B3C0 (CmpCompareUnicodeString.c)
 *     CmpHashUnicodeComponent @ 0x1407A480C (CmpHashUnicodeComponent.c)
 */

__int64 __fastcall CmpGetMappingHiveForString(__m128i *a1, _QWORD *a2)
{
  unsigned int v4; // edi
  int v5; // ebx
  char *v6; // rcx
  unsigned int v7; // esi
  __int64 v8; // r15
  _WORD *v9; // rcx

  v4 = 0;
  v5 = CmpHashUnicodeComponent(a1);
  ExAcquireFastMutex(&CmpSIDMappingLock);
  if ( CmSIDMappingCacheHit >= 0
    && CmSIDMappingCacheHit < CmpSIDToHiveMappingCount
    && (v6 = (char *)CmpSIDToHiveMapping + 32 * CmSIDMappingCacheHit, *((_DWORD *)v6 + 4) == v5)
    && *(_WORD *)v6 == a1->m128i_i16[0]
    && !(unsigned int)CmpCompareUnicodeString((__int64)v6, (__int64)a1, 0) )
  {
    *a2 = *((_QWORD *)CmpSIDToHiveMapping + 4 * CmSIDMappingCacheHit + 3);
  }
  else
  {
    v7 = 0;
    if ( CmpSIDToHiveMappingCount )
    {
      while ( 1 )
      {
        v8 = 32LL * v7;
        v9 = (char *)CmpSIDToHiveMapping + v8;
        if ( *(_DWORD *)((char *)CmpSIDToHiveMapping + v8 + 16) == v5
          && *v9 == a1->m128i_i16[0]
          && !(unsigned int)CmpCompareUnicodeString((__int64)v9, (__int64)a1, 0) )
        {
          break;
        }
        if ( ++v7 >= CmpSIDToHiveMappingCount )
          goto LABEL_12;
      }
      CmSIDMappingCacheHit = v7;
      *a2 = *(_QWORD *)((char *)CmpSIDToHiveMapping + v8 + 24);
    }
    else
    {
LABEL_12:
      v4 = -1073741275;
    }
  }
  ExReleaseFastMutex(&CmpSIDMappingLock);
  return v4;
}
