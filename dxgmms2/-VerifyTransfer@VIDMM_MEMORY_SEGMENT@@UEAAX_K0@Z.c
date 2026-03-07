void __fastcall VIDMM_MEMORY_SEGMENT::VerifyTransfer(VIDMM_MEMORY_SEGMENT *this, int a2, int a3)
{
  char v6; // [rsp+60h] [rbp+8h] BYREF
  char v7; // [rsp+78h] [rbp+20h] BYREF

  v6 = 0;
  VIDMM_LINEAR_POOL::DirectedIterateAllocatedBlocksInRange(
    *((_QWORD *)this + 19),
    a2,
    a3,
    0,
    (__int64)VIDMM_SEGMENT::SaveResourceCB,
    (__int64)this,
    0LL,
    (__int64)&v7,
    (__int64)&v6);
  VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(*((VIDMM_GLOBAL **)this + 1), *((_DWORD *)this + 95));
  VIDMM_LINEAR_POOL::DirectedIterateAllocatedBlocksInRange(
    *((_QWORD *)this + 19),
    a2,
    a3,
    0,
    (__int64)VIDMM_SEGMENT::RestoreResourceCB,
    (__int64)this,
    0LL,
    (__int64)&v7,
    (__int64)&v6);
  VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(*((VIDMM_GLOBAL **)this + 1), *((_DWORD *)this + 95));
}
