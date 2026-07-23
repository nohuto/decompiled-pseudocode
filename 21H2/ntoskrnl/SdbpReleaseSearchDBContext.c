/*
 * XREFs of SdbpReleaseSearchDBContext @ 0x140754DBC
 * Callers:
 *     SdbpCheckKObject @ 0x140754F1C (SdbpCheckKObject.c)
 *     SdbGetDatabaseMatch @ 0x14077E808 (SdbGetDatabaseMatch.c)
 * Callees:
 *     Feature_CompatBuildInVb__private_IsEnabledDeviceUsage @ 0x1403F989C (Feature_CompatBuildInVb__private_IsEnabledDeviceUsage.c)
 *     SdbpFreeAppAttributes @ 0x1405D1E50 (SdbpFreeAppAttributes.c)
 *     AslHashFree @ 0x140968658 (AslHashFree.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void __fastcall SdbpReleaseSearchDBContext(_QWORD *a1)
{
  void *v2; // rcx
  void *v3; // rcx
  _DWORD *v4; // r8
  __int64 i; // rsi
  __int64 v6; // rdi
  void *v7; // rcx
  void *v8; // rcx
  void *v9; // rcx
  void *v10; // rcx
  void *v11; // rcx
  void *v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx

  if ( a1 )
  {
    v2 = (void *)a1[3];
    if ( v2 )
    {
      ExFreePoolWithTag(v2, 0x74705041u);
      a1[3] = 0LL;
    }
    v3 = (void *)a1[8];
    if ( v3 )
    {
      ExFreePoolWithTag(v3, 0x74705041u);
      a1[8] = 0LL;
    }
    v4 = (_DWORD *)a1[9];
    if ( v4 )
    {
      for ( i = 0LL; (unsigned int)i < *v4; i = (unsigned int)(i + 1) )
      {
        v6 = (__int64)&v4[12 * i + 2];
        if ( v6 )
        {
          v7 = *(void **)(v6 + 16);
          if ( v7 )
          {
            AslHashFree(v7);
            *(_QWORD *)(v6 + 16) = 0LL;
          }
          v8 = *(void **)(v6 + 24);
          if ( v8 )
          {
            AslHashFree(v8);
            *(_QWORD *)(v6 + 24) = 0LL;
          }
          v9 = *(void **)(v6 + 40);
          if ( v9 )
          {
            ExFreePoolWithTag(v9, 0x74705041u);
            *(_OWORD *)(v6 + 32) = 0LL;
          }
        }
        v4 = (_DWORD *)a1[9];
      }
      if ( v4 )
        ExFreePoolWithTag(v4, 0x74705041u);
      a1[9] = 0LL;
    }
    v10 = (void *)a1[4];
    if ( v10 )
    {
      ExFreePoolWithTag(v10, 0x74705041u);
      a1[4] = 0LL;
    }
    v11 = (void *)a1[5];
    if ( v11 )
    {
      ExFreePoolWithTag(v11, 0x74705041u);
      a1[5] = 0LL;
    }
    v12 = (void *)a1[6];
    if ( v12 )
    {
      ExFreePoolWithTag(v12, 0x74705041u);
      a1[6] = 0LL;
    }
    v13 = a1[11];
    if ( v13 )
    {
      SdbpFreeAppAttributes(v13);
      a1[11] = 0LL;
    }
    if ( (unsigned int)Feature_CompatBuildInVb__private_IsEnabledDeviceUsage() )
    {
      v14 = a1[12];
      if ( v14 )
      {
        SdbpFreeAppAttributes(v14);
        a1[12] = 0LL;
      }
    }
  }
}
