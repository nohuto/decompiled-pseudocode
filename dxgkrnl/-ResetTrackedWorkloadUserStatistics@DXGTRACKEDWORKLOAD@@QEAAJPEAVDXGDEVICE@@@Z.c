__int64 __fastcall DXGTRACKEDWORKLOAD::ResetTrackedWorkloadUserStatistics(struct _KTHREAD **this, struct DXGDEVICE *a2)
{
  unsigned int i; // ecx
  __int64 v4; // rdx
  _BYTE v6[8]; // [rsp+20h] [rbp-28h] BYREF
  DXGPUSHLOCK *v7; // [rsp+28h] [rbp-20h]
  int v8; // [rsp+30h] [rbp-18h]

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v6, this + 5, 0);
  DXGPUSHLOCK::AcquireExclusive(v7);
  v8 = 2;
  for ( i = 0; i < *((_DWORD *)this + 26); ++i )
  {
    v4 = (__int64)this[4] + 136 * i;
    if ( *(_BYTE *)(v4 + 32) )
      *(_BYTE *)(v4 + 120) = 0;
  }
  *((_DWORD *)this + 48) = 0;
  this[25] = (struct _KTHREAD *)0x7FEFFFFFFFFFFFFFLL;
  this[27] = 0LL;
  this[26] = (struct _KTHREAD *)0xFFEFFFFFFFFFFFFFLL;
  this[28] = 0LL;
  this[38] = 0LL;
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v6);
  return 0LL;
}
