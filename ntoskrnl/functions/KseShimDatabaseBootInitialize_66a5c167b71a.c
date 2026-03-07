__int64 __fastcall KseShimDatabaseBootInitialize(void *Src, size_t Size, void *a3, unsigned int a4)
{
  unsigned int v6; // ebx
  int v8; // ebx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax

  v6 = Size;
  if ( KsepShimDbDuringBoot )
  {
    v10 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    KsepHistoryErrors[2 * v10 + 1] = -1073740768;
    KsepHistoryErrors[2 * v10] = 590051;
    if ( (KsepDebugFlag & 4) != 0 )
      RtlAssert("KsepShimDbDuringBoot == FALSE", "minkernel\\ntos\\kshim\\ksesdb.c", 0xE3u, 0LL);
  }
  if ( KsepShimDbHandle )
  {
    v11 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    KsepHistoryErrors[2 * v11 + 1] = -1073740768;
    KsepHistoryErrors[2 * v11] = 590052;
    if ( (KsepDebugFlag & 4) != 0 )
      RtlAssert("KsepShimDbHandle == NULL", "minkernel\\ntos\\kshim\\ksesdb.c", 0xE4u, 0LL);
  }
  KsepShimDbLock = 0LL;
  KsepShimDbHandle = 0LL;
  KsepShimDbDuringBoot = 1;
  memset(&KsepShimDb, 0, 0x70uLL);
  if ( Src && v6 )
  {
    v8 = KsepSdbBootInitialize(Src, v6, (__int64)&KsepShimDb);
    if ( v8 >= 0 )
    {
      if ( a3 && a4 )
      {
        if ( (int)KsepSdbBootInitialize(a3, a4, (__int64)&unk_140C40878) < 0 )
        {
          v12 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
          KsepHistoryErrors[2 * v12 + 1] = v8;
          KsepHistoryErrors[2 * v12] = 590110;
          if ( (KsepDebugFlag & 2) != 0 )
            KsepDebugPrint(1LL, "KSE: KsepSdbBootInitialize failed for patch SDB!\n");
          KsepLogError(1LL, (__int64)"KSE: KsepSdbBootInitialize failed for patch SDB!\n");
        }
        else if ( dword_140C40870 >= (unsigned int)dword_140C408A8 )
        {
          KsepSdbBootRelease((__int64)&unk_140C40878);
        }
      }
      ++KsepShimDbRefCount;
      v8 = 0;
      KsepShimDbHandle = (__int64)&KsepShimDb;
    }
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return (unsigned int)v8;
}
