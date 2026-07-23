/*
 * XREFs of ViThunkCreateSharedExportInformation @ 0x1409C21D8
 * Callers:
 *     VfThunkAddTargetNotify @ 0x1409C2100 (VfThunkAddTargetNotify.c)
 * Callees:
 *     RtlNumberOfClearBits @ 0x140253060 (RtlNumberOfClearBits.c)
 *     memset @ 0x140413800 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 *     ViThunkSnapSharedExports @ 0x1409C22AC (ViThunkSnapSharedExports.c)
 *     ViThunkFreeSharedThunksArray @ 0x1409C2458 (ViThunkFreeSharedThunksArray.c)
 */

__int64 __fastcall ViThunkCreateSharedExportInformation(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _RTL_BITMAP *a4,
        _QWORD *a5)
{
  unsigned int v9; // ebx
  ULONG v10; // eax
  ULONG v11; // ebp
  PVOID PoolWithTag; // rax

  v9 = 1;
  v10 = RtlNumberOfClearBits(a4);
  v11 = v10;
  if ( v10 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 32LL * v10, 0x54496656u);
    *a5 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 32LL * v11);
      if ( !(unsigned int)ViThunkSnapSharedExports(a1, a2, a3, a4, v11, *a5) )
        ViThunkFreeSharedThunksArray(a5);
    }
    else
    {
      return 0;
    }
  }
  else
  {
    *a5 = 0LL;
  }
  return v9;
}
