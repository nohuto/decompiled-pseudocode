__int64 __fastcall VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReferenceSafe(volatile signed __int32 *P, struct _KTHREAD **a2)
{
  unsigned __int32 v3; // ebx
  _BYTE v5[8]; // [rsp+20h] [rbp-28h] BYREF
  DXGPUSHLOCK *v6; // [rsp+28h] [rbp-20h]
  int v7; // [rsp+30h] [rbp-18h]

  v3 = _InterlockedDecrement(P + 32);
  if ( !v3 )
  {
    DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v5, a2 + 7, 0);
    DXGPUSHLOCK::AcquireExclusive(v6);
    v7 = 2;
    if ( P )
      VIDMM_MAPPED_VA_RANGE::`scalar deleting destructor'((VIDMM_MAPPED_VA_RANGE *)P);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v5);
  }
  return v3;
}
