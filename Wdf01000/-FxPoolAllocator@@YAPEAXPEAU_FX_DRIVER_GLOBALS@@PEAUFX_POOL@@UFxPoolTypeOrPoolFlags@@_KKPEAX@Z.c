FX_POOL **__fastcall FxPoolAllocator(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        FX_POOL *Pool,
        __m128i *TypeOrFlags,
        unsigned __int64 Size,
        ULONG Tag,
        void *Caller)
{
  FX_POOL **p_Pool; // rbp
  unsigned __int64 v7; // rbx
  unsigned __int8 v11; // cl
  SIZE_T v12; // rdx
  __int64 v13; // r8
  _QWORD *Pool2; // rax
  int WdfVerifierAllocateFailCount; // eax
  unsigned __int64 v17; // rax
  bool v18; // zf
  SIZE_T v20; // rdx
  FX_POOL_TRACKER *PoolWithTag; // rax
  FX_POOL_TRACKER *v22; // r10
  __m128i v23; // xmm0
  char IsPagedPoolType; // dl
  const _GUID *traceGuid; // [rsp+20h] [rbp-48h]
  int globals; // [rsp+28h] [rbp-40h]
  int v27; // [rsp+30h] [rbp-38h]

  p_Pool = 0LL;
  v7 = Size;
  if ( Size )
  {
    if ( FxDriverGlobals->FxPoolTrackingOn )
    {
      if ( FxDriverGlobals->FxVerifierOn )
      {
        WdfVerifierAllocateFailCount = FxDriverGlobals->WdfVerifierAllocateFailCount;
        if ( WdfVerifierAllocateFailCount != -1 )
        {
          if ( !WdfVerifierAllocateFailCount )
          {
            WPP_IFR_SF_(FxDriverGlobals, 2u, 0xAu, 0xBu, WPP_wdfpool_cpp_Traceguids);
            return 0LL;
          }
          _InterlockedDecrement(&FxDriverGlobals->WdfVerifierAllocateFailCount);
        }
      }
      if ( Size >= 0xFB0 )
      {
        v17 = 4096LL;
        if ( Size >= 0x1000 )
          v17 = Size;
        v18 = TypeOrFlags->m128i_i8[0] == 0;
        v13 = Tag;
        v12 = v17;
        goto LABEL_24;
      }
      v20 = Size + 80;
      if ( Size + 80 < Size )
      {
        WPP_IFR_SF_ddi(FxDriverGlobals, v20, (unsigned int)TypeOrFlags, Size, traceGuid, globals, v27, Size);
      }
      else
      {
        if ( TypeOrFlags->m128i_i8[0] )
          PoolWithTag = (FX_POOL_TRACKER *)ExAllocatePoolWithTag((POOL_TYPE)TypeOrFlags->m128i_i32[2], v20, Tag);
        else
          PoolWithTag = (FX_POOL_TRACKER *)ExAllocatePool2(TypeOrFlags->m128i_i64[1], v20, Tag);
        v22 = PoolWithTag;
        if ( PoolWithTag )
        {
          v23 = *TypeOrFlags;
          p_Pool = &PoolWithTag[1].Pool;
          PoolWithTag[1].Link.Flink = &PoolWithTag->Link;
          PoolWithTag[1].Link.Blink = &FxDriverGlobals->Linkage;
          if ( (unsigned __int8)_mm_cvtsi128_si32(v23) )
            IsPagedPoolType = FxIsPagedPoolType((_POOL_TYPE)v23.m128i_i32[2]);
          else
            IsPagedPoolType = v23.m128i_i8[9] & 1;
          if ( IsPagedPoolType )
            FxPoolInsertPagedAllocateTracker(Pool, v22, v7, Tag, Caller);
          else
            FxPoolInsertNonPagedAllocateTracker(Pool, v22, v7, Tag, Caller);
          return p_Pool;
        }
      }
    }
    else
    {
      if ( Size >= 0x1000 )
      {
LABEL_6:
        v11 = TypeOrFlags->m128i_i8[0];
        v12 = v7;
        v13 = Tag;
        if ( v7 < 0x1000 )
        {
          if ( v11 )
            Pool2 = ExAllocatePoolWithTag((POOL_TYPE)TypeOrFlags->m128i_i32[2], v7, Tag);
          else
            Pool2 = (_QWORD *)ExAllocatePool2(TypeOrFlags->m128i_i64[1], v7, Tag);
          if ( Pool2 )
          {
            *Pool2 = Pool2;
            p_Pool = (FX_POOL **)(Pool2 + 2);
            Pool2[1] = FxDriverGlobals;
          }
          return p_Pool;
        }
        v18 = v11 == 0;
LABEL_24:
        if ( v18 )
          return (FX_POOL **)ExAllocatePool2(TypeOrFlags->m128i_i64[1], v12, v13);
        else
          return (FX_POOL **)ExAllocatePoolWithTag((POOL_TYPE)TypeOrFlags->m128i_i32[2], v12, v13);
      }
      if ( Size + 16 >= Size )
      {
        v7 = Size + 16;
        goto LABEL_6;
      }
      WPP_IFR_SF_i(FxDriverGlobals, (unsigned __int8)Pool, 0xAu, 0xDu, WPP_wdfpool_cpp_Traceguids, Size);
    }
  }
  else
  {
    WPP_IFR_SF_(FxDriverGlobals, 2u, 0xAu, 0xAu, WPP_wdfpool_cpp_Traceguids);
    FxVerifierDbgBreakPoint(FxDriverGlobals);
  }
  return 0LL;
}
