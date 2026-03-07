void __fastcall VIDMM_GLOBAL::UnreferencePrimaryAllocationInternal(
        VIDMM_GLOBAL *this,
        struct HwQueueStagingList *a2,
        struct VIDMM_ALLOC *a3,
        char a4,
        bool a5,
        unsigned __int64 a6,
        unsigned __int64 a7)
{
  __int64 v7; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rbx
  __int64 v14; // rbp
  __int64 v15; // r14
  _QWORD v16[2]; // [rsp+50h] [rbp-28h] BYREF

  v7 = *((_QWORD *)a3 + 12);
  v10 = *(_QWORD *)(v7 + 24);
  _InterlockedDecrement((volatile signed __int32 *)a3 + 26);
  if ( a4 )
  {
    v11 = *(_QWORD *)(v7 + 16);
    if ( v11 )
      _InterlockedDecrement((volatile signed __int32 *)(v11 + 8));
  }
  if ( a5 && v10 )
  {
    v12 = 0LL;
    v16[0] = a6;
    v13 = 0LL;
    v16[1] = a7;
    v14 = 2LL;
    do
    {
      v15 = v16[v12];
      if ( v15 )
      {
        if ( (int)VidSchiSignalSyncObjectsFromCpu(
                    a2,
                    1u,
                    (struct _VIDSCH_SYNC_OBJECT **)(*(_QWORD *)(*((_QWORD *)a3 + 12) + 24LL) + 8 * v13),
                    0,
                    (char *)&v16[v13],
                    0LL) < 0 )
        {
          WdLogSingleEntry3(1LL, v13, *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a3 + 12) + 24LL) + v12 * 8), v15);
          ((void (*)(_QWORD, __int64, __int64, const wchar_t *, ...))DxgCoreInterface[86])(
            0LL,
            0x40000LL,
            0xFFFFFFFFLL,
            L"Failed to signal Flip fence[%d] 0x%p value 0x%I64x",
            v13,
            *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a3 + 12) + 24LL) + v12 * 8),
            v15,
            0LL,
            0LL);
        }
      }
      ++v13;
      ++v12;
      --v14;
    }
    while ( v14 );
  }
}
