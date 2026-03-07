void __fastcall VIDMM_TELEMETRY_PAGING_COSTS::AddData(
        VIDMM_TELEMETRY_PAGING_COSTS *this,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        unsigned int a6,
        unsigned __int64 a7,
        unsigned int a8,
        unsigned __int64 a9,
        unsigned int a10,
        unsigned __int64 a11,
        unsigned int a12,
        unsigned __int64 a13,
        unsigned int a14,
        unsigned __int64 a15,
        unsigned int a16)
{
  int v18; // ebp
  __int64 BucketIdForAllocationSizePow2; // rbx
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // rcx
  _BYTE v27[24]; // [rsp+20h] [rbp-18h] BYREF

  v18 = a3;
  BucketIdForAllocationSizePow2 = (unsigned int)GetBucketIdForAllocationSizePow2(a2, a2, a3);
  DXGAUTOPUSHLOCKFASTEXCLUSIVE::DXGAUTOPUSHLOCKFASTEXCLUSIVE(
    (DXGAUTOPUSHLOCKFASTEXCLUSIVE *)v27,
    (VIDMM_TELEMETRY_PAGING_COSTS *)((char *)this + 3168));
  ++*((_DWORD *)this + BucketIdForAllocationSizePow2);
  v20 = a4;
  if ( *((_QWORD *)this + BucketIdForAllocationSizePow2 + 11) > a4 )
    v20 = *((_QWORD *)this + BucketIdForAllocationSizePow2 + 11);
  *((_QWORD *)this + BucketIdForAllocationSizePow2 + 33) += a4;
  *((_QWORD *)this + BucketIdForAllocationSizePow2 + 11) = v20;
  v21 = a5;
  *((_DWORD *)this + BucketIdForAllocationSizePow2 + 110) += a6;
  if ( *((_QWORD *)this + BucketIdForAllocationSizePow2 + 66) > a5 )
    v21 = *((_QWORD *)this + BucketIdForAllocationSizePow2 + 66);
  *((_QWORD *)this + BucketIdForAllocationSizePow2 + 88) += a5;
  *((_QWORD *)this + BucketIdForAllocationSizePow2 + 66) = v21;
  v22 = a7;
  *((_DWORD *)this + BucketIdForAllocationSizePow2 + 220) += a8;
  if ( *((_QWORD *)this + BucketIdForAllocationSizePow2 + 121) > a7 )
    v22 = *((_QWORD *)this + BucketIdForAllocationSizePow2 + 121);
  *((_QWORD *)this + BucketIdForAllocationSizePow2 + 143) += a7;
  *((_QWORD *)this + BucketIdForAllocationSizePow2 + 121) = v22;
  v23 = a9;
  *((_DWORD *)this + BucketIdForAllocationSizePow2 + 330) += a10;
  if ( *((_QWORD *)this + BucketIdForAllocationSizePow2 + 176) > a9 )
    v23 = *((_QWORD *)this + BucketIdForAllocationSizePow2 + 176);
  *((_QWORD *)this + BucketIdForAllocationSizePow2 + 198) += a9;
  *((_QWORD *)this + BucketIdForAllocationSizePow2 + 176) = v23;
  v24 = a11;
  *((_DWORD *)this + BucketIdForAllocationSizePow2 + 440) += a12;
  if ( *((_QWORD *)this + BucketIdForAllocationSizePow2 + 231) > a11 )
    v24 = *((_QWORD *)this + BucketIdForAllocationSizePow2 + 231);
  *((_QWORD *)this + BucketIdForAllocationSizePow2 + 253) += a11;
  *((_QWORD *)this + BucketIdForAllocationSizePow2 + 231) = v24;
  v25 = a13;
  *((_DWORD *)this + BucketIdForAllocationSizePow2 + 550) += a14;
  if ( *((_QWORD *)this + BucketIdForAllocationSizePow2 + 286) > a13 )
    v25 = *((_QWORD *)this + BucketIdForAllocationSizePow2 + 286);
  *((_QWORD *)this + BucketIdForAllocationSizePow2 + 308) += a13;
  *((_QWORD *)this + BucketIdForAllocationSizePow2 + 286) = v25;
  v26 = a15;
  *((_DWORD *)this + BucketIdForAllocationSizePow2 + 660) += a16;
  if ( *((_QWORD *)this + BucketIdForAllocationSizePow2 + 341) > a15 )
    v26 = *((_QWORD *)this + BucketIdForAllocationSizePow2 + 341);
  *((_QWORD *)this + BucketIdForAllocationSizePow2 + 363) += a15;
  *((_QWORD *)this + BucketIdForAllocationSizePow2 + 341) = v26;
  *((_DWORD *)this + BucketIdForAllocationSizePow2 + 770) += v18;
  DXGAUTOPUSHLOCKFASTEXCLUSIVE::Release((DXGAUTOPUSHLOCKFASTEXCLUSIVE *)v27);
}
