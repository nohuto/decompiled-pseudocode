__int64 __fastcall VIDMM_GLOBAL::ChangeVideoMemoryReservation(
        struct _KTHREAD **this,
        struct VIDMM_PROCESS *a2,
        unsigned int a3,
        enum _D3DKMT_MEMORY_SEGMENT_GROUP a4,
        unsigned __int64 a5)
{
  struct _KTHREAD *v10; // rax
  unsigned int v11; // ebx
  _BYTE v12[8]; // [rsp+30h] [rbp-28h] BYREF
  DXGPUSHLOCK *v13; // [rsp+38h] [rbp-20h]
  int v14; // [rsp+40h] [rbp-18h]

  if ( a3 < *((_DWORD *)this + 1754) )
  {
    DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v12, this + 5134, 0);
    DXGPUSHLOCK::AcquireShared(v13);
    v10 = this[3];
    v14 = 1;
    v11 = VIDMM_PROCESS::ChangeVideoMemoryReservation(a2, *((_DWORD *)v10 + 60), a3, a4, a5);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v12);
    return v11;
  }
  else
  {
    WdLogSingleEntry1(3LL, a3);
    return 3221225485LL;
  }
}
