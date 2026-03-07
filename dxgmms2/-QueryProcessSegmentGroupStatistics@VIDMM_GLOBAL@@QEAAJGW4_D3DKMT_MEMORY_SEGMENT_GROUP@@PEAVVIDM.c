__int64 __fastcall VIDMM_GLOBAL::QueryProcessSegmentGroupStatistics(
        VIDMM_GLOBAL *this,
        unsigned __int16 a2,
        enum _D3DKMT_MEMORY_SEGMENT_GROUP a3,
        struct VIDMM_PROCESS *a4,
        struct _D3DKMT_QUERYSTATISTICS_PROCESS_SEGMENT_GROUP_INFORMATION *a5)
{
  unsigned int v5; // eax
  unsigned int v7; // esi
  __int64 v11; // rax
  unsigned int v12; // ebx
  unsigned __int64 v13; // [rsp+60h] [rbp-28h] BYREF
  _BYTE v14[8]; // [rsp+68h] [rbp-20h] BYREF
  DXGPUSHLOCK *v15; // [rsp+70h] [rbp-18h]
  int v16; // [rsp+78h] [rbp-10h]
  unsigned __int64 v17; // [rsp+90h] [rbp+8h] BYREF

  v5 = *((_DWORD *)this + 1754);
  v7 = a2;
  if ( a2 >= v5 )
  {
    WdLogSingleEntry2(3LL, a2, v5);
    return 3221225485LL;
  }
  if ( (unsigned int)a3 > D3DKMT_MEMORY_SEGMENT_GROUP_NON_LOCAL )
    return 3221225485LL;
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v14, (struct _KTHREAD **)this + 5134, 0);
  DXGPUSHLOCK::AcquireShared(v15);
  v11 = *((_QWORD *)this + 3);
  v16 = 1;
  v12 = VIDMM_PROCESS::QueryVideoMemoryInfo(
          a4,
          this,
          *(_DWORD *)(v11 + 240),
          v7,
          a3,
          (unsigned __int64 *)a5,
          (unsigned __int64 *)a5 + 1,
          &v13,
          &v17,
          (unsigned __int64 *)a5 + 3,
          (unsigned __int64 *)a5 + 2);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v14);
  return v12;
}
