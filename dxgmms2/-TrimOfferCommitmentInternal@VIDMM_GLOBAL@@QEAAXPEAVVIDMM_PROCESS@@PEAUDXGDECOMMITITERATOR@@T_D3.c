void __fastcall VIDMM_GLOBAL::TrimOfferCommitmentInternal(
        struct _KTHREAD **this,
        struct VIDMM_PROCESS *a2,
        struct DXGDECOMMITITERATOR *a3,
        union _D3DKMT_TRIMPROCESSCOMMITMENT_FLAGS a4,
        unsigned __int64 a5,
        unsigned __int64 *a6)
{
  char v6; // bl
  unsigned __int64 v7; // r15
  unsigned __int64 v11; // r12
  struct _KTHREAD *v12; // rax
  __int64 v13; // rdi
  _QWORD *v14; // rax
  _QWORD *v15; // rdi
  char v16; // bl
  bool v17; // bp
  __int64 v18; // rcx
  _QWORD *v19; // rax
  __int64 v20; // [rsp+20h] [rbp-58h]
  _BYTE v21[8]; // [rsp+28h] [rbp-50h] BYREF
  DXGPUSHLOCK *v22; // [rsp+30h] [rbp-48h]
  int v23; // [rsp+38h] [rbp-40h]
  struct _VIDMM_GLOBAL_ALLOC *v24; // [rsp+80h] [rbp+8h]
  _QWORD *v25; // [rsp+88h] [rbp+10h]

  v6 = (char)a4.0;
  v7 = a5;
  v11 = 0LL;
  v20 = *(_BYTE *)&a4.0 & 1;
  WdLogSingleEntry1(4LL, v20);
  if ( (v6 & 1) != 0 )
  {
    v7 = (unsigned int)(dword_1C0076570 << 20);
    if ( a5 < v7 )
      v7 = a5;
  }
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v21, this + 5134, 0);
  DXGPUSHLOCK::AcquireShared(v22);
  v12 = this[3];
  v23 = 1;
  v13 = *(_QWORD *)(*((_QWORD *)a2 + 2) + 8LL * *((unsigned int *)v12 + 60));
  if ( v13 && *(_QWORD *)(v13 + 520) == *(_QWORD *)a3 )
  {
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(this + 4997));
    v14 = (_QWORD *)(v13 + 424);
    v15 = (_QWORD *)*((_QWORD *)a3 + 3);
    v25 = v14;
    if ( v15 != v14 )
    {
      v16 = (v6 & 2) != 0;
      do
      {
        v24 = (struct _VIDMM_GLOBAL_ALLOC *)(v15 - 55);
        *((_QWORD *)a3 + 3) = *v15;
        v17 = 0;
        if ( VIDMM_GLOBAL::IsAllocationDecommitCandidate(
               (VIDMM_GLOBAL *)this,
               (struct _VIDMM_GLOBAL_ALLOC *)(v15 - 55),
               v16) )
        {
          this[5593] = (struct _KTHREAD *)(v15 - 55);
          v18 = *v15;
          if ( *(_QWORD **)(*v15 + 8LL) != v15 || (v19 = (_QWORD *)v15[1], (_QWORD *)*v19 != v15) )
            __fastfail(3u);
          *v19 = v18;
          *(_QWORD *)(v18 + 8) = v19;
          *v15 = 0LL;
          this[4998] = 0LL;
          ExReleasePushLockExclusiveEx(this + 4997, 0LL);
          KeLeaveCriticalRegion();
          if ( VIDMM_GLOBAL::DecommitGlobalAllocation((VIDMM_GLOBAL *)this, v24) )
          {
            v11 += *((_QWORD *)v24 + 1);
            v17 = v11 >= v7;
          }
          DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(this + 4997));
          this[5593] = 0LL;
          if ( v17 )
            break;
        }
        v15 = (_QWORD *)*((_QWORD *)a3 + 3);
      }
      while ( v15 != v25 );
    }
    this[4998] = 0LL;
    ExReleasePushLockExclusiveEx(this + 4997, 0LL);
    KeLeaveCriticalRegion();
    *a6 = v11;
    WdLogSingleEntry3(4LL, a5, v11, v20);
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v21);
}
