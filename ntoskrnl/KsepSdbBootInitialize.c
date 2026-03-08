/*
 * XREFs of KsepSdbBootInitialize @ 0x14085E0A8
 * Callers:
 *     KseShimDatabaseBootInitialize @ 0x140B6FF30 (KseShimDatabaseBootInitialize.c)
 * Callees:
 *     KsepLogError @ 0x140303450 (KsepLogError.c)
 *     KsepPoolFreePaged @ 0x140303C7C (KsepPoolFreePaged.c)
 *     KsepPoolAllocatePaged @ 0x140303CA4 (KsepPoolAllocatePaged.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     KsepDebugPrint @ 0x14057E834 (KsepDebugPrint.c)
 *     SdbGetDatabaseEdition @ 0x14079CA70 (SdbGetDatabaseEdition.c)
 *     SdbInitDatabaseInMemory @ 0x14079CFC8 (SdbInitDatabaseInMemory.c)
 */

__int64 __fastcall KsepSdbBootInitialize(void *Src, size_t Size, __int64 a3)
{
  unsigned int v4; // ebp
  void *Paged; // rax
  unsigned int v7; // edi
  void *v8; // rbx
  __int64 inited; // rax
  __int64 v11; // rax
  __int64 v12; // rax

  v4 = Size;
  Paged = KsepPoolAllocatePaged((unsigned int)Size);
  v7 = 0;
  v8 = Paged;
  if ( Paged )
  {
    memmove(Paged, Src, v4);
    inited = SdbInitDatabaseInMemory((__int64)v8, v4);
    if ( inited )
    {
      *(_QWORD *)(a3 + 8) = v8;
      *(_QWORD *)a3 = inited;
      *(_DWORD *)(a3 + 48) = SdbGetDatabaseEdition(*(_QWORD *)(inited + 8));
    }
    else
    {
      v7 = -1073741823;
      v12 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
      KsepHistoryErrors[2 * v12 + 1] = -1073741823;
      KsepHistoryErrors[2 * v12] = 590004;
      if ( (KsepDebugFlag & 2) != 0 )
        KsepDebugPrint(1LL, "KSE: SdbInitDatabaseInMemory failed during boot!\n");
      KsepLogError(1LL, (__int64)"KSE: SdbInitDatabaseInMemory failed during boot!\n");
      KsepPoolFreePaged(v8);
    }
  }
  else
  {
    v7 = -1073741670;
    v11 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    KsepHistoryErrors[2 * v11 + 1] = -1073741670;
    KsepHistoryErrors[2 * v11] = 589988;
    if ( (KsepDebugFlag & 2) != 0 )
      KsepDebugPrint(0LL, "KSE: Failed to allocate memory for shim database during boot!\n");
    KsepLogError(0LL, (__int64)"KSE: Failed to allocate memory for shim database during boot!\n");
  }
  return v7;
}
